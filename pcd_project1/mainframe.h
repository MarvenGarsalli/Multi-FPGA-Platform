#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <QVector>
#include "clock_and_reset_model.h"
#include "interfacebank.h"
#include <fstream>
#include <string>
#include <QVector>
#include <list>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include<stdlib.h>
#include<iostream>


typedef struct tst
{ QString unitName;
  QString FPGA_ref;
  typeDefClock clk;
  typeDefReset reset;
  QVector<typeDefBank> unitBanks;
}typeDef_unit;

class MainFrame
{
public:
    MainFrame();
    QVector<typeDef_unit> tapalanga;
};

#endif // MAINFRAME_H
