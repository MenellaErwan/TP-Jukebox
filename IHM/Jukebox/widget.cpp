#include "widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    table = new QTableView();
    c = new Config();
    x = new Connect();
    boutonConfig = new QPushButton("Config");
    boutonConnect = new QPushButton("Connect");
    //affichage
    QVBoxLayout *layoutPrincipal = new QVBoxLayout;
    layoutPrincipal->addWidget(table);
    layoutPrincipal->addWidget(boutonConfig);
    layoutPrincipal->addWidget(boutonConnect);
    setLayout(layoutPrincipal);
    //signal
    connect(boutonConnect, SIGNAL(clicked()), this, SLOT(connection()));
    connect(boutonConfig, SIGNAL(clicked()), this, SLOT(config()));
}

Widget::~Widget()
{

}

void Widget::connection()
{
    x->show();
}

void Widget::config()
{
    c->show();
}
