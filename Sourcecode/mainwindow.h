#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QPaintEvent>
#include <QPainter>
#include <QKeyEvent>



#include "Model/data.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void keyPressed(int key);
public slots:
    void keyPressEvent(QKeyEvent *e);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
