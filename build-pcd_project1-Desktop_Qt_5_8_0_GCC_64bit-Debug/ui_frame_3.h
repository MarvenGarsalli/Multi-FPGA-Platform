/********************************************************************************
** Form generated from reading UI file 'frame_3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_3_H
#define UI_FRAME_3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Frame_3
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *unit3A;
    QPushButton *unit3B;
    QPushButton *unit3C;

    void setupUi(QFrame *Frame_3)
    {
        if (Frame_3->objectName().isEmpty())
            Frame_3->setObjectName(QStringLiteral("Frame_3"));
        Frame_3->resize(668, 226);
        Frame_3->setFrameShape(QFrame::StyledPanel);
        Frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Frame_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        unit3A = new QPushButton(Frame_3);
        unit3A->setObjectName(QStringLiteral("unit3A"));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unita.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit3A->setIcon(icon);
        unit3A->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(unit3A);

        unit3B = new QPushButton(Frame_3);
        unit3B->setObjectName(QStringLiteral("unit3B"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unitb.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit3B->setIcon(icon1);
        unit3B->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(unit3B);

        unit3C = new QPushButton(Frame_3);
        unit3C->setObjectName(QStringLiteral("unit3C"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unitc.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit3C->setIcon(icon2);
        unit3C->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(unit3C);


        retranslateUi(Frame_3);

        QMetaObject::connectSlotsByName(Frame_3);
    } // setupUi

    void retranslateUi(QFrame *Frame_3)
    {
        Frame_3->setWindowTitle(QApplication::translate("Frame_3", "Frame", Q_NULLPTR));
        unit3A->setText(QString());
        unit3B->setText(QString());
        unit3C->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frame_3: public Ui_Frame_3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_3_H
