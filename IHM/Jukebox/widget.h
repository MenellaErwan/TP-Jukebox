#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>
#include <QTableView>
#include "config.h"
#include "connect.h"

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTableView *table;
    QPushButton *boutonConfig;
    QPushButton *boutonConnect;
    QPushButton *boutonRefresh;
    Config *c;
    Connect *x;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    private slots:
        void connection();
        void config();
};

#endif // WIDGET_H
