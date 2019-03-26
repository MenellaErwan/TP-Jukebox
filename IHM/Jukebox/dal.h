#ifndef DAL_H
#define DAL_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtBluetooth>
#include <QSqlTableModel>
#include <QSqlQueryModel>
#include <QDebug>
using namespace std;

class DAL
{
    public:
        DAL();
        ~DAL();
        int connection();
        QString Geturl(int ID);
        QSqlDatabase data;
        QBluetoothLocalDevice localDevice;
    private:
        QString url;
};

#endif // DAL_H
