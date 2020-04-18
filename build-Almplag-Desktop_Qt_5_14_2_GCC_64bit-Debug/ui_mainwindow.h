/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_4;
    QLabel *summaryText;
    QLabel *additionalAnnotation;
    QGroupBox *groupBoxFile;
    QLineEdit *linePath;
    QPushButton *chooseButton;
    QLineEdit *linePath_2;
    QPushButton *chooseButton_2;
    QGroupBox *groupBoxOptions;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonCheck;
    QRadioButton *radioButtonTwofiles;
    QGroupBox *groupBoxSettings;
    QListWidget *listWidget;
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *lineName;
    QLabel *label_2;
    QPushButton *startButton;
    QLabel *labelName2;
    QLineEdit *lineName2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(512, 420);
        MainWindow->setMinimumSize(QSize(512, 400));
        MainWindow->setMaximumSize(QSize(512, 420));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/img/14302.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(9, 288, 494, 81));
        QPalette palette;
        QBrush brush(QColor(238, 238, 236, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(52, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(154, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(103, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(26, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(35, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush6);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        QBrush brush8(QColor(186, 189, 182, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush8);
        QBrush brush9(QColor(85, 87, 83, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush10(QColor(115, 210, 22, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        QBrush brush11(QColor(164, 0, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush11);
        QBrush brush12(QColor(153, 255, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        QBrush brush13(QColor(255, 255, 220, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
        QBrush brush14(QColor(0, 0, 0, 128));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush15(QColor(145, 145, 145, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBox_4->setPalette(palette);
        summaryText = new QLabel(groupBox_4);
        summaryText->setObjectName(QString::fromUtf8("summaryText"));
        summaryText->setGeometry(QRect(10, 20, 471, 31));
        additionalAnnotation = new QLabel(groupBox_4);
        additionalAnnotation->setObjectName(QString::fromUtf8("additionalAnnotation"));
        additionalAnnotation->setGeometry(QRect(7, 56, 471, 20));
        groupBoxFile = new QGroupBox(centralwidget);
        groupBoxFile->setObjectName(QString::fromUtf8("groupBoxFile"));
        groupBoxFile->setGeometry(QRect(9, 9, 494, 104));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBoxFile->setPalette(palette1);
        linePath = new QLineEdit(groupBoxFile);
        linePath->setObjectName(QString::fromUtf8("linePath"));
        linePath->setGeometry(QRect(10, 30, 361, 24));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette2.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        linePath->setPalette(palette2);
        linePath->setReadOnly(true);
        chooseButton = new QPushButton(groupBoxFile);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));
        chooseButton->setGeometry(QRect(380, 30, 101, 24));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette3.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        chooseButton->setPalette(palette3);
        linePath_2 = new QLineEdit(groupBoxFile);
        linePath_2->setObjectName(QString::fromUtf8("linePath_2"));
        linePath_2->setGeometry(QRect(10, 70, 361, 24));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette4.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette4.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        linePath_2->setPalette(palette4);
        linePath_2->setReadOnly(true);
        chooseButton_2 = new QPushButton(groupBoxFile);
        chooseButton_2->setObjectName(QString::fromUtf8("chooseButton_2"));
        chooseButton_2->setGeometry(QRect(380, 70, 101, 24));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette5.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette5.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        chooseButton_2->setPalette(palette5);
        groupBoxOptions = new QGroupBox(centralwidget);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        groupBoxOptions->setGeometry(QRect(9, 119, 231, 101));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette6.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette6.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBoxOptions->setPalette(palette6);
        verticalLayout = new QVBoxLayout(groupBoxOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonCheck = new QRadioButton(groupBoxOptions);
        radioButtonCheck->setObjectName(QString::fromUtf8("radioButtonCheck"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette7.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette7.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        radioButtonCheck->setPalette(palette7);
        radioButtonCheck->setChecked(true);

        verticalLayout->addWidget(radioButtonCheck);

        radioButtonTwofiles = new QRadioButton(groupBoxOptions);
        radioButtonTwofiles->setObjectName(QString::fromUtf8("radioButtonTwofiles"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette8.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette8.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        radioButtonTwofiles->setPalette(palette8);

        verticalLayout->addWidget(radioButtonTwofiles);

        groupBoxSettings = new QGroupBox(centralwidget);
        groupBoxSettings->setObjectName(QString::fromUtf8("groupBoxSettings"));
        groupBoxSettings->setGeometry(QRect(272, 119, 231, 103));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette9.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette9.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        groupBoxSettings->setPalette(palette9);
        listWidget = new QListWidget(groupBoxSettings);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 221, 81));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-70, -30, 681, 441));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette10.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette10.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label->setPalette(palette10);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/fractal-1621737_640.jpg")));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(9, 220, 491, 80));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        groupBox->setPalette(palette11);
        lineName = new QLineEdit(groupBox);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setGeometry(QRect(40, 10, 113, 24));
        QPalette palette12;
        QBrush brush16(QColor(136, 138, 133, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush16);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette12.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush16);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette12.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush16);
        QBrush brush17(QColor(239, 239, 239, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        palette12.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        lineName->setPalette(palette12);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 10, 41, 16));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush7);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        QBrush brush18(QColor(255, 255, 255, 128));
        brush18.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush18);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush18);
#endif
        QBrush brush19(QColor(190, 190, 190, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        label_2->setPalette(palette13);
        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(380, 10, 101, 24));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Highlight, brush10);
        palette14.setBrush(QPalette::Active, QPalette::Link, brush11);
        palette14.setBrush(QPalette::Active, QPalette::AlternateBase, brush12);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette14.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette14.setBrush(QPalette::Inactive, QPalette::Link, brush11);
        palette14.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush12);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette14.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette14.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Highlight, brush15);
        palette14.setBrush(QPalette::Disabled, QPalette::Link, brush11);
        palette14.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette14.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        startButton->setPalette(palette14);
        labelName2 = new QLabel(groupBox);
        labelName2->setObjectName(QString::fromUtf8("labelName2"));
        labelName2->setGeometry(QRect(0, 40, 41, 16));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush7);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush7);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        labelName2->setPalette(palette15);
        lineName2 = new QLineEdit(groupBox);
        lineName2->setObjectName(QString::fromUtf8("lineName2"));
        lineName2->setGeometry(QRect(40, 40, 113, 24));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush17);
        lineName2->setPalette(palette16);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        groupBox_4->raise();
        groupBoxFile->raise();
        groupBoxOptions->raise();
        groupBoxSettings->raise();
        groupBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 512, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        QBrush brush20(QColor(252, 233, 79, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush20);
        QBrush brush21(QColor(255, 250, 203, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush21);
        QBrush brush22(QColor(253, 241, 141, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush22);
        QBrush brush23(QColor(126, 116, 39, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush23);
        QBrush brush24(QColor(168, 155, 52, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush24);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush7);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush25(QColor(253, 244, 167, 255));
        brush25.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush25);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush13);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush14);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush21);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush22);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush23);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush24);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush25);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush13);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush23);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush21);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush22);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush23);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush24);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush23);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush23);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush20);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush13);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        statusbar->setPalette(palette17);
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Check", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Summary", nullptr));
        summaryText->setText(QString());
        additionalAnnotation->setText(QString());
        groupBoxFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        chooseButton->setText(QCoreApplication::translate("MainWindow", "Choose", nullptr));
        chooseButton_2->setText(QCoreApplication::translate("MainWindow", "Choose", nullptr));
        groupBoxOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
        radioButtonCheck->setText(QCoreApplication::translate("MainWindow", "Standard check", nullptr));
        radioButtonTwofiles->setText(QCoreApplication::translate("MainWindow", "Compare two files", nullptr));
        groupBoxSettings->setTitle(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        labelName2->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
