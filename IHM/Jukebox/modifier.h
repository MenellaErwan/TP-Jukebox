#ifndef MODIFIER_H
#define MODIFIER_H
#include <QWidget>
#include <QtGui>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QTableView>
#include <QIntValidator>
#include <QTableView>
#include <QSqlTableModel>
#include <QDebug>
#include "dal.h"
#include <QWidget>

class modifier : public QWidget
{
    Q_OBJECT
public:
    explicit modifier(QWidget *parent = nullptr);
private:
    QTableView *table;
    DAL *modife;

signals:

public slots:
};

#endif // MODIFIER_H
