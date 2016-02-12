#-------------------------------------------------
#
# Project created by QtCreator 2015-07-22T22:00:27
#
#-------------------------------------------------

QT       += core gui
QT       +=xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Siedler
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    Model/treeelement.cpp \
    Model/boni.cpp \
    Model/building.cpp \
    Model/subtree.cpp \
    Model/diceboni.cpp \
    Model/team.cpp \
    Model/xmlparser.cpp \
    View/buildingwidget.cpp \
    View/mykaufdialog.cpp


HEADERS  += mainwindow.h \
    Model/treeelement.h \
    Model/boni.h \
    Model/ShowPlaceEnum.h \
    Model/building.h \
    Model/subtree.h \
    Model/diceboni.h \
    Model/myort.h \
    Model/ResourceEnum.h \
    Model/team.h \
    Model/xmlparser.h \
    View/buildingwidget.h

FORMS    += mainwindow.ui \
    View/mybonusevent.ui

OTHER_FILES += \
    Tree.xml

FORMS    += mainwindow.ui
