#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->radioButtonCheck, SIGNAL(clicked()), this, SLOT(optionsradiobutt_clicked()));
    connect(ui->radioButtonTwofiles, SIGNAL(clicked()), this, SLOT(optionsradiobutt_clicked()));
    ui->linePath_2->hide();
    ui->chooseButton_2->hide();
    //ui->listWidget->hide();
    ui->listWidget->addItem("01");
    ui->listWidget->addItem("02");
    ui->listWidget->addItem("03");
    QPixmap pix(":/resource/img/cat-2143332_1920.jpg");
    int w = ui->image->width();
    int h = ui->image->height();
    ui->image->setPixmap(pix.scaled(w, h));
    ui->image->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_chooseButton_clicked()
{
    QString path = QFileDialog::getOpenFileName(0, "Choose file", "");
    ui->linePath->setText(path);
}


void MainWindow::optionsradiobutt_clicked()
{
    QRadioButton* rbutt = (QRadioButton*)sender();

    if(rbutt->text() == "Standard check")
    {
        ui->linePath_2->hide();
        ui->chooseButton_2->hide();
        ui->listWidget->show();
        ui->image->hide();
    }
    else
    {
        ui->linePath_2->show();
        ui->chooseButton_2->show();
        ui->image->show();
        ui->listWidget->hide();
    }
}
