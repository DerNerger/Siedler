#ifndef NEWYEARWIDGET_H
#define NEWYEARWIDGET_H

#include "Model/team.h"
#include "Model/data.h"
#include "Model/event.h"

#include "View/dicewidget.h"

#include <QWidget>
#include <QListWidget>
#include <QGroupBox>
#include <QFrame>
#include <QKeyEvent>
#include <QTextEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QLayoutItem>
#include <QHBoxLayout>

namespace Ui {
class NewYearWidget;
}

class NewYearWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NewYearWidget(QList<Team*> Teams, QList<Event> Events, QWidget *parent = 0);
    ~NewYearWidget();
signals:
    void gotoOverview();
    void updateHistory(QList<Event> events);
    void okPressed();
private slots:
    void on_pushButtonOk_released();
    void updateResourceSpinboxes();
private:
    QList<Team*> teams;
    QList<Event> events;
    QList<DiceWidget*> diceWidgets;
    QList<QGroupBox*> teamBoxes;
    QVector<QGroupBox*> protBoxes;
    Ui::NewYearWidget *ui;
};

#endif // NEWYEARWIDGET_H
