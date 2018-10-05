/********************************************************************************
** Form generated from reading UI file 'frame_4.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_4_H
#define UI_FRAME_4_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Frame_4
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *unit4D;
    QPushButton *unit4C;
    QPushButton *unit4B;
    QPushButton *unit4A;

    void setupUi(QFrame *Frame_4)
    {
        if (Frame_4->objectName().isEmpty())
            Frame_4->setObjectName(QStringLiteral("Frame_4"));
        Frame_4->resize(452, 440);
        Frame_4->setFrameShape(QFrame::StyledPanel);
        Frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Frame_4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        unit4D = new QPushButton(Frame_4);
        unit4D->setObjectName(QStringLiteral("unit4D"));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unitd.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit4D->setIcon(icon);
        unit4D->setIconSize(QSize(200, 200));

        gridLayout->addWidget(unit4D, 1, 1, 1, 1);

        unit4C = new QPushButton(Frame_4);
        unit4C->setObjectName(QStringLiteral("unit4C"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unitc.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit4C->setIcon(icon1);
        unit4C->setIconSize(QSize(200, 200));

        gridLayout->addWidget(unit4C, 1, 0, 1, 1);

        unit4B = new QPushButton(Frame_4);
        unit4B->setObjectName(QStringLiteral("unit4B"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unitb.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit4B->setIcon(icon2);
        unit4B->setIconSize(QSize(200, 200));

        gridLayout->addWidget(unit4B, 0, 1, 1, 1);

        unit4A = new QPushButton(Frame_4);
        unit4A->setObjectName(QStringLiteral("unit4A"));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unita.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit4A->setIcon(icon3);
        unit4A->setIconSize(QSize(200, 200));

        gridLayout->addWidget(unit4A, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(Frame_4);

        QMetaObject::connectSlotsByName(Frame_4);
    } // setupUi

    void retranslateUi(QFrame *Frame_4)
    {
        Frame_4->setWindowTitle(QApplication::translate("Frame_4", "Frame", Q_NULLPTR));
        unit4D->setText(QString());
        unit4C->setText(QString());
        unit4B->setText(QString());
        unit4A->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frame_4: public Ui_Frame_4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_4_H
