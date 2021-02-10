#include "otherwindow.h"
#include "ui_otherwindow.h"

otherWindow::otherWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::otherWindow)
{
    ui->setupUi(this);
}

otherWindow::~otherWindow()
{
    delete ui;
}
