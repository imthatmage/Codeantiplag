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
