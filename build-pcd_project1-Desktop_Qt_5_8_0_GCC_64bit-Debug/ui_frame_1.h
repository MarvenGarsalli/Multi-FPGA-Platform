/********************************************************************************
** Form generated from reading UI file 'frame_1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRAME_1_H
#define UI_FRAME_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Frame_1
{
public:
    QHBoxLayout *horizontalLayout;
    QPushButton *unit1A;

    void setupUi(QFrame *Frame_1)
    {
        if (Frame_1->objectName().isEmpty())
            Frame_1->setObjectName(QStringLiteral("Frame_1"));
        Frame_1->resize(192, 204);
        Frame_1->setMinimumSize(QSize(192, 204));
        Frame_1->setMaximumSize(QSize(192, 204));
        Frame_1->setMouseTracking(true);
        Frame_1->setFocusPolicy(Qt::NoFocus);
        Frame_1->setAutoFillBackground(false);
        Frame_1->setFrameShape(QFrame::StyledPanel);
        Frame_1->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(Frame_1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        unit1A = new QPushButton(Frame_1);
        unit1A->setObjectName(QStringLiteral("unit1A"));
        unit1A->setContextMenuPolicy(Qt::CustomContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral("../build-pcd_project1-Desktop_Qt_5_8_0_GCC_64bit-Debug/unita.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        unit1A->setIcon(icon);
        unit1A->setIconSize(QSize(200, 200));
        unit1A->setCheckable(false);

        horizontalLayout->addWidget(unit1A);


        retranslateUi(Frame_1);

        QMetaObject::connectSlotsByName(Frame_1);
    } // setupUi

    void retranslateUi(QFrame *Frame_1)
    {
        Frame_1->setWindowTitle(QApplication::translate("Frame_1", "UnoFPGA", Q_NULLPTR));
        unit1A->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Frame_1: public Ui_Frame_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRAME_1_H
