#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <secwindow.h>
#include <string.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    float pos_X;
    float pos_Y;
    float pos_Z;


private slots:
    //void on_pushButton_clicked(); //pour transfère de data entre différentes windows


    void on_actionMesures_triggered();

    void on_actionCalibrage_triggered();

    void on_actionConfiguration_R_seau_triggered();

private:
    Ui::MainWindow *ui;
    secwindow *s;

};
#endif // MAINWINDOW_H
