#ifndef NEWGAMEWIDGET_H
#define NEWGAMEWIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QTimer>
#include "Model/ResourceEnum.h"
#include "Model/data.h"

namespace Ui {
class NewGameWidget;
}

class NewGameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NewGameWidget(QWidget *parent = 0);
    ~NewGameWidget();
signals:
    void gotoStartGame();
    void gotTeamNames(QStringList teamNames);

private slots:
    void okPressed();
    void keyPressEvent(QKeyEvent *e);
private:
    Ui::NewGameWidget *ui;
};

#endif // NEWGAMEWIDGET_H
