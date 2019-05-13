#include "jukebox.h"
#include "window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    window w;
    //w.setFixedSize(600,450);
    w.show();

    return a.exec();
}

