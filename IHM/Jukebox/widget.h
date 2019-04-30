#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>
#include <QPushButton>
#include <QVBoxLayout>
#include <QtMultimedia>
#include <QLineEdit>
#include <QIntValidator>
#include <QTableView>
#include <QSqlTableModel>
#include "connect.h"
#include "dal.h"


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
    QMediaPlayer *media;


public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void refresh();
    void connection();
    void pause();
    void stop();
private slots:
    void play();


};

#endif // WIDGET_H
