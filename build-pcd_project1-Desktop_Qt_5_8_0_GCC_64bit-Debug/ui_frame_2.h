/********************************************************************************
** Form generated from reading UI file 'frame_2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_2_H
#define UI_FRAME_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Frame_2
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *unit2A;
    QPushButton *unit2B;

    void setupUi(QFrame *Frame_2)
    {
        if (Frame_2->objectName().isEmpty())
            Frame_2->setObjectName(QStringLiteral("Frame_2"));
        Frame_2->resize(450, 226);
        Frame_2->setFrameShape(QFrame::StyledPanel);
        Frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Frame_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        unit2A = new QPushButton(Frame_2);
        unit2A->setObjectName(QStringLiteral("unit2A"));
        QIcon icon;
        icon.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unita.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit2A->setIcon(icon);
        unit2A->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(unit2A);

        unit2B = new QPushButton(Frame_2);
        unit2B->setObjectName(QStringLiteral("unit2B"));
        unit2B->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unitb.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit2B->setIcon(icon1);
        unit2B->setIconSize(QSize(200, 200));

        horizontalLayout->addWidget(unit2B);


        retranslateUi(Frame_2);

        QMetaObject::connectSlotsByName(Frame_2);
    } // setupUi

    void retranslateUi(QFrame *Frame_2)
    {
        Frame_2->setWindowTitle(QApplication::translate("Frame_2", "Frame", Q_NULLPTR));
        unit2A->setText(QString());
        unit2B->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frame_2: public Ui_Frame_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_2_H
