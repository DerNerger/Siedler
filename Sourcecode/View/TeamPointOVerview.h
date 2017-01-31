#ifndef TEAMPOINTOVERVIEW_H
#define TEAMPOINTOVERVIEW_H

#include <QDialog>
#include <QPair>

#include "Model/team.h"
#include "Model/data.h"

namespace Ui {
class TeamPointOVerview;
}

class TeamPointOVerview : public QDialog
{
    Q_OBJECT

public:
    explicit TeamPointOVerview(Team* T,QWidget *parent = 0);
    ~TeamPointOVerview();
private slots:
    void on_pushButton_clicked();
    void updateList();
    void on_listWidget_doubleClicked(const QModelIndex &index);
    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Team* t;
    Ui::TeamPointOVerview *ui;

};

#endif // TEAMPOINTOVERVIEW_H
