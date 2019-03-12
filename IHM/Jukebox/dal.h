#ifndef DAL_H
#define DAL_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlQueryModel>

using namespace std;

class DAL
{
    public:
        DAL();
        ~DAL();
        int connection();
        int Geturl(int ID);
        QSqlDatabase data;
    private:

};

#endif // DAL_H
