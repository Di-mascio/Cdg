#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"
#include "iostream"
using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    pos_X = 12.1;
    pos_Y = 13.1;
    pos_Z = 14.1;
    ui->setupUi(this);
    ui->label->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 28, 58);"));
    ui->label2->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 29, 74);"));
    QPixmap pix("/home/maxime/Images/1200px-Raspberry_Pi_logo.svg.png");
    ui->label3->setPixmap(pix);
    QString string;
    QString string2;
    QString string3;
    string.sprintf("pos X (mm) = %f", pos_X);
    string2.sprintf("pos Y (mm) = %f", pos_Y);
    string3.sprintf("pos Z (mm) = %f", pos_Z);
    QFont f("Ubuntu Mono", 12, QFont::Bold);
    ui->label_11->setFont(f);
    ui->label_11->setText(string);
    ui->label_12->setFont(f);
    ui->label_12->setText(string2);
    ui->label_13->setFont(f);
    ui->label_13->setText(string3);

}
MainWindow::~MainWindow()
{
    delete ui;
}


/*void MainWindow::on_pushButton_clicked() // pour transfère de data entre différentes windows
{
    QString testText = "test";
    s=new secwindow(this);
    s->show();
    s->text(testText);
    QString test2Text;
    test2Text = "Hello World !";
    ui->label4->setText(test2Text);
    s->text(test2Text);
}*/

void MainWindow::on_actionMesures_triggered()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_actionCalibrage_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_actionConfiguration_R_seau_triggered()
{
    ui->stackedWidget->setCurrentIndex(2);
}
