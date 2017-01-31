#include "dicewidget.h"

DiceWidget::DiceWidget(int Size, ResourceEnum E, QWidget *parent) : size(Size),e(E), QGroupBox(parent)
{
    setTitle(QString("%1-seitiger Würfel").arg(Size));
    setObjectName("greyedOut");
    layout  = new QHBoxLayout(this);
    group = new QButtonGroup(this);
    group->setExclusive(true);

    for(int i = 0; i <= Size ; i++)
    {
        QPushButton* button = new QPushButton(QString::number(i));
        button->setCheckable(true);
        button->setObjectName("diceButton");
        group->addButton(button,i);
        if(i == 0)
            button->setChecked(true);
        layout->addWidget(button);

    }                                                                                   
    connect(group,SIGNAL(buttonClicked(int)),this,SIGNAL(buttonClicked()));
    connect(this,SIGNAL(buttonClicked()),this,SLOT(updateStyle()));
}

void DiceWidget::keyPressEvent(QKeyEvent *e)
{
    int key = e->key();
    key -= 48;
    if(key >= 0 && key <= size)
    {
        group->button(key)->setChecked(true);
        buttonClicked();
    }
}

void DiceWidget::enterEvent(QEvent *e)
{
    setFocus();
    e->accept();
}

void DiceWidget::leaveEvent(QEvent *e)
{
    clearFocus();
    e->accept();
}

void DiceWidget::wheelEvent(QWheelEvent *e)
{
    int prevButtonID = group->checkedId();

    if(e->angleDelta().ry()>0 && prevButtonID<size)
    {
        group->button(prevButtonID+1)->setChecked(true);
    }
    else if(e->angleDelta().ry()<0 && prevButtonID>0)
    {
        group->button(prevButtonID-1)->setChecked(true);
    }
    buttonClicked();
    e->accept();
}

void DiceWidget::updateStyle()
{
    if(getNumber() == 0){
        setObjectName("greyedOut");
    }
    else{
        setObjectName("");
    }
}
