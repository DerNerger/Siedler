#-------------------------------------------------
#
# Project created by QtCreator 2015-07-22T22:00:27
#
#-------------------------------------------------

QT       += core gui
QT       += xml
QT       += multimedia
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Siedler
TEMPLATE = app
RC_ICONS = 1.ico

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
    Model/data.cpp \
    Model/pointboni.cpp \
    View/buildingwidget.cpp \
    Model/textboni.cpp \
    View/subtreewidget.cpp \
    View/hauptmenu.cpp \
    Model/controller.cpp \
    View/newgamewidget.cpp \
    View/teamwidget.cpp \
    View/overviewwidget.cpp \
    View/newyearwidget.cpp \
    Model/eventparser.cpp \
    Model/eventgenerator.cpp \
    Model/event.cpp \
    Model/tradeboni.cpp \
    View/dicewidget.cpp \
    View/mediaplayer.cpp \
    Model/ProtectionBoni.cpp \
    Model/CounterBoni.cpp \
    View/OptionWidget.cpp \
    View/TreeWidget.cpp \
    Model/History.cpp \
    Model/YearHistory.cpp \
    View/IconDisplay.cpp \
    View/Icon.cpp \
    Model/Development.cpp \
    View/TeamPointOVerview.cpp \
    Model/seasoncontroller.cpp \
    Model/season.cpp \
    View/yearview.cpp \
    View/seasonview.cpp \
    Model/audioengine.cpp \
    View/historywidget.cpp \
    Model/audioplayer.cpp

HEADERS  += mainwindow.h \
    Model/treeelement.h \
    Model/boni.h \
    Model/ShowPlaceEnum.h \
    Model/building.h \
    Model/subtree.h \
    Model/diceboni.h \
    Model/ResourceEnum.h \
    Model/team.h \
    Model/xmlparser.h \
    Model/data.h \
    Model/pointboni.h \
    View/buildingwidget.h \
    Model/textboni.h \
    View/subtreewidget.h \
    View/hauptmenu.h \
    Model/controller.h \
    View/newgamewidget.h \
    View/teamwidget.h \
    View/overviewwidget.h \
    View/newyearwidget.h \
    Model/eventparser.h \
    Model/eventgenerator.h \
    Model/event.h \
    Model/tradeboni.h \
    View/dicewidget.h \
    View/mediaplayer.h \
    Model/ProtectionBoni.h \
    Model/CounterBoni.h \
    View/OptionWidget.h \
    View/TreeWidget.h \
    Model/History.h \
    Model/YearHistory.h \
    View/IconDisplay.h \
    View/Icon.h \
    Model/Development.h \
    View/StatisticWidget.h \
    View/TeamPointOVerview.h \
    Model/seasoncontroller.h \
    Model/season.h \
    View/yearview.h \
    View/seasonview.h \
    Model/audioengine.h \
    View/historywidget.h \
    Model/audioplayer.h


FORMS    += mainwindow.ui \
    View/mybonusevent.ui \
    View/newgamewidget.ui \
    View/teamwidget.ui \
    View/newyearwidget.ui \
    View/mediaplayer.ui \
    View/OptionWidget.ui \
    View/TeamPointOVerview.ui \
    View/seasonview.ui \
    View/beamerview.ui \
    View/buttonbox.ui

OTHER_FILES += \
    Tree.xml
