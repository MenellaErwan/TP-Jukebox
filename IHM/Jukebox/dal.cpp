#include "dal.h"
using namespace std;

DAL::DAL()
{

connection();

}

DAL::~DAL()
{

}

int DAL::connection()
{
    data = QSqlDatabase::addDatabase("QSQLITE");
    data.setDatabaseName("jukebox.sqlite");
    bool status = data.open();
    return status;
}


QString DAL::Geturl(int ID)
{
    QSqlQuery query;
    query.prepare("SELECT URL FROM Musique WHERE IDMusique = :ID");
    query.bindValue(":ID",ID);
    query.exec();
    while(query.next())
    {
        url = query.value(0).toString();
    }
    //qDebug()<<url<<endl;
    return  url;
}
