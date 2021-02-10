#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QMainWindow>

namespace Ui {
class secwindow;
}

class secwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit secwindow(QWidget *parent = nullptr);
    ~secwindow();

private:
    Ui::secwindow *ui;
};

#endif // SECWINDOW_H
