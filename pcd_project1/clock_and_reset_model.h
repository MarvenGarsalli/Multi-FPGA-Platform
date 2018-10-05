#ifndef CLOCK_AND_RESET_MODEL_H
#define CLOCK_AND_RESET_MODEL_H
#include <QMessageBox>
#include <QFrame>
#include <iostream>
#include <fstream>
#include <string>
#include<QtCore>
#include <fstream>
#include <string>
#include <QVector>
#include <list>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include<stdlib.h>
#include<iostream>

typedef struct clck
{ QString networkName;
  QString mode;
  QString pinP;
  QString pinN;
}horloge;
typedef struct clkM
{  QString modelName;
   QVector<horloge> clk;
}typeDefClock;

typedef struct remisea0
{
  QString networkName;
  QString mode;
  QString type;
  QString pinP;
  QString pinN;
}rset;
typedef struct ret
{  QString modelName;
   QVector<rset> rst;
}typeDefReset;

namespace Ui {
class Clock_and_Reset_model;
}

class Clock_and_Reset_model : public QFrame
{
    Q_OBJECT

public:
    explicit Clock_and_Reset_model(QWidget *parent = 0);
    ~Clock_and_Reset_model();
    QString getfpgaRef();
 bool ok=false;
 typeDefClock clockModel;
 typeDefReset resetModel;
 QString get_clockContainer();
 QString get_resetContainer();
 void replir();
private slots:
    void on_addclocknetwork_clicked();

    void on_addresetnetwork_clicked();

    void on_fpgaRef_currentIndexChanged(int index);

    void on_clearClockBtn_clicked();

    void on_clearResetBtn_clicked();
    void on_okBtn_clicked();
    void on_fpgaRef_currentTextChanged(const QString &arg1);

signals:
    void defineClock_Reset(typeDefClock clockModel,typeDefReset resetModel);
    void definedUnit(typeDefClock c,typeDefReset r,QString s);
private:
    Ui::Clock_and_Reset_model *ui;
    //QVector<horloge>::iterator clkNetwork_It;
    QString refFPGA;
};

#endif // CLOCK_AND_RESET_MODEL_H
