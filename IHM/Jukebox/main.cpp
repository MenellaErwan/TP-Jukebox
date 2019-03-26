#include "widget.h"
#include "connect.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setFixedSize(600,500);
    w.show();

    return a.exec();
}

