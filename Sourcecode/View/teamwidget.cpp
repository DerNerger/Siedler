#include "teamwidget.h"
#include "ui_teamwidget.h"

TeamWidget::TeamWidget(Team* T): ui(new Ui::TeamWidget),t(T)
{
    ui->setupUi(this);    

    ui->iconLabel->setPixmap(t->getIcon());
    ui->labelTitle->setText(t->getName());
    ui->labelPoints->setText(QString::number(t->getPoints()));
    ui->labelResources->setText(QString::number(t->getResources()));
    ui->labelTrade->setText(QString("%1:1").arg(t->getTradeRatio()));
    ui->labelPoints->setObjectName("boldLabel");
    ui->labelResources->setObjectName("boldLabel");
    ui->labelTrade->setObjectName("boldLabel");
    ui->labelPoints->setAlignment(Qt::AlignCenter);
    ui->labelResources->setAlignment(Qt::AlignCenter);
    ui->labelTrade->setAlignment(Qt::AlignCenter);
    ui->labelTitle->setAlignment(Qt::AlignCenter);
    setStyleSheet(t->getStylesheet());
    setObjectName("teamWidget");
}

TeamWidget::~TeamWidget()
{
    delete ui;
}

void TeamWidget::on_pushButtonBuy_clicked()
{
    emit clicked(t->getResource());
}

void TeamWidget::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == (t->getResource() + 1 + Qt::Key_1))
        on_pushButtonBuy_clicked();
}

void TeamWidget::on_pushButtonTeamPointOverview_clicked()
{
    TeamPointOVerview* overview;
    overview = new TeamPointOVerview(t,(QWidget*)parent());
    overview->exec();
    emit gotoOverview();
}
