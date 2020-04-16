#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QElapsedTimer>
#include <QDir>
#include <QtCore>
#include <fstream>
#include <QDebug>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "analyzer.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->radioButtonCheck, SIGNAL(clicked()), this, SLOT(optionsradiobutt_clicked()));
    connect(ui->radioButtonTwofiles, SIGNAL(clicked()), this, SLOT(optionsradiobutt_clicked()));

    connect(ui->chooseButton, SIGNAL(clicked()), this, SLOT(choosebuttonsclicked()));
    connect(ui->chooseButton_2, SIGNAL(clicked()), this, SLOT(choosebuttonsclicked()));

    ui->linePath_2->hide();
    ui->chooseButton_2->hide();

    //databased read
    QDir dir(":/resource/database");
    dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    dir.setSorting(QDir::Size | QDir::Reversed);   //sort
    QFileInfoList list = dir.entryInfoList();
    for(auto elem : list)
    {
        ui->listWidget->addItem(elem.fileName());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::choosebuttonsclicked()
{
    QString path = QFileDialog::getOpenFileName(0, "Choose file", "");
    QPushButton* pushbutt = (QPushButton*)sender();
    if(pushbutt->objectName() == "chooseButton")
    {
        ui->linePath->setText(path);
    }
    else
    {
        ui->linePath_2->setText(path);
    }
}


void MainWindow::optionsradiobutt_clicked()
{
    QRadioButton* rbutt = (QRadioButton*)sender();

    if(rbutt->text() == "Standard check")
    {
        ui->linePath_2->hide();
        ui->chooseButton_2->hide();
        ui->groupBoxSettings->show();
        ui->listWidget->show();
    }
    else
    {
        ui->linePath_2->show();
        ui->chooseButton_2->show();
        ui->groupBoxSettings->hide();
        ui->listWidget->hide();
    }
}
void error_back_fill(QWidget* widget)
{
    QElapsedTimer time;
    time.start();
    QPalette palette;
    palette.setColor(QPalette::Base,Qt::Key_Green);
    widget->setPalette(palette);
    widget->repaint();
    for(;time.elapsed() < 400;){}
    palette.setColor(QPalette::Base,QColor(186, 189, 182));
    widget->setPalette(palette);
}

void bring_to_standard_view(std::string& str)
{
    Analyzer::delete_unnecessary(str);

    Analyzer::distinguish_operators(str);

    std::string before = "";
    std::string current;
    size_t index = 0;
    size_t curr_pos = 1;
    std::string new_str = "";
    //replacement of names with standard
    unsigned int id = 0;

    str += ' ';
    while((index = str.find(' ', curr_pos)) != std::string::npos)
    {
        current = str.substr(curr_pos, index - curr_pos);
        curr_pos = index + 1;
        if(before == "") before = current;
        else
        {
            auto double_iterator = Analyzer::find_words_id_and_special(before);
            if(double_iterator.first != Analyzer::words_id_end())
            {
                new_str += (double_iterator.first)->second + ' ';
                before = current;
            }
            else if(double_iterator.second != Analyzer::special_end())
            {
                new_str += (double_iterator.second)->second + ' ';
                before = current;
            }
            else if(Analyzer::belong_to_stl(before, current))
            {
                new_str += before + ' ' + current + ' ';
                before = "";
            }
            else if((before.length() == 1 && (!std::isalpha(before[0]) || before[0] == '_')) || std::all_of(before.begin(), before.end(), ::isdigit))
            {
                new_str += before + ' ';
                before = current;
            }
            else if((before[0] == '"' && before[before.length() - 1] == '"')
                 || (before[0] == '\'' && before[before.length() - 1] == '\''))
            {
                new_str += before + ' ';
                before = current;
            }
            else
            {
                std::string tmperid = std::to_string(id++);
                std::string tmper = "";
                for    (size_t i = 0; i < (6 - tmperid.length()); ++i)
                {
                    tmper += '0';
                }
                tmper = "ID" + tmper + tmperid;
                Analyzer::insert_to_words_id(tmper, before);
                new_str += tmper + ' ';
                before = current;
            }
        }
    }
    str = new_str;
    Analyzer::clear();
}

void read(std::string& str, const std::string& path)
{
    std::ifstream in(path);
    if (in.is_open())
    {
        std::string tmp;
        while (std::getline(in, tmp))
        {
            str += (tmp + '\n');
        }
    }
}

void start_that_shit0(MainWindow* window)
{
    std::string fstr = "", sstr = "";
    read(fstr, (window->ui->linePath->text()).toUtf8().constData());
    read(sstr, (window->ui->linePath_2->text()).toUtf8().constData());
    bring_to_standard_view(fstr);
    bring_to_standard_view(sstr);
    unsigned delta = Analyzer::wagner_fisher(fstr, sstr, 1, 1, 1);
    window->ui->summaryText->setText(QString::number(delta));
}

void start_that_shit1(MainWindow* window)
{
    std::string fstr = "";
    read(fstr, (window->ui->linePath->text()).toUtf8().constData());
    bring_to_standard_view(fstr);
    //Подключаем базу данных
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/almir/source/reposQt/Codeantiplag/Almplag/database/01");
    qDebug() << db.open();

    if(db.isOpen())
    {
        //Осуществляем запрос
        QSqlQuery query;
        query.exec("SELECT _id, Name, Text FROM 01");
        //QApplication::applicationDirPath ();
        //Выводим значения из запроса
        while (query.next())
        {
            qDebug() << "fsadgag";
            QString _id = query.value(0).toString();
            QString name = query.value(1).toString();
            QString check_str = query.value(2).toString();
            qDebug() << check_str;
            qDebug() << "fsadgag";
        }
    }
    else
    {
        qDebug() << "Suck my dick";
    }
}

void MainWindow::on_startButton_clicked()
{
    if(ui->linePath->text() == "")
    {
        ui->statusbar->showMessage("path is empty");
        error_back_fill(ui->linePath);
    }
    else if((ui->linePath->text()).right(3) != "cpp")
    {
        ui->statusbar->showMessage("wrong format of file");
        error_back_fill(ui->linePath);
    }
    else if(ui->linePath_2->isVisible())
    {
        if(ui->linePath_2->text() == "")
        {
            ui->statusbar->showMessage("path is empty");
            error_back_fill(ui->linePath_2);
        }
        else if((ui->linePath_2->text()).right(3) != "cpp")
        {
            ui->statusbar->showMessage("wrong format of file");
            error_back_fill(ui->linePath_2);
        }
        else
            start_that_shit0(this);
    }
    else
    {
        start_that_shit1(this);
    }
}
