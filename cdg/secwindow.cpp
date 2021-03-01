#include "secwindow.h"
#include "ui_secwindow.h"
#include <QMainWindow>
#include "ui_mainwindow.h"

secwindow::secwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secwindow)
{
    ui->setupUi(this);
}

secwindow::~secwindow()
{
    delete ui;

}


void secwindow::text(QString string)
{
    ui->label->setText(string);
}
