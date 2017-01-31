#ifndef TEAMWIDGET_H
#define TEAMWIDGET_H

#include <QFrame>
#include <QPaintEvent>
#include <QKeyEvent>

#include <Model/data.h>
#include <Model/team.h>

#include <View/TeamPointOVerview.h>

namespace Ui {
class TeamWidget;
}

class TeamWidget : public QFrame
{
    Q_OBJECT

public:
    TeamWidget(Team *T);
    ~TeamWidget();
    void keyPressEvent(QKeyEvent* event);
private slots:
    void on_pushButtonBuy_clicked();
    void on_pushButtonTeamPointOverview_clicked();

signals:
    void clicked(ResourceEnum e);
    void gotoOverview();
private:
    Ui::TeamWidget *ui;
    Team *t;
    QString toString(QMap<int, int> dices);
};

#endif // TEAMWIDGET_H
