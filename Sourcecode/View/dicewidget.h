#ifndef DICEWIDGET_H
#define DICEWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QButtonGroup>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QKeyEvent>
#include <QEvent>
#include <QWheelEvent>

#include "Model/ResourceEnum.h"

class DiceWidget : public QGroupBox
{
    Q_OBJECT
public:
    explicit DiceWidget(int Size, ResourceEnum E, QWidget *parent = 0);

signals:
    void buttonClicked();
public slots:
    int getNumber(){return group->checkedId();}
    ResourceEnum getResource(){return e;}
private slots:
    void keyPressEvent(QKeyEvent *e);
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);
    void wheelEvent(QWheelEvent *e);
    void updateStyle();
private:
    ResourceEnum e;
    int size;
    QHBoxLayout* layout;
    QButtonGroup* group;
};

#endif // DICEWIDGET_H
