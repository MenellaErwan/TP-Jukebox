#include "modifier.h"

modifier::modifier(QWidget *parent) : QWidget(parent)
{
table = new QTableView();
modife = new DAL;
QSqlTableModel *model = new QSqlTableModel(this,modife->data);
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

QVBoxLayout *layoutPrincipal = new QVBoxLayout;
layoutPrincipal->addWidget(table);
setLayout(layoutPrincipal);
}
