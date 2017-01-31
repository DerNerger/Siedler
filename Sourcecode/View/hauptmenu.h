#ifndef HAUPTMENU_H
#define HAUPTMENU_H

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QSpacerItem>
#include <QLabel>

#include "Model/data.h"


class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(bool xmlLoaded, QWidget *centralWidget = 0);

signals:
    void gotoNewGame();
    void gotoOverview();
    void gotoOptions();
    void exit();
public slots:
};

#endif // HAUPTMENU_H
