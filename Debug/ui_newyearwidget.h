/********************************************************************************
** Form generated from reading UI file 'newyearwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWYEARWIDGET_H
#define UI_NEWYEARWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewYearWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonOk;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBoxIron;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayoutIron;
    QLabel *label_4;
    QFrame *lineDef4;
    QSpacerItem *horizontalSpacer_8;
    QSpinBox *spinBoxIron;
    QGroupBox *groupBoxProt4;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelProt4;
    QLabel *protIron;
    QSpacerItem *horizontalSpacer_13;
    QLabel *iconIron;
    QGroupBox *groupBoxWheat;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QSpinBox *spinBoxWheat;
    QGridLayout *gridLayoutWheat;
    QLabel *iconWheat;
    QFrame *lineDef5;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBoxProt5;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelProt5;
    QLabel *protWheat;
    QSpacerItem *horizontalSpacer_14;
    QGroupBox *groupBoxEvents;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxSheep;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QGridLayout *gridLayoutSheep;
    QLabel *iconSheep;
    QFrame *lineDef1;
    QSpinBox *spinBoxSheep;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBoxProt1;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelProt1;
    QLabel *protSheep;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBoxClay;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayoutClay;
    QLabel *iconClay;
    QLabel *label_3;
    QSpinBox *spinBoxClay;
    QSpacerItem *horizontalSpacer_7;
    QFrame *lineDef3;
    QGroupBox *groupBoxProt3;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelProt3;
    QLabel *protClay;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupBoxWood;
    QGridLayout *gridLayout_3;
    QLabel *iconWood;
    QSpinBox *spinBoxWood;
    QSpacerItem *horizontalSpacer_6;
    QFrame *lineDef2;
    QLabel *label_2;
    QGridLayout *gridLayoutWood;
    QGroupBox *groupBoxProt2;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelProt2;
    QLabel *protWood;
    QSpacerItem *horizontalSpacer_11;

    void setupUi(QWidget *NewYearWidget)
    {
        if (NewYearWidget->objectName().isEmpty())
            NewYearWidget->setObjectName(QStringLiteral("NewYearWidget"));
        NewYearWidget->resize(962, 689);
        gridLayout = new QGridLayout(NewYearWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonOk = new QPushButton(NewYearWidget);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonOk->sizePolicy().hasHeightForWidth());
        pushButtonOk->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonOk, 8, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 8, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 2, 1, 1);

        groupBoxIron = new QGroupBox(NewYearWidget);
        groupBoxIron->setObjectName(QStringLiteral("groupBoxIron"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(3);
        sizePolicy1.setHeightForWidth(groupBoxIron->sizePolicy().hasHeightForWidth());
        groupBoxIron->setSizePolicy(sizePolicy1);
        gridLayout_5 = new QGridLayout(groupBoxIron);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayoutIron = new QGridLayout();
        gridLayoutIron->setObjectName(QStringLiteral("gridLayoutIron"));

        gridLayout_5->addLayout(gridLayoutIron, 0, 4, 2, 1);

        label_4 = new QLabel(groupBoxIron);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setPointSize(12);
        font.setItalic(false);
        label_4->setFont(font);

        gridLayout_5->addWidget(label_4, 0, 5, 1, 1);

        lineDef4 = new QFrame(groupBoxIron);
        lineDef4->setObjectName(QStringLiteral("lineDef4"));
        lineDef4->setFrameShape(QFrame::VLine);
        lineDef4->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(lineDef4, 0, 3, 2, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 6, 2, 1);

        spinBoxIron = new QSpinBox(groupBoxIron);
        spinBoxIron->setObjectName(QStringLiteral("spinBoxIron"));
        spinBoxIron->setMinimumSize(QSize(0, 40));
        QFont font1;
        font1.setPointSize(20);
        spinBoxIron->setFont(font1);
        spinBoxIron->setAlignment(Qt::AlignCenter);
        spinBoxIron->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_5->addWidget(spinBoxIron, 1, 5, 1, 1);

        groupBoxProt4 = new QGroupBox(groupBoxIron);
        groupBoxProt4->setObjectName(QStringLiteral("groupBoxProt4"));
        verticalLayout_6 = new QVBoxLayout(groupBoxProt4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        labelProt4 = new QLabel(groupBoxProt4);
        labelProt4->setObjectName(QStringLiteral("labelProt4"));
        labelProt4->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(labelProt4);

        protIron = new QLabel(groupBoxProt4);
        protIron->setObjectName(QStringLiteral("protIron"));
        protIron->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(protIron);

        horizontalSpacer_13 = new QSpacerItem(55, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout_6->addItem(horizontalSpacer_13);


        gridLayout_5->addWidget(groupBoxProt4, 0, 2, 2, 1);

        iconIron = new QLabel(groupBoxIron);
        iconIron->setObjectName(QStringLiteral("iconIron"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(iconIron->sizePolicy().hasHeightForWidth());
        iconIron->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(iconIron, 0, 0, 2, 1);


        gridLayout->addWidget(groupBoxIron, 5, 1, 1, 3);

        groupBoxWheat = new QGroupBox(NewYearWidget);
        groupBoxWheat->setObjectName(QStringLiteral("groupBoxWheat"));
        sizePolicy1.setHeightForWidth(groupBoxWheat->sizePolicy().hasHeightForWidth());
        groupBoxWheat->setSizePolicy(sizePolicy1);
        gridLayout_6 = new QGridLayout(groupBoxWheat);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_5 = new QLabel(groupBoxWheat);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_6->addWidget(label_5, 0, 6, 1, 1);

        spinBoxWheat = new QSpinBox(groupBoxWheat);
        spinBoxWheat->setObjectName(QStringLiteral("spinBoxWheat"));
        spinBoxWheat->setMinimumSize(QSize(0, 40));
        spinBoxWheat->setFont(font1);
        spinBoxWheat->setAlignment(Qt::AlignCenter);
        spinBoxWheat->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_6->addWidget(spinBoxWheat, 1, 6, 1, 1);

        gridLayoutWheat = new QGridLayout();
        gridLayoutWheat->setObjectName(QStringLiteral("gridLayoutWheat"));

        gridLayout_6->addLayout(gridLayoutWheat, 0, 5, 2, 1);

        iconWheat = new QLabel(groupBoxWheat);
        iconWheat->setObjectName(QStringLiteral("iconWheat"));
        sizePolicy2.setHeightForWidth(iconWheat->sizePolicy().hasHeightForWidth());
        iconWheat->setSizePolicy(sizePolicy2);

        gridLayout_6->addWidget(iconWheat, 0, 0, 2, 1);

        lineDef5 = new QFrame(groupBoxWheat);
        lineDef5->setObjectName(QStringLiteral("lineDef5"));
        lineDef5->setFrameShape(QFrame::VLine);
        lineDef5->setFrameShadow(QFrame::Sunken);

        gridLayout_6->addWidget(lineDef5, 0, 3, 2, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 7, 2, 1);

        groupBoxProt5 = new QGroupBox(groupBoxWheat);
        groupBoxProt5->setObjectName(QStringLiteral("groupBoxProt5"));
        verticalLayout_7 = new QVBoxLayout(groupBoxProt5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        labelProt5 = new QLabel(groupBoxProt5);
        labelProt5->setObjectName(QStringLiteral("labelProt5"));
        labelProt5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(labelProt5);

        protWheat = new QLabel(groupBoxProt5);
        protWheat->setObjectName(QStringLiteral("protWheat"));
        protWheat->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(protWheat);

        horizontalSpacer_14 = new QSpacerItem(55, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout_7->addItem(horizontalSpacer_14);


        gridLayout_6->addWidget(groupBoxProt5, 0, 2, 2, 1);


        gridLayout->addWidget(groupBoxWheat, 6, 1, 1, 3);

        groupBoxEvents = new QGroupBox(NewYearWidget);
        groupBoxEvents->setObjectName(QStringLiteral("groupBoxEvents"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(4);
        sizePolicy3.setHeightForWidth(groupBoxEvents->sizePolicy().hasHeightForWidth());
        groupBoxEvents->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(groupBoxEvents, 1, 1, 1, 3);

        horizontalSpacer = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 11, 1);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(250, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 10, 1);

        groupBoxSheep = new QGroupBox(NewYearWidget);
        groupBoxSheep->setObjectName(QStringLiteral("groupBoxSheep"));
        sizePolicy1.setHeightForWidth(groupBoxSheep->sizePolicy().hasHeightForWidth());
        groupBoxSheep->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBoxSheep);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBoxSheep);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 5, 1, 1);

        gridLayoutSheep = new QGridLayout();
        gridLayoutSheep->setObjectName(QStringLiteral("gridLayoutSheep"));

        gridLayout_2->addLayout(gridLayoutSheep, 0, 4, 2, 1);

        iconSheep = new QLabel(groupBoxSheep);
        iconSheep->setObjectName(QStringLiteral("iconSheep"));
        sizePolicy2.setHeightForWidth(iconSheep->sizePolicy().hasHeightForWidth());
        iconSheep->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(iconSheep, 0, 0, 2, 1);

        lineDef1 = new QFrame(groupBoxSheep);
        lineDef1->setObjectName(QStringLiteral("lineDef1"));
        lineDef1->setFrameShape(QFrame::VLine);
        lineDef1->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(lineDef1, 0, 2, 2, 1);

        spinBoxSheep = new QSpinBox(groupBoxSheep);
        spinBoxSheep->setObjectName(QStringLiteral("spinBoxSheep"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBoxSheep->sizePolicy().hasHeightForWidth());
        spinBoxSheep->setSizePolicy(sizePolicy4);
        spinBoxSheep->setMinimumSize(QSize(0, 40));
        spinBoxSheep->setFont(font1);
        spinBoxSheep->setAlignment(Qt::AlignCenter);
        spinBoxSheep->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_2->addWidget(spinBoxSheep, 1, 5, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 6, 2, 1);

        groupBoxProt1 = new QGroupBox(groupBoxSheep);
        groupBoxProt1->setObjectName(QStringLiteral("groupBoxProt1"));
        verticalLayout_4 = new QVBoxLayout(groupBoxProt1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelProt1 = new QLabel(groupBoxProt1);
        labelProt1->setObjectName(QStringLiteral("labelProt1"));
        labelProt1->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(labelProt1);

        protSheep = new QLabel(groupBoxProt1);
        protSheep->setObjectName(QStringLiteral("protSheep"));
        protSheep->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(protSheep);

        horizontalSpacer_10 = new QSpacerItem(55, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_10);


        gridLayout_2->addWidget(groupBoxProt1, 0, 1, 2, 1);


        gridLayout->addWidget(groupBoxSheep, 2, 1, 1, 3);

        groupBoxClay = new QGroupBox(NewYearWidget);
        groupBoxClay->setObjectName(QStringLiteral("groupBoxClay"));
        sizePolicy1.setHeightForWidth(groupBoxClay->sizePolicy().hasHeightForWidth());
        groupBoxClay->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(groupBoxClay);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayoutClay = new QGridLayout();
        gridLayoutClay->setObjectName(QStringLiteral("gridLayoutClay"));

        gridLayout_4->addLayout(gridLayoutClay, 0, 5, 2, 1);

        iconClay = new QLabel(groupBoxClay);
        iconClay->setObjectName(QStringLiteral("iconClay"));
        sizePolicy2.setHeightForWidth(iconClay->sizePolicy().hasHeightForWidth());
        iconClay->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(iconClay, 0, 0, 2, 1);

        label_3 = new QLabel(groupBoxClay);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_4->addWidget(label_3, 0, 6, 1, 1);

        spinBoxClay = new QSpinBox(groupBoxClay);
        spinBoxClay->setObjectName(QStringLiteral("spinBoxClay"));
        spinBoxClay->setMinimumSize(QSize(0, 40));
        spinBoxClay->setFont(font1);
        spinBoxClay->setAlignment(Qt::AlignCenter);
        spinBoxClay->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_4->addWidget(spinBoxClay, 1, 6, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 7, 2, 1);

        lineDef3 = new QFrame(groupBoxClay);
        lineDef3->setObjectName(QStringLiteral("lineDef3"));
        lineDef3->setFrameShape(QFrame::VLine);
        lineDef3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(lineDef3, 0, 4, 2, 1);

        groupBoxProt3 = new QGroupBox(groupBoxClay);
        groupBoxProt3->setObjectName(QStringLiteral("groupBoxProt3"));
        verticalLayout_5 = new QVBoxLayout(groupBoxProt3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelProt3 = new QLabel(groupBoxProt3);
        labelProt3->setObjectName(QStringLiteral("labelProt3"));
        labelProt3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(labelProt3);

        protClay = new QLabel(groupBoxProt3);
        protClay->setObjectName(QStringLiteral("protClay"));
        protClay->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(protClay);

        horizontalSpacer_12 = new QSpacerItem(55, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout_5->addItem(horizontalSpacer_12);


        gridLayout_4->addWidget(groupBoxProt3, 0, 3, 2, 1);


        gridLayout->addWidget(groupBoxClay, 4, 1, 1, 3);

        groupBoxWood = new QGroupBox(NewYearWidget);
        groupBoxWood->setObjectName(QStringLiteral("groupBoxWood"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(3);
        sizePolicy5.setHeightForWidth(groupBoxWood->sizePolicy().hasHeightForWidth());
        groupBoxWood->setSizePolicy(sizePolicy5);
        gridLayout_3 = new QGridLayout(groupBoxWood);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        iconWood = new QLabel(groupBoxWood);
        iconWood->setObjectName(QStringLiteral("iconWood"));
        sizePolicy2.setHeightForWidth(iconWood->sizePolicy().hasHeightForWidth());
        iconWood->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(iconWood, 0, 0, 2, 1);

        spinBoxWood = new QSpinBox(groupBoxWood);
        spinBoxWood->setObjectName(QStringLiteral("spinBoxWood"));
        spinBoxWood->setMinimumSize(QSize(0, 40));
        spinBoxWood->setFont(font1);
        spinBoxWood->setAlignment(Qt::AlignCenter);
        spinBoxWood->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_3->addWidget(spinBoxWood, 1, 6, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 7, 2, 1);

        lineDef2 = new QFrame(groupBoxWood);
        lineDef2->setObjectName(QStringLiteral("lineDef2"));
        lineDef2->setFrameShape(QFrame::VLine);
        lineDef2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(lineDef2, 0, 4, 2, 1);

        label_2 = new QLabel(groupBoxWood);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        gridLayout_3->addWidget(label_2, 0, 6, 1, 1);

        gridLayoutWood = new QGridLayout();
        gridLayoutWood->setObjectName(QStringLiteral("gridLayoutWood"));

        gridLayout_3->addLayout(gridLayoutWood, 0, 5, 2, 1);

        groupBoxProt2 = new QGroupBox(groupBoxWood);
        groupBoxProt2->setObjectName(QStringLiteral("groupBoxProt2"));
        verticalLayout_3 = new QVBoxLayout(groupBoxProt2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelProt2 = new QLabel(groupBoxProt2);
        labelProt2->setObjectName(QStringLiteral("labelProt2"));
        labelProt2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelProt2);

        protWood = new QLabel(groupBoxProt2);
        protWood->setObjectName(QStringLiteral("protWood"));
        protWood->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(protWood);

        horizontalSpacer_11 = new QSpacerItem(55, 2, QSizePolicy::Maximum, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_11);


        gridLayout_3->addWidget(groupBoxProt2, 0, 3, 2, 1);


        gridLayout->addWidget(groupBoxWood, 3, 1, 1, 3);


        retranslateUi(NewYearWidget);

        QMetaObject::connectSlotsByName(NewYearWidget);
    } // setupUi

    void retranslateUi(QWidget *NewYearWidget)
    {
        NewYearWidget->setWindowTitle(QApplication::translate("NewYearWidget", "Form", Q_NULLPTR));
        pushButtonOk->setText(QApplication::translate("NewYearWidget", "Ok", Q_NULLPTR));
        groupBoxIron->setTitle(QApplication::translate("NewYearWidget", "Bergleute", Q_NULLPTR));
        label_4->setText(QApplication::translate("NewYearWidget", "Summe:", Q_NULLPTR));
        groupBoxProt4->setTitle(QApplication::translate("NewYearWidget", "Schutz", Q_NULLPTR));
        labelProt4->setText(QApplication::translate("NewYearWidget", "Icon", Q_NULLPTR));
        protIron->setText(QString());
        iconIron->setText(QApplication::translate("NewYearWidget", "S", Q_NULLPTR));
        groupBoxWheat->setTitle(QApplication::translate("NewYearWidget", "Weizenbauern", Q_NULLPTR));
        label_5->setText(QApplication::translate("NewYearWidget", "Summe:", Q_NULLPTR));
        iconWheat->setText(QApplication::translate("NewYearWidget", "S", Q_NULLPTR));
        groupBoxProt5->setTitle(QApplication::translate("NewYearWidget", "Schutz", Q_NULLPTR));
        labelProt5->setText(QApplication::translate("NewYearWidget", "Icon", Q_NULLPTR));
        protWheat->setText(QString());
        groupBoxEvents->setTitle(QApplication::translate("NewYearWidget", "Ereignisse", Q_NULLPTR));
        groupBoxSheep->setTitle(QApplication::translate("NewYearWidget", "Sch\303\244fer", Q_NULLPTR));
        label->setText(QApplication::translate("NewYearWidget", "Summe:", Q_NULLPTR));
        iconSheep->setText(QApplication::translate("NewYearWidget", "S", Q_NULLPTR));
        groupBoxProt1->setTitle(QApplication::translate("NewYearWidget", "Schutz", Q_NULLPTR));
        labelProt1->setText(QApplication::translate("NewYearWidget", "Icon", Q_NULLPTR));
        protSheep->setText(QString());
        groupBoxClay->setTitle(QApplication::translate("NewYearWidget", "T\303\266pfer", Q_NULLPTR));
        iconClay->setText(QApplication::translate("NewYearWidget", "S", Q_NULLPTR));
        label_3->setText(QApplication::translate("NewYearWidget", "Summe:", Q_NULLPTR));
        groupBoxProt3->setTitle(QApplication::translate("NewYearWidget", "Schutz", Q_NULLPTR));
        labelProt3->setText(QApplication::translate("NewYearWidget", "Icon", Q_NULLPTR));
        protClay->setText(QString());
        groupBoxWood->setTitle(QApplication::translate("NewYearWidget", "Holzf\303\244ller", Q_NULLPTR));
        iconWood->setText(QApplication::translate("NewYearWidget", "S", Q_NULLPTR));
        label_2->setText(QApplication::translate("NewYearWidget", "Summe:", Q_NULLPTR));
        groupBoxProt2->setTitle(QApplication::translate("NewYearWidget", "Schutz", Q_NULLPTR));
        labelProt2->setText(QApplication::translate("NewYearWidget", "Icon", Q_NULLPTR));
        protWood->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewYearWidget: public Ui_NewYearWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWYEARWIDGET_H
