#ifndef DAL_H
#define DAL_H
#include <QSqlDatabase>
#include <QSqlQuery>
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
    private:
        QString url;
};

#endif // DAL_H
