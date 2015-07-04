#ifndef GFMAINWINDOW_H
#define GFMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class GFMainWindow;
}

class GFMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GFMainWindow(QWidget *parent = 0);
    ~GFMainWindow();

private:
    Ui::GFMainWindow *ui;
};

#endif // GFMAINWINDOW_H
