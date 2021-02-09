#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setStyleSheet(QString::fromUtf8("background-color: rgb(144, 28, 58);"));
    ui->label2->setStyleSheet(QString::fromUtf8("background-color: rgb(197, 29, 74);"));
    QPixmap monImage("/home/maxime/Images/");
    QLabel* m_label = new QLabel();
        m_label->setPixmap(monImage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

