#include "gfmainwindow.h"
#include "ui_gfmainwindow.h"

GFMainWindow::GFMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GFMainWindow)
{
    ui->setupUi(this);
}

GFMainWindow::~GFMainWindow()
{
    delete ui;
}
