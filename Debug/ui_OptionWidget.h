/********************************************************************************
** Form generated from reading UI file 'OptionWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONWIDGET_H
#define UI_OPTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBoxOptions;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_3;
    QFormLayout *formLayout;
    QCheckBox *eventCheckBox;
    QLabel *eventLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QComboBox *comboBoxMainScreen;
    QLabel *label_2;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonStop;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *OptionWidget)
    {
        if (OptionWidget->objectName().isEmpty())
            OptionWidget->setObjectName(QStringLiteral("OptionWidget"));
        OptionWidget->resize(640, 468);
        gridLayout = new QGridLayout(OptionWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBoxOptions = new QGroupBox(OptionWidget);
        groupBoxOptions->setObjectName(QStringLiteral("groupBoxOptions"));
        verticalLayout = new QVBoxLayout(groupBoxOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_3);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        eventCheckBox = new QCheckBox(groupBoxOptions);
        eventCheckBox->setObjectName(QStringLiteral("eventCheckBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, eventCheckBox);

        eventLabel = new QLabel(groupBoxOptions);
        eventLabel->setObjectName(QStringLiteral("eventLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, eventLabel);


        verticalLayout->addLayout(formLayout);

        groupBox_2 = new QGroupBox(groupBoxOptions);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider = new QSlider(groupBox_2);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox_2);

        horizontalSpacer_4 = new QSpacerItem(40, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_4);

        groupBox = new QGroupBox(groupBoxOptions);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        comboBoxMainScreen = new QComboBox(groupBox);
        comboBoxMainScreen->setObjectName(QStringLiteral("comboBoxMainScreen"));

        gridLayout_2->addWidget(comboBoxMainScreen, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        pushButtonSave = new QPushButton(groupBoxOptions);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        verticalLayout->addWidget(pushButtonSave);

        pushButtonStop = new QPushButton(groupBoxOptions);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        verticalLayout->addWidget(pushButtonStop);


        gridLayout->addWidget(groupBoxOptions, 1, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 2, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 2, 1);


        retranslateUi(OptionWidget);

        QMetaObject::connectSlotsByName(OptionWidget);
    } // setupUi

    void retranslateUi(QWidget *OptionWidget)
    {
        OptionWidget->setWindowTitle(QApplication::translate("OptionWidget", "Form", Q_NULLPTR));
        groupBoxOptions->setTitle(QApplication::translate("OptionWidget", "Optionen", Q_NULLPTR));
        eventLabel->setText(QApplication::translate("OptionWidget", "Trennung in pos. und neg. Events:", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("OptionWidget", "Soundeinstellungen", Q_NULLPTR));
        label->setText(QApplication::translate("OptionWidget", "Volume: ", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OptionWidget", "Videoeinstellungen", Q_NULLPTR));
        label_2->setText(QApplication::translate("OptionWidget", "Spielleiteransicht auf Bildschirm:", Q_NULLPTR));
        pushButtonSave->setText(QApplication::translate("OptionWidget", "Speichern und Zur\303\274ck", Q_NULLPTR));
        pushButtonStop->setText(QApplication::translate("OptionWidget", "Abbrechen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OptionWidget: public Ui_OptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONWIDGET_H
