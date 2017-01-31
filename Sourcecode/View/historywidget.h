#ifndef HISTORYWIDGET_H
#define HISTORYWIDGET_H

#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableWidget>
#include <QHeaderView>
#include <QResizeEvent>
#include <QFrame>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLineSeries>
#include <QtCharts/QLegend>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QSplineSeries>


#include "Model/History.h"

using namespace QtCharts;

enum class BuildOrLost{Built,Lost};

class HistoryWidget : public QChartView
{
    Q_OBJECT
public:

    explicit HistoryWidget(History* H,QWidget *parent = 0);
};

#endif // HISTORYWIDGET_H
