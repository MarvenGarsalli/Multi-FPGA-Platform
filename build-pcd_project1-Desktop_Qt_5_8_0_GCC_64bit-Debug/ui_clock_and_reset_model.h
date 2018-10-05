/********************************************************************************
** Form generated from reading UI file 'clock_and_reset_model.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCK_AND_RESET_MODEL_H
#define UI_CLOCK_AND_RESET_MODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Clock_and_Reset_model
{
public:
    QLabel *modelabel;
    QLabel *labelresetmodelname;
    QLabel *pinplabel;
    QLabel *labelresetnetworkname;
    QComboBox *resetNetwork_pinP;
    QLabel *labelclockmodelname_5;
    QPushButton *addclocknetwork;
    QPushButton *addresetnetwork;
    QComboBox *fpgaRef;
    QComboBox *clockNetwork_pinP;
    QLabel *labelfpgaref;
    QLabel *labelclockmodelname_2;
    QComboBox *clockNetwork_pinN;
    QLabel *labelclockmodelname;
    QLabel *labelclockmodel_2;
    QComboBox *clockMode;
    QLabel *pinnlabel;
    QTextEdit *resetModelContainer;
    QTextEdit *clockModelContainer;
    QLabel *modelabel_2;
    QLabel *pinplabel_2;
    QLabel *pinnlabel_2;
    QComboBox *resetMode;
    QLabel *labelclockmodelname_3;
    QLabel *labelclockmodel;
    QComboBox *resetNetwork_type;
    QLabel *modelabel_3;
    QComboBox *resetNetwork_pinN;
    QFrame *line;
    QPushButton *okBtn;
    QFrame *line_2;
    QPushButton *clearClockBtn;
    QPushButton *clearResetBtn;
    QFrame *line_3;
    QLineEdit *clockModel_name;
    QLineEdit *clockNetwork_name;
    QLineEdit *resetModel_name;
    QLineEdit *resetNetwork_name;

    void setupUi(QFrame *Clock_and_Reset_model)
    {
        if (Clock_and_Reset_model->objectName().isEmpty())
            Clock_and_Reset_model->setObjectName(QStringLiteral("Clock_and_Reset_model"));
        Clock_and_Reset_model->resize(772, 615);
        Clock_and_Reset_model->setFrameShape(QFrame::StyledPanel);
        Clock_and_Reset_model->setFrameShadow(QFrame::Raised);
        modelabel = new QLabel(Clock_and_Reset_model);
        modelabel->setObjectName(QStringLiteral("modelabel"));
        modelabel->setGeometry(QRect(370, 140, 61, 31));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(modelabel->sizePolicy().hasHeightForWidth());
        modelabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Abyssinica SIL"));
        font.setPointSize(12);
        font.setItalic(false);
        modelabel->setFont(font);
        labelresetmodelname = new QLabel(Clock_and_Reset_model);
        labelresetmodelname->setObjectName(QStringLiteral("labelresetmodelname"));
        labelresetmodelname->setGeometry(QRect(10, 320, 121, 31));
        sizePolicy.setHeightForWidth(labelresetmodelname->sizePolicy().hasHeightForWidth());
        labelresetmodelname->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Abyssinica SIL"));
        font1.setPointSize(10);
        font1.setItalic(false);
        labelresetmodelname->setFont(font1);
        pinplabel = new QLabel(Clock_and_Reset_model);
        pinplabel->setObjectName(QStringLiteral("pinplabel"));
        pinplabel->setGeometry(QRect(500, 140, 51, 31));
        sizePolicy.setHeightForWidth(pinplabel->sizePolicy().hasHeightForWidth());
        pinplabel->setSizePolicy(sizePolicy);
        pinplabel->setFont(font);
        labelresetnetworkname = new QLabel(Clock_and_Reset_model);
        labelresetnetworkname->setObjectName(QStringLiteral("labelresetnetworkname"));
        labelresetnetworkname->setGeometry(QRect(400, 330, 141, 31));
        sizePolicy.setHeightForWidth(labelresetnetworkname->sizePolicy().hasHeightForWidth());
        labelresetnetworkname->setSizePolicy(sizePolicy);
        labelresetnetworkname->setFont(font1);
        resetNetwork_pinP = new QComboBox(Clock_and_Reset_model);
        resetNetwork_pinP->setObjectName(QStringLiteral("resetNetwork_pinP"));
        resetNetwork_pinP->setEnabled(false);
        resetNetwork_pinP->setGeometry(QRect(580, 400, 171, 33));
        labelclockmodelname_5 = new QLabel(Clock_and_Reset_model);
        labelclockmodelname_5->setObjectName(QStringLiteral("labelclockmodelname_5"));
        labelclockmodelname_5->setGeometry(QRect(370, 280, 161, 41));
        sizePolicy.setHeightForWidth(labelclockmodelname_5->sizePolicy().hasHeightForWidth());
        labelclockmodelname_5->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Abyssinica SIL"));
        font2.setPointSize(16);
        font2.setItalic(false);
        labelclockmodelname_5->setFont(font2);
        addclocknetwork = new QPushButton(Clock_and_Reset_model);
        addclocknetwork->setObjectName(QStringLiteral("addclocknetwork"));
        addclocknetwork->setEnabled(false);
        addclocknetwork->setGeometry(QRect(650, 220, 101, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Abyssinica SIL"));
        font3.setPointSize(13);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        addclocknetwork->setFont(font3);
        addresetnetwork = new QPushButton(Clock_and_Reset_model);
        addresetnetwork->setObjectName(QStringLiteral("addresetnetwork"));
        addresetnetwork->setEnabled(false);
        addresetnetwork->setGeometry(QRect(650, 500, 101, 41));
        addresetnetwork->setFont(font3);
        fpgaRef = new QComboBox(Clock_and_Reset_model);
        fpgaRef->setObjectName(QStringLiteral("fpgaRef"));
        fpgaRef->setGeometry(QRect(220, 10, 251, 33));
        clockNetwork_pinP = new QComboBox(Clock_and_Reset_model);
        clockNetwork_pinP->setObjectName(QStringLiteral("clockNetwork_pinP"));
        clockNetwork_pinP->setEnabled(false);
        clockNetwork_pinP->setGeometry(QRect(500, 170, 121, 33));
        labelfpgaref = new QLabel(Clock_and_Reset_model);
        labelfpgaref->setObjectName(QStringLiteral("labelfpgaref"));
        labelfpgaref->setGeometry(QRect(10, 10, 191, 31));
        sizePolicy.setHeightForWidth(labelfpgaref->sizePolicy().hasHeightForWidth());
        labelfpgaref->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QStringLiteral("Abyssinica SIL"));
        font4.setPointSize(18);
        font4.setItalic(false);
        labelfpgaref->setFont(font4);
        labelclockmodelname_2 = new QLabel(Clock_and_Reset_model);
        labelclockmodelname_2->setObjectName(QStringLiteral("labelclockmodelname_2"));
        labelclockmodelname_2->setGeometry(QRect(370, 50, 161, 41));
        sizePolicy.setHeightForWidth(labelclockmodelname_2->sizePolicy().hasHeightForWidth());
        labelclockmodelname_2->setSizePolicy(sizePolicy);
        labelclockmodelname_2->setFont(font2);
        clockNetwork_pinN = new QComboBox(Clock_and_Reset_model);
        clockNetwork_pinN->setObjectName(QStringLiteral("clockNetwork_pinN"));
        clockNetwork_pinN->setEnabled(false);
        clockNetwork_pinN->setGeometry(QRect(640, 170, 111, 33));
        labelclockmodelname = new QLabel(Clock_and_Reset_model);
        labelclockmodelname->setObjectName(QStringLiteral("labelclockmodelname"));
        labelclockmodelname->setGeometry(QRect(10, 90, 121, 31));
        sizePolicy.setHeightForWidth(labelclockmodelname->sizePolicy().hasHeightForWidth());
        labelclockmodelname->setSizePolicy(sizePolicy);
        labelclockmodelname->setFont(font1);
        labelclockmodel_2 = new QLabel(Clock_and_Reset_model);
        labelclockmodel_2->setObjectName(QStringLiteral("labelclockmodel_2"));
        labelclockmodel_2->setGeometry(QRect(10, 280, 191, 31));
        sizePolicy.setHeightForWidth(labelclockmodel_2->sizePolicy().hasHeightForWidth());
        labelclockmodel_2->setSizePolicy(sizePolicy);
        labelclockmodel_2->setFont(font4);
        clockMode = new QComboBox(Clock_and_Reset_model);
        clockMode->setObjectName(QStringLiteral("clockMode"));
        clockMode->setEnabled(false);
        clockMode->setGeometry(QRect(370, 170, 111, 33));
        pinnlabel = new QLabel(Clock_and_Reset_model);
        pinnlabel->setObjectName(QStringLiteral("pinnlabel"));
        pinnlabel->setGeometry(QRect(640, 140, 61, 31));
        sizePolicy.setHeightForWidth(pinnlabel->sizePolicy().hasHeightForWidth());
        pinnlabel->setSizePolicy(sizePolicy);
        pinnlabel->setFont(font);
        resetModelContainer = new QTextEdit(Clock_and_Reset_model);
        resetModelContainer->setObjectName(QStringLiteral("resetModelContainer"));
        resetModelContainer->setEnabled(false);
        resetModelContainer->setGeometry(QRect(10, 360, 351, 131));
        resetModelContainer->setReadOnly(true);
        clockModelContainer = new QTextEdit(Clock_and_Reset_model);
        clockModelContainer->setObjectName(QStringLiteral("clockModelContainer"));
        clockModelContainer->setEnabled(false);
        clockModelContainer->setGeometry(QRect(10, 130, 341, 131));
        clockModelContainer->setReadOnly(true);
        modelabel_2 = new QLabel(Clock_and_Reset_model);
        modelabel_2->setObjectName(QStringLiteral("modelabel_2"));
        modelabel_2->setGeometry(QRect(380, 370, 61, 31));
        sizePolicy.setHeightForWidth(modelabel_2->sizePolicy().hasHeightForWidth());
        modelabel_2->setSizePolicy(sizePolicy);
        modelabel_2->setFont(font);
        pinplabel_2 = new QLabel(Clock_and_Reset_model);
        pinplabel_2->setObjectName(QStringLiteral("pinplabel_2"));
        pinplabel_2->setGeometry(QRect(580, 370, 51, 31));
        sizePolicy.setHeightForWidth(pinplabel_2->sizePolicy().hasHeightForWidth());
        pinplabel_2->setSizePolicy(sizePolicy);
        pinplabel_2->setFont(font);
        pinnlabel_2 = new QLabel(Clock_and_Reset_model);
        pinnlabel_2->setObjectName(QStringLiteral("pinnlabel_2"));
        pinnlabel_2->setGeometry(QRect(580, 430, 61, 31));
        sizePolicy.setHeightForWidth(pinnlabel_2->sizePolicy().hasHeightForWidth());
        pinnlabel_2->setSizePolicy(sizePolicy);
        pinnlabel_2->setFont(font);
        resetMode = new QComboBox(Clock_and_Reset_model);
        resetMode->setObjectName(QStringLiteral("resetMode"));
        resetMode->setEnabled(false);
        resetMode->setGeometry(QRect(380, 400, 181, 33));
        labelclockmodelname_3 = new QLabel(Clock_and_Reset_model);
        labelclockmodelname_3->setObjectName(QStringLiteral("labelclockmodelname_3"));
        labelclockmodelname_3->setGeometry(QRect(390, 100, 141, 31));
        sizePolicy.setHeightForWidth(labelclockmodelname_3->sizePolicy().hasHeightForWidth());
        labelclockmodelname_3->setSizePolicy(sizePolicy);
        labelclockmodelname_3->setFont(font1);
        labelclockmodel = new QLabel(Clock_and_Reset_model);
        labelclockmodel->setObjectName(QStringLiteral("labelclockmodel"));
        labelclockmodel->setGeometry(QRect(10, 50, 191, 31));
        sizePolicy.setHeightForWidth(labelclockmodel->sizePolicy().hasHeightForWidth());
        labelclockmodel->setSizePolicy(sizePolicy);
        labelclockmodel->setFont(font4);
        resetNetwork_type = new QComboBox(Clock_and_Reset_model);
        resetNetwork_type->setObjectName(QStringLiteral("resetNetwork_type"));
        resetNetwork_type->setEnabled(false);
        resetNetwork_type->setGeometry(QRect(380, 460, 181, 33));
        modelabel_3 = new QLabel(Clock_and_Reset_model);
        modelabel_3->setObjectName(QStringLiteral("modelabel_3"));
        modelabel_3->setGeometry(QRect(380, 430, 61, 31));
        sizePolicy.setHeightForWidth(modelabel_3->sizePolicy().hasHeightForWidth());
        modelabel_3->setSizePolicy(sizePolicy);
        modelabel_3->setFont(font);
        resetNetwork_pinN = new QComboBox(Clock_and_Reset_model);
        resetNetwork_pinN->setObjectName(QStringLiteral("resetNetwork_pinN"));
        resetNetwork_pinN->setEnabled(false);
        resetNetwork_pinN->setGeometry(QRect(580, 460, 171, 33));
        line = new QFrame(Clock_and_Reset_model);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 260, 771, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        okBtn = new QPushButton(Clock_and_Reset_model);
        okBtn->setObjectName(QStringLiteral("okBtn"));
        okBtn->setGeometry(QRect(600, 570, 161, 31));
        line_2 = new QFrame(Clock_and_Reset_model);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 540, 771, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        clearClockBtn = new QPushButton(Clock_and_Reset_model);
        clearClockBtn->setObjectName(QStringLiteral("clearClockBtn"));
        clearClockBtn->setGeometry(QRect(400, 570, 161, 31));
        clearResetBtn = new QPushButton(Clock_and_Reset_model);
        clearResetBtn->setObjectName(QStringLiteral("clearResetBtn"));
        clearResetBtn->setGeometry(QRect(200, 570, 161, 31));
        line_3 = new QFrame(Clock_and_Reset_model);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 40, 771, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        clockModel_name = new QLineEdit(Clock_and_Reset_model);
        clockModel_name->setObjectName(QStringLiteral("clockModel_name"));
        clockModel_name->setEnabled(false);
        clockModel_name->setGeometry(QRect(140, 90, 211, 25));
        clockModel_name->setClearButtonEnabled(true);
        clockNetwork_name = new QLineEdit(Clock_and_Reset_model);
        clockNetwork_name->setObjectName(QStringLiteral("clockNetwork_name"));
        clockNetwork_name->setEnabled(false);
        clockNetwork_name->setGeometry(QRect(540, 100, 211, 25));
        clockNetwork_name->setClearButtonEnabled(true);
        resetModel_name = new QLineEdit(Clock_and_Reset_model);
        resetModel_name->setObjectName(QStringLiteral("resetModel_name"));
        resetModel_name->setEnabled(false);
        resetModel_name->setGeometry(QRect(140, 320, 221, 25));
        resetModel_name->setClearButtonEnabled(true);
        resetNetwork_name = new QLineEdit(Clock_and_Reset_model);
        resetNetwork_name->setObjectName(QStringLiteral("resetNetwork_name"));
        resetNetwork_name->setEnabled(false);
        resetNetwork_name->setGeometry(QRect(540, 330, 211, 25));
        resetNetwork_name->setClearButtonEnabled(true);

        retranslateUi(Clock_and_Reset_model);

        QMetaObject::connectSlotsByName(Clock_and_Reset_model);
    } // setupUi

    void retranslateUi(QFrame *Clock_and_Reset_model)
    {
        Clock_and_Reset_model->setWindowTitle(QApplication::translate("Clock_and_Reset_model", "Frame", Q_NULLPTR));
        modelabel->setText(QApplication::translate("Clock_and_Reset_model", "Mode :", Q_NULLPTR));
        labelresetmodelname->setText(QApplication::translate("Clock_and_Reset_model", "Reset Model name :", Q_NULLPTR));
        pinplabel->setText(QApplication::translate("Clock_and_Reset_model", "PinP :", Q_NULLPTR));
        labelresetnetworkname->setText(QApplication::translate("Clock_and_Reset_model", "Reset Network name:", Q_NULLPTR));
        resetNetwork_pinP->clear();
        resetNetwork_pinP->insertItems(0, QStringList()
         << QString()
        );
        labelclockmodelname_5->setText(QApplication::translate("Clock_and_Reset_model", "Clock Network :", Q_NULLPTR));
        addclocknetwork->setText(QApplication::translate("Clock_and_Reset_model", "Add", Q_NULLPTR));
        addresetnetwork->setText(QApplication::translate("Clock_and_Reset_model", "Add", Q_NULLPTR));
        fpgaRef->clear();
        fpgaRef->insertItems(0, QStringList()
         << QApplication::translate("Clock_and_Reset_model", "N/A", Q_NULLPTR)
        );
        clockNetwork_pinP->clear();
        clockNetwork_pinP->insertItems(0, QStringList()
         << QString()
        );
        labelfpgaref->setText(QApplication::translate("Clock_and_Reset_model", "FPGA reference :", Q_NULLPTR));
        labelclockmodelname_2->setText(QApplication::translate("Clock_and_Reset_model", "Clock Network :", Q_NULLPTR));
        clockNetwork_pinN->clear();
        clockNetwork_pinN->insertItems(0, QStringList()
         << QString()
        );
        labelclockmodelname->setText(QApplication::translate("Clock_and_Reset_model", "Clock Model name :", Q_NULLPTR));
        labelclockmodel_2->setText(QApplication::translate("Clock_and_Reset_model", "Reset Model :", Q_NULLPTR));
        clockMode->clear();
        clockMode->insertItems(0, QStringList()
         << QApplication::translate("Clock_and_Reset_model", "Default", Q_NULLPTR)
         << QApplication::translate("Clock_and_Reset_model", "lvds", Q_NULLPTR)
        );
        pinnlabel->setText(QApplication::translate("Clock_and_Reset_model", "PinN :", Q_NULLPTR));
        clockModelContainer->setHtml(QApplication::translate("Clock_and_Reset_model", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        modelabel_2->setText(QApplication::translate("Clock_and_Reset_model", "Mode :", Q_NULLPTR));
        pinplabel_2->setText(QApplication::translate("Clock_and_Reset_model", "PinP :", Q_NULLPTR));
        pinnlabel_2->setText(QApplication::translate("Clock_and_Reset_model", "PinN :", Q_NULLPTR));
        resetMode->clear();
        resetMode->insertItems(0, QStringList()
         << QApplication::translate("Clock_and_Reset_model", "Default", Q_NULLPTR)
         << QApplication::translate("Clock_and_Reset_model", "lvds", Q_NULLPTR)
        );
        labelclockmodelname_3->setText(QApplication::translate("Clock_and_Reset_model", "Clock Network name:", Q_NULLPTR));
        labelclockmodel->setText(QApplication::translate("Clock_and_Reset_model", "Clock Model :", Q_NULLPTR));
        resetNetwork_type->clear();
        resetNetwork_type->insertItems(0, QStringList()
         << QApplication::translate("Clock_and_Reset_model", "ActiveLow", Q_NULLPTR)
         << QApplication::translate("Clock_and_Reset_model", "ActiveHigh", Q_NULLPTR)
        );
        modelabel_3->setText(QApplication::translate("Clock_and_Reset_model", "Type:", Q_NULLPTR));
        resetNetwork_pinN->clear();
        resetNetwork_pinN->insertItems(0, QStringList()
         << QString()
        );
        okBtn->setText(QApplication::translate("Clock_and_Reset_model", "Ok", Q_NULLPTR));
        clearClockBtn->setText(QApplication::translate("Clock_and_Reset_model", "Clear Clock Model", Q_NULLPTR));
        clearResetBtn->setText(QApplication::translate("Clock_and_Reset_model", "Clear Reset Model", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Clock_and_Reset_model: public Ui_Clock_and_Reset_model {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCK_AND_RESET_MODEL_H
