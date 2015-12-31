#-------------------------------------------------
#
# Project created by QtCreator 2015-07-22T22:00:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Siedler
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    Model/myort.cpp \
    View/mykaufdialog.cpp \
    Model/treeelement.cpp \
    Model/boni.cpp \
    Model/building.cpp \
    Model/subtree.cpp

HEADERS  += mainwindow.h \
    Model/myort.h \
    View/mykaufdialog.h \
    Model/treeelement.h \
    Model/boni.h \
    Model/ShowPlaceEnum.h \
    Model/building.h \
    Model/subtree.h

FORMS    += mainwindow.ui \
    View/mybonusevent.ui
