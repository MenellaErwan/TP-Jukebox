#include "config.h"

Config::Config(QWidget *parent) : QWidget(parent)
{
    TextDB = new QLabel("Database");
    TextDBip = new QLabel("Database IP");
    TextDBuser = new QLabel("Database User");
    TextDBpassword = new QLabel("Database Password");
    ChampDB = new QLineEdit();
    ChampDBip = new QLineEdit();
    ChampDBuser = new QLineEdit();
    ChampDBpassword = new QLineEdit();
    ChampDB = new QLineEdit();
    OK = new QPushButton("OK");

    //affichage
    QVBoxLayout *layoutConfig = new QVBoxLayout;
    layoutConfig->addWidget(TextDB,0,0);
    layoutConfig->addWidget(ChampDB);
    layoutConfig->addWidget(TextDBip,1,0);
    layoutConfig->addWidget(ChampDBip);
    layoutConfig->addWidget(TextDBpassword,2,0);
    layoutConfig->addWidget(ChampDBpassword);
    layoutConfig->addWidget(TextDBuser,3,0);
    layoutConfig->addWidget(ChampDBuser);
    layoutConfig->addWidget(OK,4,0);
    setLayout(layoutConfig);
    //signal
    //connect(OK, SIGNAL(clicked()), this, SLOT(appliquer()));

}

//void appliquer()
//{

//}

Config::~Config()
{

}
