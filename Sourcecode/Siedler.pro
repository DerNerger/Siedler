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
<<<<<<< HEAD
    Model/team.cpp \
    Model/xmlparser.cpp
=======
    View/buildingwidget.cpp \
    Model/diceboni.cpp
>>>>>>> 394c5e56f57ef7f768f38c60226e37d44642ad58

HEADERS  += mainwindow.h \
    Model/treeelement.h \
    Model/boni.h \
    Model/ShowPlaceEnum.h \
    Model/building.h \
    Model/subtree.h \
<<<<<<< HEAD
    Model/team.h \
    Model/ResourceEnum.h \
    Model/xmlparser.h

FORMS    += mainwindow.ui \
    View/mybonusevent.ui

OTHER_FILES += \
    Tree.xml
=======
    View/buildingwidget.h \
    Model/diceboni.h

FORMS    += mainwindow.ui
>>>>>>> 394c5e56f57ef7f768f38c60226e37d44642ad58
