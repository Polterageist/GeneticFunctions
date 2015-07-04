#include "gfmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GFMainWindow w;
    w.show();

    return a.exec();
}
