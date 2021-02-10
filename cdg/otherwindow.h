#ifndef OTHERWINDOW_H
#define OTHERWINDOW_H

#include <QMainWindow>

namespace Ui {
class otherWindow;
}

class otherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit otherWindow(QWidget *parent = nullptr);
    ~otherWindow();
private:
    Ui::otherWindow *ui;
};

#endif // OTHERWINDOW_H
