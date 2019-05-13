#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <string>
#include "jukebox.h"
#include "modifier.h"
#include "dal.h"


class window : public QMainWindow
{
    Q_OBJECT
public:
    explicit window(QWidget *parent = nullptr);
private:
    QTabWidget *tab;
    Jukebox *menu;
    modifier *modify;

signals:

public slots:
};

#endif // WINDOW_H
