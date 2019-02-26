#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtGui>
#include <QTableView>
#include "config.h"

class Widget : public QWidget
{
    Q_OBJECT
private:
    QTableView *table;
    QPushButton *boutonConfig;
    QPushButton *boutonConnect;
    QPushButton *boutonRefresh;
    Config *c;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    private slots:
    void config();
};

#endif // WIDGET_H
