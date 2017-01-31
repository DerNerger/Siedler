#ifndef OPTIONWIDGET_H
#define OPTIONWIDGET_H

#include <QWidget>
#include <QApplication>

#include "Model/data.h"



namespace Ui {
class OptionWidget;
}

class OptionWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OptionWidget(QWidget *parent = 0);
    ~OptionWidget();

signals:
    void gotoMainWindow();
    void volumeChanged();
    void screensChanged();
    void showScreenNumbers();
private slots:

    void on_pushButtonSave_clicked();
    void on_pushButtonStop_clicked();
    void on_horizontalSlider_sliderMoved(int position);

private:
    Ui::OptionWidget *ui;
};

#endif // OPTIONWIDGET_H
