/********************************************************************************
** Form generated from reading UI file 'newgamewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWGAMEWIDGET_H
#define UI_NEWGAMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewGameWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonOk;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBoxWheat;
    QFormLayout *formLayout_5;
    QLabel *teamnameLabel_5;
    QLineEdit *tnWheat;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_6;
    QGroupBox *groupBoxIron;
    QFormLayout *formLayout_4;
    QLabel *teamnameLabel_4;
    QLineEdit *tnIron;
    QGroupBox *groupBoxClay;
    QFormLayout *formLayout_3;
    QLabel *teamnameLabel_3;
    QLineEdit *tnClay;
    QGroupBox *groupBoxWood;
    QFormLayout *formLayout_2;
    QLabel *teamnameLabel_2;
    QLineEdit *tnWood;
    QGroupBox *groupBoxSheep;
    QFormLayout *formLayout;
    QLabel *teamnameLabel;
    QLineEdit *tnSheep;

    void setupUi(QWidget *NewGameWidget)
    {
        if (NewGameWidget->objectName().isEmpty())
            NewGameWidget->setObjectName(QStringLiteral("NewGameWidget"));
        NewGameWidget->resize(921, 643);
        gridLayout = new QGridLayout(NewGameWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonOk = new QPushButton(NewGameWidget);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));

        gridLayout->addWidget(pushButtonOk, 7, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 7, 3, 1, 1);

        groupBoxWheat = new QGroupBox(NewGameWidget);
        groupBoxWheat->setObjectName(QStringLiteral("groupBoxWheat"));
        formLayout_5 = new QFormLayout(groupBoxWheat);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        teamnameLabel_5 = new QLabel(groupBoxWheat);
        teamnameLabel_5->setObjectName(QStringLiteral("teamnameLabel_5"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, teamnameLabel_5);

        tnWheat = new QLineEdit(groupBoxWheat);
        tnWheat->setObjectName(QStringLiteral("tnWheat"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, tnWheat);


        gridLayout->addWidget(groupBoxWheat, 5, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        groupBox_6 = new QGroupBox(NewGameWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(groupBox_6, 6, 1, 1, 3);

        groupBoxIron = new QGroupBox(NewGameWidget);
        groupBoxIron->setObjectName(QStringLiteral("groupBoxIron"));
        formLayout_4 = new QFormLayout(groupBoxIron);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        teamnameLabel_4 = new QLabel(groupBoxIron);
        teamnameLabel_4->setObjectName(QStringLiteral("teamnameLabel_4"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, teamnameLabel_4);

        tnIron = new QLineEdit(groupBoxIron);
        tnIron->setObjectName(QStringLiteral("tnIron"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, tnIron);


        gridLayout->addWidget(groupBoxIron, 4, 1, 1, 3);

        groupBoxClay = new QGroupBox(NewGameWidget);
        groupBoxClay->setObjectName(QStringLiteral("groupBoxClay"));
        formLayout_3 = new QFormLayout(groupBoxClay);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        teamnameLabel_3 = new QLabel(groupBoxClay);
        teamnameLabel_3->setObjectName(QStringLiteral("teamnameLabel_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, teamnameLabel_3);

        tnClay = new QLineEdit(groupBoxClay);
        tnClay->setObjectName(QStringLiteral("tnClay"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, tnClay);


        gridLayout->addWidget(groupBoxClay, 3, 1, 1, 3);

        groupBoxWood = new QGroupBox(NewGameWidget);
        groupBoxWood->setObjectName(QStringLiteral("groupBoxWood"));
        formLayout_2 = new QFormLayout(groupBoxWood);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        teamnameLabel_2 = new QLabel(groupBoxWood);
        teamnameLabel_2->setObjectName(QStringLiteral("teamnameLabel_2"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, teamnameLabel_2);

        tnWood = new QLineEdit(groupBoxWood);
        tnWood->setObjectName(QStringLiteral("tnWood"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, tnWood);


        gridLayout->addWidget(groupBoxWood, 2, 1, 1, 3);

        groupBoxSheep = new QGroupBox(NewGameWidget);
        groupBoxSheep->setObjectName(QStringLiteral("groupBoxSheep"));
        formLayout = new QFormLayout(groupBoxSheep);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        teamnameLabel = new QLabel(groupBoxSheep);
        teamnameLabel->setObjectName(QStringLiteral("teamnameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, teamnameLabel);

        tnSheep = new QLineEdit(groupBoxSheep);
        tnSheep->setObjectName(QStringLiteral("tnSheep"));

        formLayout->setWidget(0, QFormLayout::FieldRole, tnSheep);


        gridLayout->addWidget(groupBoxSheep, 1, 1, 1, 3);

        QWidget::setTabOrder(tnSheep, tnWood);
        QWidget::setTabOrder(tnWood, tnClay);
        QWidget::setTabOrder(tnClay, tnIron);
        QWidget::setTabOrder(tnIron, tnWheat);
        QWidget::setTabOrder(tnWheat, pushButtonOk);

        retranslateUi(NewGameWidget);

        QMetaObject::connectSlotsByName(NewGameWidget);
    } // setupUi

    void retranslateUi(QWidget *NewGameWidget)
    {
        NewGameWidget->setWindowTitle(QApplication::translate("NewGameWidget", "Form", Q_NULLPTR));
        pushButtonOk->setText(QApplication::translate("NewGameWidget", "          Ok          ", Q_NULLPTR));
        groupBoxWheat->setTitle(QApplication::translate("NewGameWidget", "Kornbauern", Q_NULLPTR));
        teamnameLabel_5->setText(QApplication::translate("NewGameWidget", "Teamname", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("NewGameWidget", "Optionen", Q_NULLPTR));
        groupBoxIron->setTitle(QApplication::translate("NewGameWidget", "Bergleute", Q_NULLPTR));
        teamnameLabel_4->setText(QApplication::translate("NewGameWidget", "Teamname", Q_NULLPTR));
        groupBoxClay->setTitle(QApplication::translate("NewGameWidget", "Ziegler", Q_NULLPTR));
        teamnameLabel_3->setText(QApplication::translate("NewGameWidget", "Teamname", Q_NULLPTR));
        groupBoxWood->setTitle(QApplication::translate("NewGameWidget", "Holzf\303\244ller", Q_NULLPTR));
        teamnameLabel_2->setText(QApplication::translate("NewGameWidget", "Teamname", Q_NULLPTR));
        groupBoxSheep->setTitle(QApplication::translate("NewGameWidget", "Sch\303\244fer", Q_NULLPTR));
        teamnameLabel->setText(QApplication::translate("NewGameWidget", "Teamname", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewGameWidget: public Ui_NewGameWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWGAMEWIDGET_H
