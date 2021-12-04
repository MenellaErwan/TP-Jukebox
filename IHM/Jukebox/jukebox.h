#ifndef JUKEBOX_H
#define JUKEBOX_H
#include <QWidget>
#include <QtGui>
#include <QPushButton>
#include <QVBoxLayout>
#include <QtMultimedia>
#include <QLineEdit>
#include <QIntValidator>
#include <QTableView>
#include <QSqlTableModel>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QComboBox>
#include <QDebug>
#include <QAbstractAudioDeviceInfo>
#include "dal.h"

using namespace std;
class Jukebox : public QWidget
{
    Q_OBJECT
private:
    QTableView *table;
    QPushButton *boutonplay;
    QLineEdit *formID;
    int ID;
    DAL *db;
    QMediaPlayer *media;
    QComboBox *serialinformation;
    QSerialPort *Serial;
    QByteArray donnees;

public:
    explicit Jukebox(QWidget *parent = 0);
    ~Jukebox();
    void refresh();
    void connection();
    void pause();
    void stop();
    int commande(QString data);
private slots:
    void play();
    void setport();
    void recevoir();


};

#endif // JUKEBOX_H
