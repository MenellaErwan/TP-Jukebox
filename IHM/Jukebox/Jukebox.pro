#-------------------------------------------------
#
# Project created by QtCreator 2019-02-26T09:39:38
#
#-------------------------------------------------

QT       += core gui
QT += sql
QT += phonon

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jukebox
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    connect.cpp \
    dal.cpp

HEADERS  += widget.h \
    connect.h \
    dal.h

FORMS    +=

