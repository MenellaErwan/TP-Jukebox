#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>
#include <QIntValidator>
#include <QTableView>
#include <QSqlTableModel>
#include "connect.h"
#include "dal.h"
#include <phonon>

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTableView *table;
    QString data[10];
    DAL *db;
    QPushButton *boutonplay;
    QLineEdit *formID;
    Connect *c;
    int ID;
    Phonon::MediaObject *media;


public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void refresh();
    void connection();
private slots:
    void play();


};

#endif // WIDGET_H
