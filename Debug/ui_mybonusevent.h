/********************************************************************************
** Form generated from reading UI file 'mybonusevent.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYBONUSEVENT_H
#define UI_MYBONUSEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MyBonusEvent
{
public:
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *MyBonusEvent)
    {
        if (MyBonusEvent->objectName().isEmpty())
            MyBonusEvent->setObjectName(QStringLiteral("MyBonusEvent"));
        MyBonusEvent->resize(598, 146);
        horizontalLayout = new QHBoxLayout(MyBonusEvent);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        retranslateUi(MyBonusEvent);

        QMetaObject::connectSlotsByName(MyBonusEvent);
    } // setupUi

    void retranslateUi(QDialog *MyBonusEvent)
    {
        MyBonusEvent->setWindowTitle(QApplication::translate("MyBonusEvent", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyBonusEvent: public Ui_MyBonusEvent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYBONUSEVENT_H
