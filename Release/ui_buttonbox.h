/********************************************************************************
** Form generated from reading UI file 'buttonbox.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONBOX_H
#define UI_BUTTONBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_ButtonBox
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonPause;
    QPushButton *pushButtonSpring;
    QPushButton *pushButtonSummer;
    QPushButton *pushButtonAutumn;
    QPushButton *pushButtonWinter;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonWindowed;
    QPushButton *pushButtonProjector;
    QPushButton *pushButtonGeneratePixmaps;
    QSpacerItem *horizontalSpacer;

    void setupUi(QGroupBox *ButtonBox)
    {
        if (ButtonBox->objectName().isEmpty())
            ButtonBox->setObjectName(QStringLiteral("ButtonBox"));
        ButtonBox->resize(320, 175);
        gridLayout = new QGridLayout(ButtonBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_2 = new QGroupBox(ButtonBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonPause = new QPushButton(groupBox_2);
        pushButtonPause->setObjectName(QStringLiteral("pushButtonPause"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonPause->sizePolicy().hasHeightForWidth());
        pushButtonPause->setSizePolicy(sizePolicy);
        pushButtonPause->setMinimumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButtonPause);

        pushButtonSpring = new QPushButton(groupBox_2);
        pushButtonSpring->setObjectName(QStringLiteral("pushButtonSpring"));
        sizePolicy.setHeightForWidth(pushButtonSpring->sizePolicy().hasHeightForWidth());
        pushButtonSpring->setSizePolicy(sizePolicy);
        pushButtonSpring->setMinimumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButtonSpring);

        pushButtonSummer = new QPushButton(groupBox_2);
        pushButtonSummer->setObjectName(QStringLiteral("pushButtonSummer"));
        sizePolicy.setHeightForWidth(pushButtonSummer->sizePolicy().hasHeightForWidth());
        pushButtonSummer->setSizePolicy(sizePolicy);
        pushButtonSummer->setMinimumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButtonSummer);

        pushButtonAutumn = new QPushButton(groupBox_2);
        pushButtonAutumn->setObjectName(QStringLiteral("pushButtonAutumn"));
        sizePolicy.setHeightForWidth(pushButtonAutumn->sizePolicy().hasHeightForWidth());
        pushButtonAutumn->setSizePolicy(sizePolicy);
        pushButtonAutumn->setMinimumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButtonAutumn);

        pushButtonWinter = new QPushButton(groupBox_2);
        pushButtonWinter->setObjectName(QStringLiteral("pushButtonWinter"));
        sizePolicy.setHeightForWidth(pushButtonWinter->sizePolicy().hasHeightForWidth());
        pushButtonWinter->setSizePolicy(sizePolicy);
        pushButtonWinter->setMinimumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButtonWinter);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox = new QGroupBox(ButtonBox);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonWindowed = new QPushButton(groupBox);
        pushButtonWindowed->setObjectName(QStringLiteral("pushButtonWindowed"));
        sizePolicy.setHeightForWidth(pushButtonWindowed->sizePolicy().hasHeightForWidth());
        pushButtonWindowed->setSizePolicy(sizePolicy);
        pushButtonWindowed->setMinimumSize(QSize(35, 35));

        horizontalLayout->addWidget(pushButtonWindowed);

        pushButtonProjector = new QPushButton(groupBox);
        pushButtonProjector->setObjectName(QStringLiteral("pushButtonProjector"));
        sizePolicy.setHeightForWidth(pushButtonProjector->sizePolicy().hasHeightForWidth());
        pushButtonProjector->setSizePolicy(sizePolicy);
        pushButtonProjector->setMinimumSize(QSize(35, 35));
        pushButtonProjector->setCheckable(true);

        horizontalLayout->addWidget(pushButtonProjector);

        pushButtonGeneratePixmaps = new QPushButton(groupBox);
        pushButtonGeneratePixmaps->setObjectName(QStringLiteral("pushButtonGeneratePixmaps"));
        sizePolicy.setHeightForWidth(pushButtonGeneratePixmaps->sizePolicy().hasHeightForWidth());
        pushButtonGeneratePixmaps->setSizePolicy(sizePolicy);
        pushButtonGeneratePixmaps->setMinimumSize(QSize(35, 35));

        horizontalLayout->addWidget(pushButtonGeneratePixmaps);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(groupBox, 2, 0, 1, 1);


        retranslateUi(ButtonBox);

        QMetaObject::connectSlotsByName(ButtonBox);
    } // setupUi

    void retranslateUi(QGroupBox *ButtonBox)
    {
        ButtonBox->setWindowTitle(QApplication::translate("ButtonBox", "GroupBox", Q_NULLPTR));
        ButtonBox->setTitle(QApplication::translate("ButtonBox", "N\303\274tzliches", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ButtonBox", "Audio", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButtonPause->setToolTip(QApplication::translate("ButtonBox", "Stoppt die Hintergrundmusik", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonPause->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonSpring->setToolTip(QApplication::translate("ButtonBox", "Spielt Die Fr\303\274hlingsmusik. (w\303\244hrend des W\303\274rfelns)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonSpring->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonSummer->setToolTip(QApplication::translate("ButtonBox", "Spielt die Sommermusik.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonSummer->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonAutumn->setToolTip(QApplication::translate("ButtonBox", "Spielt die Herbstmusik", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonAutumn->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonWinter->setToolTip(QApplication::translate("ButtonBox", "Spielt die Wintermusik.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonWinter->setText(QString());
        groupBox->setTitle(QApplication::translate("ButtonBox", "Sonstiges", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButtonWindowed->setToolTip(QApplication::translate("ButtonBox", "Zwischen Vollbild und Fenstermodus wechseln.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonWindowed->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonProjector->setToolTip(QApplication::translate("ButtonBox", "Aktuell ohne Funktion.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonProjector->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButtonGeneratePixmaps->setToolTip(QApplication::translate("ButtonBox", "Generiert die Geb\303\244udeansichten.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonGeneratePixmaps->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ButtonBox: public Ui_ButtonBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONBOX_H
