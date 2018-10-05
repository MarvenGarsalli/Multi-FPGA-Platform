/********************************************************************************
** Form generated from reading UI file 'interfacebank.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACEBANK_H
#define UI_INTERFACEBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfaceBank
{
public:
    QSpinBox *nbBank;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *regInterfaces;
    QLineEdit *InterfaceName;
    QGroupBox *groupBox;
    QComboBox *bank;
    QPushButton *addInterBank;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearBtn;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *InterfaceBank)
    {
        if (InterfaceBank->objectName().isEmpty())
            InterfaceBank->setObjectName(QStringLiteral("InterfaceBank"));
        InterfaceBank->resize(545, 373);
        nbBank = new QSpinBox(InterfaceBank);
        nbBank->setObjectName(QStringLiteral("nbBank"));
        nbBank->setGeometry(QRect(430, 40, 91, 26));
        label = new QLabel(InterfaceBank);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(440, 10, 101, 31));
        QFont font;
        font.setFamily(QStringLiteral("Abyssinica SIL"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(InterfaceBank);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 9, 111, 31));
        label_2->setFont(font);
        regInterfaces = new QTextEdit(InterfaceBank);
        regInterfaces->setObjectName(QStringLiteral("regInterfaces"));
        regInterfaces->setGeometry(QRect(10, 40, 231, 321));
        regInterfaces->setReadOnly(true);
        InterfaceName = new QLineEdit(InterfaceBank);
        InterfaceName->setObjectName(QStringLiteral("InterfaceName"));
        InterfaceName->setGeometry(QRect(270, 40, 141, 25));
        InterfaceName->setInputMethodHints(Qt::ImhNone);
        InterfaceName->setClearButtonEnabled(true);
        groupBox = new QGroupBox(InterfaceBank);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(270, 90, 251, 61));
        groupBox->setFont(font);
        bank = new QComboBox(groupBox);
        bank->setObjectName(QStringLiteral("bank"));
        bank->setGeometry(QRect(10, 30, 121, 25));
        addInterBank = new QPushButton(groupBox);
        addInterBank->setObjectName(QStringLiteral("addInterBank"));
        addInterBank->setGeometry(QRect(160, 30, 80, 25));
        pushButton_2 = new QPushButton(InterfaceBank);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 180, 251, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Bitstream Charter"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);
        label_3 = new QLabel(InterfaceBank);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 10, 181, 17));
        QFont font2;
        font2.setFamily(QStringLiteral("Abyssinica SIL"));
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        horizontalLayoutWidget = new QWidget(InterfaceBank);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(250, 330, 291, 32));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clearBtn = new QPushButton(horizontalLayoutWidget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setFont(font1);

        horizontalLayout->addWidget(clearBtn);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(InterfaceBank);

        QMetaObject::connectSlotsByName(InterfaceBank);
    } // setupUi

    void retranslateUi(QDialog *InterfaceBank)
    {
        InterfaceBank->setWindowTitle(QApplication::translate("InterfaceBank", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("InterfaceBank", "Number of Bank:", Q_NULLPTR));
        label_2->setText(QApplication::translate("InterfaceBank", "Interface name:", Q_NULLPTR));
        InterfaceName->setText(QString());
        groupBox->setTitle(QApplication::translate("InterfaceBank", "Add interface bank", Q_NULLPTR));
        bank->clear();
        bank->insertItems(0, QStringList()
         << QApplication::translate("InterfaceBank", "random", Q_NULLPTR)
        );
        addInterBank->setText(QApplication::translate("InterfaceBank", "Add", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("InterfaceBank", "Add another interface", Q_NULLPTR));
        label_3->setText(QApplication::translate("InterfaceBank", "Registred interfaces :", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("InterfaceBank", "Clear", Q_NULLPTR));
        pushButton->setText(QApplication::translate("InterfaceBank", "Cancel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("InterfaceBank", "Ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InterfaceBank: public Ui_InterfaceBank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACEBANK_H
