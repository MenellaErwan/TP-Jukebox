#include "jukebox.h"
#include "window.h"
#include <iostream>

Jukebox::Jukebox(QWidget *parent) : QWidget(parent)
{
    table = new QTableView();
    boutonplay = new QPushButton("Play");
    formID = new QLineEdit();
    formID->setValidator(new QIntValidator(1,10,this));
    serialinformation = new QComboBox();
    //affichage
    QVBoxLayout *layoutPrincipal = new QVBoxLayout;
    layoutPrincipal->addWidget(table);
    layoutPrincipal->addWidget(boutonplay);
    layoutPrincipal->addWidget(formID);
    layoutPrincipal->addWidget(serialinformation);
    setLayout(layoutPrincipal);
    db = new DAL;
    refresh();
    media = new QMediaPlayer;
    media->setVolume(50);
    //signal
    connect(boutonplay,SIGNAL(clicked()), this, SLOT(play()));
    //information
    const auto infos = QSerialPortInfo::availablePorts();
    for(const QSerialPortInfo &info : infos)
    {
        serialinformation->addItem(info.portName());
    }
    Serial = new QSerialPort(serialinformation->currentText());
    connect(serialinformation, SIGNAL(currentIndexChanged(int)), this, SLOT(setport()));
}

Jukebox::~Jukebox()
{

}

void Jukebox::refresh()
{
     QSqlTableModel *model = new QSqlTableModel(this,db->data);
     model->setTable("Musique");
     model->select();
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("Artiste"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("Durée"));
     table->setModel(model);
     table->hideColumn(0);
     table->hideColumn(5);
     table->show();
}

void Jukebox::play()
{
    media->stop();
    QString ID = formID->text();
    int intID = ID.toInt();
    QString url = db->Geturl(intID);
    media->setMedia(QUrl::fromLocalFile(url));
    media->play();
}

void Jukebox::stop()
{
    media->stop();
}
void Jukebox::pause()
{
    media->pause();
}
void Jukebox::setport()
{
    delete Serial;
    Serial = new QSerialPort(serialinformation->currentText());
    Serial->setBaudRate(QSerialPort::Baud9600);
    Serial->setDataBits(QSerialPort::Data8);
    Serial->setParity(QSerialPort::NoParity);
    //Serial->setStopBits(QSerialPort::OneStop);
    Serial->setFlowControl(QSerialPort::NoFlowControl);
    Serial->open(QIODevice::ReadWrite);
    // on connecte le signal readyRead() au slot recevoir()
    connect(Serial, SIGNAL(readyRead()), this, SLOT(recevoir()));
}
void Jukebox::recevoir()
{
  while (Serial->bytesAvailable())
        {
            donnees = Serial->readAll();
        }

  QString trameRecue = QString(donnees.data());
  qDebug()<<trameRecue<<endl;
  commande(trameRecue);
}

int Jukebox::commande(QString data)
{
    int information;
    if(data.length() != 0)
    {
        if(data.startsWith("!"))
        {
          data.remove(3,6);
          data.remove(1);
          information = data.toInt();
          qDebug()<<information<<endl;
        }
    }
    return 0;
}
