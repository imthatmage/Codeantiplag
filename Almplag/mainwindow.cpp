#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QElapsedTimer>

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

    //should reread database
    ui->listWidget->addItem("01");
    ui->listWidget->addItem("02");
    ui->listWidget->addItem("03");
    ui->listWidget->item(0)->setSelected(true);
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

void MainWindow::on_chooseButton_3_clicked()
{
    if(ui->linePath->text() == "")
    {
        ui->statusbar->showMessage("path is empty");
        QElapsedTimer time;
        time.start();
        QPalette palette;
        palette.setColor(QPalette::Base,Qt::red);
        ui->linePath->setPalette(palette);
        ui->linePath->repaint();
        for(;time.elapsed() < 1000;)
        {

        }
        palette.setColor(QPalette::Base,QColor(252, 233, 79));
        ui->linePath->setPalette(palette);
    }
    else if((ui->linePath_2->isVisible() && ui->linePath_2->text() == ""))
    {
        ui->statusbar->showMessage("path is empty");
        QElapsedTimer time;
        time.start();
        QPalette palette;
        palette.setColor(QPalette::Base,Qt::red);
        ui->linePath_2->setPalette(palette);
        ui->linePath_2->repaint();
        for(;time.elapsed() < 1000;)
        {

        }
        palette.setColor(QPalette::Base,QColor(252, 233, 79));
        ui->linePath_2->setPalette(palette);
    }
    else if((ui->linePath->text()).right(3) != "cpp")
    {
        ui->statusbar->showMessage("wrong format of file");

    }
    else if((ui->linePath_2->isVisible() && (ui->linePath_2->text()).right(3) != "cpp"))
    {

    }

}
