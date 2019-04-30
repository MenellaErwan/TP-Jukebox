#include "widget.h"
#include <iostream>

Widget::Widget(QWidget *parent) : QWidget(parent)
{
    table = new QTableView();
    boutonplay = new QPushButton("Play");
    formID = new QLineEdit();
    formID->setValidator(new QIntValidator(1,10,this));
    //affichage
    QVBoxLayout *layoutPrincipal = new QVBoxLayout;
    layoutPrincipal->addWidget(table);
    layoutPrincipal->addWidget(boutonplay);
    layoutPrincipal->addWidget(formID);
    setLayout(layoutPrincipal);
    c = new Connect;
    media = new QMediaPlayer;
    media->setVolume(50);
    connection();
    //signal
    connect(boutonplay,SIGNAL(clicked()), this, SLOT(play()));
}

Widget::~Widget()
{

}

void Widget::connection()
{

    db = new DAL();
    bool status = db->connection();
    if (status == false)
    {
        c->show();
    }
    refresh();
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
     table->hideColumn(0);
     //table->hideColumn(5);
     table->show();
}

void Widget::play()
{
    media->stop();
    QString ID = formID->text();
    int intID = ID.toInt();
    QString url = db->Geturl(intID);
    media->setMedia(QUrl::fromLocalFile(url));
    media->play();

}

void Widget::stop()
{
    media->stop();
}
void Widget::pause()
{
    media->pause();
}
