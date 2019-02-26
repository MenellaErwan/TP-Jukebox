#include "connect.h"

Connect::Connect(QWidget *parent) : QWidget(parent)
{
    TextCo = new QLabel("test");
    //affichage
    QVBoxLayout *layoutConfig = new QVBoxLayout;
    layoutConfig->addWidget(TextCo);
    setLayout(layoutConfig);
}

Connect::~Connect()
{

}
