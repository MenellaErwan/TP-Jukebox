#include "config.h"

Config::Config(QWidget *parent) : QWidget(parent)
{
    TextDBip = new QLabel("Database IP");
    TextDBuser = new QLabel("Database User");
    TextDBpassword = new QLabel("Database Password");
    TextDB = new QLabel("Databass");
    //affichage
    QVBoxLayout *layoutConfig = new QVBoxLayout;
    layoutConfig->addWidget(TextDB);
    layoutConfig->addWidget(TextDBip);
    layoutConfig->addWidget(TextDBpassword);
    layoutConfig->addWidget(TextDBuser);
    setLayout(layoutConfig);
}


Config::~Config()
{

}
