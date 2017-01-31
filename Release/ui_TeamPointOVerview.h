/********************************************************************************
** Form generated from reading UI file 'TeamPointOVerview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMPOINTOVERVIEW_H
#define UI_TEAMPOINTOVERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TeamPointOVerview
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QFrame *line;
    QSpinBox *spinBox;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QLabel *label;
    QListWidget *listWidget;
    QLineEdit *lineEditSonstiges;
    QLabel *labelSonstiges;

    void setupUi(QDialog *TeamPointOVerview)
    {
        if (TeamPointOVerview->objectName().isEmpty())
            TeamPointOVerview->setObjectName(QStringLiteral("TeamPointOVerview"));
        TeamPointOVerview->setWindowModality(Qt::WindowModal);
        TeamPointOVerview->resize(512, 452);
        gridLayout = new QGridLayout(TeamPointOVerview);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(TeamPointOVerview);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 1, 1, 2);

        line = new QFrame(TeamPointOVerview);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 4);

        spinBox = new QSpinBox(TeamPointOVerview);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        gridLayout->addWidget(spinBox, 2, 1, 1, 2);

        pushButton_2 = new QPushButton(TeamPointOVerview);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 8, 0, 1, 4);

        comboBox = new QComboBox(TeamPointOVerview);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(3);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(comboBox, 2, 0, 1, 1);

        label_4 = new QLabel(TeamPointOVerview);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setWordWrap(true);

        gridLayout->addWidget(label_4, 6, 0, 1, 4);

        pushButton = new QPushButton(TeamPointOVerview);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(22, 22));

        gridLayout->addWidget(pushButton, 2, 3, 1, 1);

        label_3 = new QLabel(TeamPointOVerview);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setUnderline(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 4);

        label = new QLabel(TeamPointOVerview);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        listWidget = new QListWidget(TeamPointOVerview);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 7, 0, 1, 4);

        lineEditSonstiges = new QLineEdit(TeamPointOVerview);
        lineEditSonstiges->setObjectName(QStringLiteral("lineEditSonstiges"));

        gridLayout->addWidget(lineEditSonstiges, 4, 0, 1, 4);

        labelSonstiges = new QLabel(TeamPointOVerview);
        labelSonstiges->setObjectName(QStringLiteral("labelSonstiges"));

        gridLayout->addWidget(labelSonstiges, 3, 0, 1, 4);


        retranslateUi(TeamPointOVerview);

        QMetaObject::connectSlotsByName(TeamPointOVerview);
    } // setupUi

    void retranslateUi(QDialog *TeamPointOVerview)
    {
        TeamPointOVerview->setWindowTitle(QApplication::translate("TeamPointOVerview", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("TeamPointOVerview", "Punkte:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TeamPointOVerview", "OK", Q_NULLPTR));
        label_4->setText(QApplication::translate("TeamPointOVerview", "<html><head/><body><p>\303\234bersicht der vergebenen Punkte.</p><p>Ein Doppelklick auf ein Element l\303\266scht dieses, insofern das f\303\274r das betreffende Objekt m\303\266glich ist.(z.B. Geb\303\244udepunkte k\303\266nnen nicht hier gel\303\266scht werden.)</p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TeamPointOVerview", "+", Q_NULLPTR));
        label_3->setText(QApplication::translate("TeamPointOVerview", "Hinzuf\303\274gen neuer Punkte:", Q_NULLPTR));
        label->setText(QApplication::translate("TeamPointOVerview", "Titel:", Q_NULLPTR));
        labelSonstiges->setText(QApplication::translate("TeamPointOVerview", "Sonstiges:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TeamPointOVerview: public Ui_TeamPointOVerview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMPOINTOVERVIEW_H
