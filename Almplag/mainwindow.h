#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void optionsradiobutt_clicked();
    void choosebuttonsclicked();
    void on_startButton_clicked();
private:
    Ui::MainWindow *ui;
    void start_that_shit0();
    void start_that_shit1();
    void start_that_shit0(MainWindow* window);
};

#endif // MAINWINDOW_H
