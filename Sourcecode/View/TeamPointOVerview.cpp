#include "TeamPointOVerview.h"
#include "ui_TeamPointOVerview.h"

TeamPointOVerview::TeamPointOVerview(Team *T, QWidget *parent) :
    QDialog(parent),t(T),
    ui(new Ui::TeamPointOVerview)
{
    ui->setupUi(this);
    ui->comboBox->addItems(Data::getInstance()->getBonusPunktTypen());
    ui->comboBox->addItem("Sonstiges");
    updateList();
    setWindowTitle(QString("Punktübersicht für %1").arg(T->getName()));
    QString stylesheet = Data::getInstance()->getText("Stylesheet.css");
    setStyleSheet(stylesheet);
    setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
    setModal(true);
    ui->labelSonstiges->setVisible(false);
    ui->lineEditSonstiges->setVisible(false);
}

TeamPointOVerview::~TeamPointOVerview()
{
    delete ui;
}

void TeamPointOVerview::on_pushButton_clicked()
{
    QPair<QString,int> value;
    if(ui->comboBox->currentText() != "Sonstiges")
    {
        value.first = ui->comboBox->currentText();
    }
    else
    {
        value.first = ui->lineEditSonstiges->text();
        ui->lineEditSonstiges->clear();
    }
    if(!value.first.isEmpty())
    {
        value.second = ui->spinBox->value();
        t->addTeamPoints(value);
        ui->spinBox->setValue(0);
    }
    updateList();
}

void TeamPointOVerview::updateList()
{
    ui->listWidget->clear();
    ui->listWidget->addItem(QString("Gebäudepunkte: %1").arg(t->getBuildingPoints()));
    ui->listWidget->addItem(QString("Entwicklungspunkte: %1").arg(t->getDevelopmentPoints()));

    QList<QPair<QString,int> > list = t->getTeamPointList();
    for(int i = 0 ; i < list.length(); i ++)
    {
        QString s = QString("%1: %2").arg(list[i].first).arg(list[i].second);
        ui->listWidget->addItem(s);
    }
}

void TeamPointOVerview::on_listWidget_doubleClicked(const QModelIndex &index)
{
    int row = index.row();
    if(row >= 2)
        t->removeTeamPoints(ui->listWidget->item(row)->text());

    updateList();
}

void TeamPointOVerview::on_pushButton_2_clicked()
{
    accept();
}

void TeamPointOVerview::on_comboBox_currentIndexChanged(int index)
{
    if(ui->comboBox->itemText(index) == "Sonstiges")
    {
        ui->labelSonstiges->setVisible(true);
        ui->lineEditSonstiges->setVisible(true);
        ui->lineEditSonstiges->setFocus();
    }
    else
    {
        ui->labelSonstiges->setVisible(false);
        ui->lineEditSonstiges->setVisible(false);
    }
}
