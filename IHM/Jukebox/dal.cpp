#include "dal.h"
using namespace std;

DAL::DAL()
{

}

DAL::~DAL()
{

}

int DAL::connection()
{
    data = QSqlDatabase::addDatabase("QMYSQL");
    data.setHostName("localhost");
    data.setDatabaseName("jukebox");
    data.setUserName("root");
    data.setPassword("password");
    bool status = data.open();
    return status;
}

int DAL::Geturl(int ID)
{
    QSqlQuery query("SELECT URL FROM Musique WHERE ID ="+ID);
    QString url = query.value(0).toString();
    //qDebug("%s",url);
    return  1;
}
