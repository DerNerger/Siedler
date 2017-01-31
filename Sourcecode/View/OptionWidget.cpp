#include "OptionWidget.h"
#include "ui_OptionWidget.h"

OptionWidget::OptionWidget(QWidget *parent) : QWidget(parent),
    ui(new Ui::OptionWidget)
{
    ui->setupUi(this);
    Data* d = Data::getInstance();

    bool b = d->getBool("goodAndBadEvents");
    ui->eventCheckBox->setChecked(b);
    int i = d->getInt("volume");
    ui->horizontalSlider->setValue(i);

    if(!d->settingExists("mainScreen"))
        d->setInt("mainScreen",0);

    int mainScreen = d->getInt("mainScreen");

    for(int i = 1 ; i <= QApplication::screens().length() ; i++)
    {
        if(i != mainScreen+1)
            ui->comboBoxMainScreen->addItem(QString("Bildschirm Nr %1").arg(i));
        else
            ui->comboBoxMainScreen->addItem(QString("Bildschirm Nr %1 (aktuell)").arg(i));
    }

    ui->comboBoxMainScreen->setCurrentIndex(mainScreen);
}

OptionWidget::~OptionWidget()
{
    delete ui;
}
void OptionWidget::on_pushButtonSave_clicked()
{
    Data* d = Data::getInstance();
    d->setBool("goodAndBadEvents",ui->eventCheckBox->isChecked());
    d->setInt("volume",ui->horizontalSlider->value());
    d->setInt("mainScreen",ui->comboBoxMainScreen->currentIndex());

    emit screensChanged();
    emit gotoMainWindow();
}

void OptionWidget::on_pushButtonStop_clicked()
{
    emit screensChanged();
    emit gotoMainWindow();
}

void OptionWidget::on_horizontalSlider_sliderMoved(int position)
{
    Data* d = Data::getInstance();
    d->setInt("volume",position);
    emit volumeChanged();
}

