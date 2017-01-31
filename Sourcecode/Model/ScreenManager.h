#ifndef SCREENMANAGER_H
#define SCREENMANAGER_H


#include <QApplication>
#include <QObject>
#include <QScreen>
#include <QLabel>
#include <QTimer>

#include "View/BeamerView.h"
#include "mainwindow.h"
#include "Model/data.h"

class ScreenManager : public QObject
{
    Q_OBJECT
public:
    explicit ScreenManager(MainWindow* w, BeamerView* b, QObject *parent = 0);

signals:

public slots:
    void actualizeScreenlist();
    void showScreenNumbering();
    void hideScreenNumbering();

    void loadSettings();
private:
    QList<QScreen*> screens;
    QList<QLabel *> labels;
    QTimer* timer;
    MainWindow *spielleiter;
    BeamerView *spieler;

};

#endif // SCREENMANAGER_H
