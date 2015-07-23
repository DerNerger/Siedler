#-------------------------------------------------
#
# Project created by QtCreator 2015-07-22T22:00:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Siedler
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Model/myort.cpp \
    View/mykaufdialog.cpp

HEADERS  += mainwindow.h \
    Model/myort.h \
    View/mykaufdialog.h

FORMS    += mainwindow.ui \
    View/mybonusevent.ui
