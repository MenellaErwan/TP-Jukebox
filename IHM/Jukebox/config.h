#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <QtGui>
#include <QLabel>


class Config : public QWidget
{
    Q_OBJECT

private:
    QLabel *TextDBip;
    QLabel *TextDBuser;
    QLabel *TextDBpassword;
    QLabel *TextDB;


public:
    explicit Config(QWidget *parent = 0);
    ~Config();
};

#endif // CONFIG_H
