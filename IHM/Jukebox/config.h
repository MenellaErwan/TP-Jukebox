#ifndef CONFIG_H
#define CONFIG_H

#include <QWidget>
#include <QtGui>
#include <QLabel>
#include <QLineEdit>


class Config : public QWidget
{
    Q_OBJECT

private:
    QLabel *TextDBip;
    QLabel *TextDBuser;
    QLabel *TextDBpassword;
    QLabel *TextDB;
    QLineEdit *ChampDBip;
    QLineEdit *ChampDBuser;
    QLineEdit *ChampDBpassword;
    QLineEdit *ChampDB;
    QPushButton *OK;


public:
    explicit Config(QWidget *parent = 0);
    ~Config();
private slots:
    //void appliquer();


};

#endif // CONFIG_H
