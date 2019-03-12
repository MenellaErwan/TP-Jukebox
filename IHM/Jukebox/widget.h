#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>
#include <QTableView>
#include <QSqlTableModel>
#include "config.h"
#include "connect.h"
#include "dal.h"

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTableView *table;
    QPushButton *boutonConfig;
    QPushButton *boutonConnect;
    Config *c;
    Connect *x;
    QString data[10];
    DAL *db;
    QPushButton *boutonplay;
    QLineEdit *formID;
    int ID;

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void refresh();
    int play(int ID);
private slots:

    void config();
    void connection();
};

#endif // WIDGET_H
