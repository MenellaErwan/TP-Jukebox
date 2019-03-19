#ifndef CONNECT_H
#define CONNECT_H

#include <QWidget>
#include <QtGui>
#include <QLabel>

class Connect : public QWidget
{
    Q_OBJECT

private:
    QLabel *TextCo;
    QPushButton *OK;

public:
    explicit Connect(QWidget *parent = 0);
    ~Connect();
private slots:
    void quitter();
};

#endif // CONNECT_H
