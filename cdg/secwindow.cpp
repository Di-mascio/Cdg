#include "secwindow.h"
#include "ui_secwindow.h"

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
