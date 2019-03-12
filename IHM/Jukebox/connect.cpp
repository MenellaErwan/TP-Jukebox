#include "connect.h"

Connect::Connect(QWidget *parent) : QWidget(parent)
{
    TextCo = new QLabel("Connection en cours ...");
    OK = new QPushButton("OK");
    //affichage
    QVBoxLayout *layoutConnect = new QVBoxLayout;
    layoutConnect->addWidget(TextCo);
    layoutConnect->addWidget(OK);
    setLayout(layoutConnect);
    connect(OK, SIGNAL(clicked()), this, SLOT(quitter()));
}

Connect::~Connect()
{

}

void Connect::quitter()
{
    this->close();
}

void Connect::connection(bool status)
{
       if(status == true)
       {
           TextCo->setText("Connection Reussi");
       }
       else
       {
           TextCo->setText("Connection échoué");
       }
}
