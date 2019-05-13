#include "window.h"

window::window(QWidget *parent) : QMainWindow(parent)
{
    menu = new Jukebox;
    modify = new modifier;
    tab = new QTabWidget;
    tab->addTab(menu,tr("Jukebox"));
    tab->addTab(modify,tr("Modifier"));
    setCentralWidget(tab);
}
