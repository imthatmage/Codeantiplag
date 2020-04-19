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
        MainWindow->resize(512, 445);
        MainWindow->setMinimumSize(QSize(512, 445));
        MainWindow->setMaximumSize(QSize(512, 445));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/img/14302.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(9, 298, 494, 91));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
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
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush6(QColor(186, 189, 182, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        QBrush brush7(QColor(85, 87, 83, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush8(QColor(115, 210, 22, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        QBrush brush9(QColor(164, 0, 0, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush9);
        QBrush brush10(QColor(153, 255, 127, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        QBrush brush11(QColor(255, 255, 220, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
        QBrush brush12(QColor(0, 0, 0, 128));
        brush12.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        QBrush brush13(QColor(145, 145, 145, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        QBrush brush14(QColor(52, 255, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBox_4->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI Semibold"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        groupBox_4->setFont(font);
        summaryText = new QLabel(groupBox_4);
        summaryText->setObjectName(QString::fromUtf8("summaryText"));
        summaryText->setGeometry(QRect(10, 20, 471, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        summaryText->setPalette(palette1);
        summaryText->setFont(font);
        additionalAnnotation = new QLabel(groupBox_4);
        additionalAnnotation->setObjectName(QString::fromUtf8("additionalAnnotation"));
        additionalAnnotation->setGeometry(QRect(7, 56, 471, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        additionalAnnotation->setPalette(palette2);
        additionalAnnotation->setFont(font);
        groupBoxFile = new QGroupBox(centralwidget);
        groupBoxFile->setObjectName(QString::fromUtf8("groupBoxFile"));
        groupBoxFile->setGeometry(QRect(9, 9, 494, 104));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBoxFile->setPalette(palette3);
        groupBoxFile->setFont(font);
        linePath = new QLineEdit(groupBoxFile);
        linePath->setObjectName(QString::fromUtf8("linePath"));
        linePath->setGeometry(QRect(10, 30, 361, 24));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette4.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        linePath->setPalette(palette4);
        linePath->setFont(font);
        linePath->setReadOnly(true);
        chooseButton = new QPushButton(groupBoxFile);
        chooseButton->setObjectName(QString::fromUtf8("chooseButton"));
        chooseButton->setGeometry(QRect(380, 30, 101, 24));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette5.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette5.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette5.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette5.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette5.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette5.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette5.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette5.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette5.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette5.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        chooseButton->setPalette(palette5);
        chooseButton->setFont(font);
        linePath_2 = new QLineEdit(groupBoxFile);
        linePath_2->setObjectName(QString::fromUtf8("linePath_2"));
        linePath_2->setGeometry(QRect(10, 70, 361, 24));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette6.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette6.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette6.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette6.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette6.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        linePath_2->setPalette(palette6);
        linePath_2->setFont(font);
        linePath_2->setReadOnly(true);
        chooseButton_2 = new QPushButton(groupBoxFile);
        chooseButton_2->setObjectName(QString::fromUtf8("chooseButton_2"));
        chooseButton_2->setGeometry(QRect(380, 70, 101, 24));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette7.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette7.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        chooseButton_2->setPalette(palette7);
        chooseButton_2->setFont(font);
        groupBoxOptions = new QGroupBox(centralwidget);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        groupBoxOptions->setGeometry(QRect(9, 119, 231, 101));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette8.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette8.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBoxOptions->setPalette(palette8);
        groupBoxOptions->setFont(font);
        verticalLayout = new QVBoxLayout(groupBoxOptions);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButtonCheck = new QRadioButton(groupBoxOptions);
        radioButtonCheck->setObjectName(QString::fromUtf8("radioButtonCheck"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette9.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette9.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette9.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette9.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette9.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette9.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette9.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette9.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette9.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette9.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette9.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette9.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        radioButtonCheck->setPalette(palette9);
        radioButtonCheck->setFont(font);
        radioButtonCheck->setChecked(true);

        verticalLayout->addWidget(radioButtonCheck);

        radioButtonTwofiles = new QRadioButton(groupBoxOptions);
        radioButtonTwofiles->setObjectName(QString::fromUtf8("radioButtonTwofiles"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette10.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette10.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette10.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette10.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette10.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette10.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette10.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette10.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette10.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette10.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette10.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette10.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        radioButtonTwofiles->setPalette(palette10);
        radioButtonTwofiles->setFont(font);

        verticalLayout->addWidget(radioButtonTwofiles);

        groupBoxSettings = new QGroupBox(centralwidget);
        groupBoxSettings->setObjectName(QString::fromUtf8("groupBoxSettings"));
        groupBoxSettings->setGeometry(QRect(272, 119, 231, 103));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette11.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette11.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette11.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette11.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette11.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette11.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette11.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette11.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette11.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette11.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette11.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette11.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        groupBoxSettings->setPalette(palette11);
        groupBoxSettings->setFont(font);
        listWidget = new QListWidget(groupBoxSettings);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 211, 81));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        listWidget->setPalette(palette12);
        listWidget->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-70, -30, 681, 441));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette13.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette13.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette13.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette13.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette13.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette13.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette13.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette13.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette13.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette13.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette13.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette13.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette13.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette13.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette13.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette13.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label->setPalette(palette13);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/img/fractal-1621737_640.jpg")));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 230, 491, 71));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette14.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette14.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        groupBox->setPalette(palette14);
        groupBox->setFont(font);
        lineName = new QLineEdit(groupBox);
        lineName->setObjectName(QString::fromUtf8("lineName"));
        lineName->setGeometry(QRect(62, 10, 101, 24));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QBrush brush15(QColor(239, 239, 239, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        palette15.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        lineName->setPalette(palette15);
        lineName->setFont(font);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 41, 16));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush16(QColor(255, 255, 255, 128));
        brush16.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush16);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush16);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush17(QColor(190, 190, 190, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush17);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        label_2->setPalette(palette16);
        label_2->setFont(font);
        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(380, 10, 101, 24));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette17.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette17.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette17.setBrush(QPalette::Active, QPalette::Highlight, brush8);
        palette17.setBrush(QPalette::Active, QPalette::Link, brush9);
        palette17.setBrush(QPalette::Active, QPalette::AlternateBase, brush10);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette17.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette17.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette17.setBrush(QPalette::Inactive, QPalette::Highlight, brush8);
        palette17.setBrush(QPalette::Inactive, QPalette::Link, brush9);
        palette17.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette17.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette17.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette17.setBrush(QPalette::Disabled, QPalette::Highlight, brush13);
        palette17.setBrush(QPalette::Disabled, QPalette::Link, brush9);
        palette17.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush14);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette17.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        startButton->setPalette(palette17);
        startButton->setFont(font);
        labelName2 = new QLabel(groupBox);
        labelName2->setObjectName(QString::fromUtf8("labelName2"));
        labelName2->setGeometry(QRect(10, 40, 41, 16));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        labelName2->setPalette(palette18);
        labelName2->setFont(font);
        lineName2 = new QLineEdit(groupBox);
        lineName2->setObjectName(QString::fromUtf8("lineName2"));
        lineName2->setGeometry(QRect(62, 40, 101, 24));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush15);
        lineName2->setPalette(palette19);
        lineName2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        groupBox_4->raise();
        groupBoxFile->raise();
        groupBoxOptions->raise();
        groupBoxSettings->raise();
        groupBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 512, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush18(QColor(252, 233, 79, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush18);
        QBrush brush19(QColor(255, 250, 203, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Light, brush19);
        QBrush brush20(QColor(253, 241, 141, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Midlight, brush20);
        QBrush brush21(QColor(126, 116, 39, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Dark, brush21);
        QBrush brush22(QColor(168, 155, 52, 255));
        brush22.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::Mid, brush22);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette20.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush18);
        palette20.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        QBrush brush23(QColor(253, 244, 167, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette20.setBrush(QPalette::Active, QPalette::AlternateBase, brush23);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipBase, brush11);
        palette20.setBrush(QPalette::Active, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush18);
        palette20.setBrush(QPalette::Inactive, QPalette::Light, brush19);
        palette20.setBrush(QPalette::Inactive, QPalette::Midlight, brush20);
        palette20.setBrush(QPalette::Inactive, QPalette::Dark, brush21);
        palette20.setBrush(QPalette::Inactive, QPalette::Mid, brush22);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette20.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        palette20.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush23);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush11);
        palette20.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush21);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        palette20.setBrush(QPalette::Disabled, QPalette::Light, brush19);
        palette20.setBrush(QPalette::Disabled, QPalette::Midlight, brush20);
        palette20.setBrush(QPalette::Disabled, QPalette::Dark, brush21);
        palette20.setBrush(QPalette::Disabled, QPalette::Mid, brush22);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush21);
        palette20.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush21);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush18);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush18);
        palette20.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        palette20.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush18);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush11);
        palette20.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        statusbar->setPalette(palette20);
        statusbar->setSizeGripEnabled(false);
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
