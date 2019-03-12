#include "widget.h"
#include <iostream>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    table = new QTableView();
    c = new Config();
    boutonConfig = new QPushButton("Config");
    boutonConnect = new QPushButton("Connect");
    boutonplay = new QPushButton("Play");
    formID = new QLineEdit();
    //affichage
    QVBoxLayout *layoutPrincipal = new QVBoxLayout;
    layoutPrincipal->addWidget(table);
    //layoutPrincipal->addWidget(boutonConfig);
    layoutPrincipal->addWidget(boutonConnect);
    layoutPrincipal->addWidget(boutonplay);
    layoutPrincipal->addWidget(formID);
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

    db = new DAL();
    bool status = db->connection();
    x = new Connect();
    x->connection(status);
    x->show();
    refresh();
}

void Widget::config()
{
    c->show();
}

void Widget::refresh()
{
     QSqlTableModel *model = new QSqlTableModel(this,db->data);
     model->setTable("Musique");
     model->select();
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Artiste"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Durée"));
     table->setModel(model);
     table->hideColumn(2);
     table->hideColumn(5);
     table->show();
}

/*int Widget::play(int ID)
{

    return 0;
}
*/
