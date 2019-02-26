#include "connect.h"

Connect::Connect(QWidget *parent) : QWidget(parent)
{
    TextCo = new QLabel("test");
    //affichage
    QVBoxLayout *layoutConnect = new QVBoxLayout;
    layoutConnect->addWidget(TextCo);
    setLayout(layoutConnect);
}

Connect::~Connect()
{

}
