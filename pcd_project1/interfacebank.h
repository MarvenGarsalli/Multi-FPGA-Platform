#ifndef INTERFACEBANK_H
#define INTERFACEBANK_H
#include <QtXml/QtXml>
#include <QDialog>
#include <QMessageBox>
#include <QVector>
#include <fstream>
#include <string>
#include <QVector>
#include <list>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include<stdlib.h>
#include<iostream>

typedef struct b
{QString name;
  QString  nbBank;
  QVector<QString> numBank;
}typeDefBank;

namespace Ui {
class InterfaceBank;
}

class InterfaceBank : public QDialog
{
    Q_OBJECT

public:
    explicit InterfaceBank(QWidget *parent = 0);
    ~InterfaceBank();
    void setBank(std::string ch );

private:
    Ui::InterfaceBank *ui;
    typeDefBank interfaceBank;
    QVector<typeDefBank> intBankVector;
    int nbBanc;
signals:
    void bankSignal(QVector<typeDefBank> b);
private slots:
    void on_pushButton_3_clicked();
    void on_clearBtn_clicked();
    void on_pushButton_2_clicked();
    void on_nbBank_valueChanged(int arg1);
    void on_addInterBank_clicked();
    void on_InterfaceName_textChanged(const QString &arg1);
    void on_pushButton_clicked();
};

#endif // INTERFACEBANK_H
