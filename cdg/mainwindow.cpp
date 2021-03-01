#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 28, 58);"));
    ui->label2->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 29, 74);"));
    QPixmap pix("/home/maxime/Images/1200px-Raspberry_Pi_logo.svg.png");
    ui->label3->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString testText = "test";
    s=new secwindow(this);
    s->show();
    s->text(testText);
    QString test2Text;
    test2Text = "Hello World !";
    ui->label4->setText(test2Text);
    s->text(test2Text);
}



