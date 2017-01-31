/********************************************************************************
** Form generated from reading UI file 'mediaplayer.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEDIAPLAYER_H
#define UI_MEDIAPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MediaPlayer
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonYear;
    QPushButton *pushButtonOverview;
    QLabel *label;
    QSlider *volumeSlider;
    QCheckBox *checkBox;

    void setupUi(QWidget *MediaPlayer)
    {
        if (MediaPlayer->objectName().isEmpty())
            MediaPlayer->setObjectName(QStringLiteral("MediaPlayer"));
        MediaPlayer->resize(728, 207);
        verticalLayout = new QVBoxLayout(MediaPlayer);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(MediaPlayer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonYear = new QPushButton(groupBox);
        pushButtonYear->setObjectName(QStringLiteral("pushButtonYear"));
        QFont font;
        font.setPointSize(12);
        pushButtonYear->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral("../../OutputDebug/debug/Data/Icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonYear->setIcon(icon);
        pushButtonYear->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButtonYear);

        pushButtonOverview = new QPushButton(groupBox);
        pushButtonOverview->setObjectName(QStringLiteral("pushButtonOverview"));
        pushButtonOverview->setFont(font);
        pushButtonOverview->setIcon(icon);
        pushButtonOverview->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(pushButtonOverview);


        verticalLayout_2->addLayout(horizontalLayout);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label);

        volumeSlider = new QSlider(groupBox);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(50);
        volumeSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(volumeSlider);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_2->addWidget(checkBox);


        verticalLayout->addWidget(groupBox);


        retranslateUi(MediaPlayer);

        QMetaObject::connectSlotsByName(MediaPlayer);
    } // setupUi

    void retranslateUi(QWidget *MediaPlayer)
    {
        MediaPlayer->setWindowTitle(QApplication::translate("MediaPlayer", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MediaPlayer", "Musicplayer", Q_NULLPTR));
        pushButtonYear->setText(QApplication::translate("MediaPlayer", "Jahreswechsel", Q_NULLPTR));
        pushButtonOverview->setText(QApplication::translate("MediaPlayer", "\303\234bersicht", Q_NULLPTR));
        label->setText(QApplication::translate("MediaPlayer", "Volume:", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MediaPlayer", "Automatischer Musikwechsel beim Jahreswechsel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MediaPlayer: public Ui_MediaPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEDIAPLAYER_H
