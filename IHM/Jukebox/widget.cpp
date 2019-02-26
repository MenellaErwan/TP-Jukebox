#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    table = new QTableView();
    c = new Config();
    boutonConfig = new QPushButton("Config");
    boutonConnect = new QPushButton("Connect");
    boutonRefresh = new QPushButton("Refresh");
    //affichage
    QVBoxLayout *layoutPrincipal = new QVBoxLayout;
    layoutPrincipal->addWidget(table);
    layoutPrincipal->addWidget(boutonConfig);
    layoutPrincipal->addWidget(boutonConnect);
    layoutPrincipal->addWidget(boutonRefresh);
    setLayout(layoutPrincipal);
    //signal
    connect(boutonConfig, SIGNAL(clicked()), this, SLOT(config()));
}

Widget::~Widget()
{

}
void Widget::config()
{
    c->show();
}
