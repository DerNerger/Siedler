/********************************************************************************
** Form generated from reading UI file 'seasonview.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEASONVIEW_H
#define UI_SEASONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SeasonView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelDescription;
    QLabel *labelTime;
    QProgressBar *progressBarTime;

    void setupUi(QWidget *SeasonView)
    {
        if (SeasonView->objectName().isEmpty())
            SeasonView->setObjectName(QStringLiteral("SeasonView"));
        SeasonView->resize(253, 99);
        verticalLayout = new QVBoxLayout(SeasonView);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelDescription = new QLabel(SeasonView);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        QFont font;
        font.setFamily(QStringLiteral("Georgia"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(true);
        font.setWeight(50);
        labelDescription->setFont(font);
        labelDescription->setStyleSheet(QStringLiteral("font: italic 14pt \"Georgia\";"));
        labelDescription->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelDescription);

        labelTime = new QLabel(SeasonView);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        QFont font1;
        font1.setFamily(QStringLiteral("Georgia"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        labelTime->setFont(font1);
        labelTime->setStyleSheet(QStringLiteral("font: 16pt \"Georgia\";"));
        labelTime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTime);

        progressBarTime = new QProgressBar(SeasonView);
        progressBarTime->setObjectName(QStringLiteral("progressBarTime"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBarTime->sizePolicy().hasHeightForWidth());
        progressBarTime->setSizePolicy(sizePolicy);
        progressBarTime->setMinimumSize(QSize(0, 20));
        progressBarTime->setMaximumSize(QSize(16777215, 20));
        progressBarTime->setValue(24);
        progressBarTime->setTextVisible(false);

        verticalLayout->addWidget(progressBarTime);


        retranslateUi(SeasonView);

        QMetaObject::connectSlotsByName(SeasonView);
    } // setupUi

    void retranslateUi(QWidget *SeasonView)
    {
        SeasonView->setWindowTitle(QApplication::translate("SeasonView", "Form", Q_NULLPTR));
        labelDescription->setText(QApplication::translate("SeasonView", "TextLabel", Q_NULLPTR));
        labelTime->setText(QApplication::translate("SeasonView", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SeasonView: public Ui_SeasonView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEASONVIEW_H
