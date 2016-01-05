#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    initStylesheet();
    ui->setupUi(this);

    Building *hansDieter = new Building(NULL,{1,2,3,4,5},"HansDieter");
    BuildingWidget* widget = new BuildingWidget(hansDieter,this->centralWidget());
    widget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initStylesheet()
{
    QString styleSheet;
    //styleSheet += "background-color: #F2E496;";
    styleSheet += "font-family: Georgia;";
    styleSheet += "font: 16 px;";
    this->setStyleSheet(styleSheet);
}
