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
    /*if (localDevice.isValid())
    {
        localDevice.powerOn();
        localDevice.setHostMode(QBluetoothLocalDevice::HostDiscoverable);

    }*/
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
