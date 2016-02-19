#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initStylesheet();
    Building *hansDieter = new Building(NULL,{1,2,2,2,3},"Schule");
    BuildingWidget* widget = new BuildingWidget(hansDieter,ResourceEnum::WOOD,this->centralWidget());
    widget->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initStylesheet()
{
    Data* data = Data::getInstance();
    if(data->exists("Stylesheet.css"))
    {
        QFile* styleFile = data->getFile("Stylesheet.css");
        if(styleFile->open(QIODevice::ReadOnly))
        {
            QString style = styleFile->readAll();
            this->centralWidget()->setStyleSheet(style);
            styleFile->close();
            delete styleFile;
        }

    }
    else
        qDebug() << "Konnte Stylesheet nicht finden";
}
