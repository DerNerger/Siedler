/********************************************************************************
** Form generated from reading UI file 'teamwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEAMWIDGET_H
#define UI_TEAMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeamWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *labelResources;
    QLabel *labelTrade;
    QLabel *label_4;
    QLabel *labelPoints;
    QLabel *label_2;
    QPushButton *pushButtonTeamPointOverview;
    QPushButton *pushButtonBuy;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *iconLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *TeamWidget)
    {
        if (TeamWidget->objectName().isEmpty())
            TeamWidget->setObjectName(QStringLiteral("TeamWidget"));
        TeamWidget->resize(356, 261);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TeamWidget->sizePolicy().hasHeightForWidth());
        TeamWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(TeamWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelResources = new QLabel(TeamWidget);
        labelResources->setObjectName(QStringLiteral("labelResources"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelResources->sizePolicy().hasHeightForWidth());
        labelResources->setSizePolicy(sizePolicy1);
        labelResources->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(labelResources, 2, 3, 1, 1);

        labelTrade = new QLabel(TeamWidget);
        labelTrade->setObjectName(QStringLiteral("labelTrade"));
        sizePolicy1.setHeightForWidth(labelTrade->sizePolicy().hasHeightForWidth());
        labelTrade->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelTrade, 3, 3, 1, 1);

        label_4 = new QLabel(TeamWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        labelPoints = new QLabel(TeamWidget);
        labelPoints->setObjectName(QStringLiteral("labelPoints"));
        sizePolicy1.setHeightForWidth(labelPoints->sizePolicy().hasHeightForWidth());
        labelPoints->setSizePolicy(sizePolicy1);
        labelPoints->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(labelPoints, 1, 3, 1, 1);

        label_2 = new QLabel(TeamWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        pushButtonTeamPointOverview = new QPushButton(TeamWidget);
        pushButtonTeamPointOverview->setObjectName(QStringLiteral("pushButtonTeamPointOverview"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(pushButtonTeamPointOverview->sizePolicy().hasHeightForWidth());
        pushButtonTeamPointOverview->setSizePolicy(sizePolicy3);
        pushButtonTeamPointOverview->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pushButtonTeamPointOverview, 1, 4, 1, 1);

        pushButtonBuy = new QPushButton(TeamWidget);
        pushButtonBuy->setObjectName(QStringLiteral("pushButtonBuy"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButtonBuy->sizePolicy().hasHeightForWidth());
        pushButtonBuy->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(pushButtonBuy, 4, 2, 1, 3);

        label_5 = new QLabel(TeamWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_5, 3, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        iconLabel = new QLabel(TeamWidget);
        iconLabel->setObjectName(QStringLiteral("iconLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(2);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(iconLabel->sizePolicy().hasHeightForWidth());
        iconLabel->setSizePolicy(sizePolicy5);
        iconLabel->setMinimumSize(QSize(50, 50));
        iconLabel->setMaximumSize(QSize(50, 50));
        iconLabel->setSizeIncrement(QSize(10, 10));
        iconLabel->setBaseSize(QSize(50, 50));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8("../../build-Siedler-Desktop_Qt_5_5_0_MinGW_32bit-Debug/debug/Data/Icons/iconWheat.png")));
        iconLabel->setScaledContents(true);

        horizontalLayout->addWidget(iconLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelTitle = new QLabel(TeamWidget);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        sizePolicy1.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy1);
        labelTitle->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(50, 50, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout, 0, 2, 1, 3);


        retranslateUi(TeamWidget);

        QMetaObject::connectSlotsByName(TeamWidget);
    } // setupUi

    void retranslateUi(QWidget *TeamWidget)
    {
        TeamWidget->setWindowTitle(QApplication::translate("TeamWidget", "Form", Q_NULLPTR));
        labelResources->setText(QApplication::translate("TeamWidget", "TextLabel", Q_NULLPTR));
        labelTrade->setText(QApplication::translate("TeamWidget", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("TeamWidget", "  Rohstoffe:", Q_NULLPTR));
        labelPoints->setText(QApplication::translate("TeamWidget", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("TeamWidget", "  Punkte: ", Q_NULLPTR));
        pushButtonTeamPointOverview->setText(QApplication::translate("TeamWidget", "+", Q_NULLPTR));
        pushButtonBuy->setText(QApplication::translate("TeamWidget", "Bauen...", Q_NULLPTR));
        label_5->setText(QApplication::translate("TeamWidget", "  Handel:", Q_NULLPTR));
        iconLabel->setText(QString());
        labelTitle->setText(QApplication::translate("TeamWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TeamWidget: public Ui_TeamWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEAMWIDGET_H
