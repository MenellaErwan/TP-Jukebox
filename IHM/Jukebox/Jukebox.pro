#-------------------------------------------------
#
# Project created by QtCreator 2019-02-26T09:39:38
#
#-------------------------------------------------

QT += core gui
QT += sql
QT += bluetooth
QT += multimedia
QT += serialport

QT += widgets

TARGET = Jukebox
TEMPLATE = app


SOURCES += main.cpp\
    jukebox.cpp \
    modifier.cpp \
    dal.cpp \
    window.cpp

HEADERS  += \
    dal.h \
    jukebox.h \
    modifier.h \
    window.h

FORMS    +=

