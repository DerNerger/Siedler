/********************************************************************************
** Form generated from reading UI file 'beamerview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEAMERVIEW_H
#define UI_BEAMERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeamerView
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayoutGroupBox;
    QSpacerItem *verticalSpacer;
    QLabel *labelDescription;
    QLabel *labelTime;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelSeason;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *BeamerView)
    {
        if (BeamerView->objectName().isEmpty())
            BeamerView->setObjectName(QStringLiteral("BeamerView"));
        BeamerView->resize(988, 631);
        gridLayout = new QGridLayout(BeamerView);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(BeamerView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayoutGroupBox = new QVBoxLayout();
        verticalLayoutGroupBox->setObjectName(QStringLiteral("verticalLayoutGroupBox"));

        verticalLayout_2->addLayout(verticalLayoutGroupBox);


        gridLayout->addWidget(groupBox, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        labelDescription = new QLabel(BeamerView);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        QFont font;
        font.setPointSize(60);
        labelDescription->setFont(font);
        labelDescription->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelDescription, 2, 1, 1, 1);

        labelTime = new QLabel(BeamerView);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        QFont font1;
        font1.setPointSize(80);
        labelTime->setFont(font1);
        labelTime->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelTime, 4, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        labelSeason = new QLabel(BeamerView);
        labelSeason->setObjectName(QStringLiteral("labelSeason"));
        QFont font2;
        font2.setPointSize(100);
        labelSeason->setFont(font2);
        labelSeason->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelSeason, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(100, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 5, 1, 1, 1);


        retranslateUi(BeamerView);

        QMetaObject::connectSlotsByName(BeamerView);
    } // setupUi

    void retranslateUi(QWidget *BeamerView)
    {
        BeamerView->setWindowTitle(QApplication::translate("BeamerView", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("BeamerView", "Events", Q_NULLPTR));
        labelDescription->setText(QApplication::translate("BeamerView", "Handeln und Bauen", Q_NULLPTR));
        labelTime->setText(QApplication::translate("BeamerView", "00:00/02:00", Q_NULLPTR));
        labelSeason->setText(QApplication::translate("BeamerView", "Fr\303\274hling", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BeamerView: public Ui_BeamerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEAMERVIEW_H
