#ifndef STATISTICWIDGET_H
#define STATISTICWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QLabel>

#include "Model/ResourceEnum.h"
#include "Model/data.h"

typedef QPair<int,int> ratio;

class StatisticWidget : public QWidget
{
    Q_OBJECT
public:
    explicit StatisticWidget(ResourceEnum e, QList<ratio> rolledThisYear,QList<ratio> rolledSum,QList<int> points,QWidget *parent = 0);

signals:

public slots:

private:
    QHBoxLayout *layout;
};

#endif // STATISTICWIDGET_H
