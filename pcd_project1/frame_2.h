#ifndef FRAME_2_H
#define FRAME_2_H
#include <QFrame>
//#include "clock_and_reset_model.h"
#include "mainframe.h"
#include <interfacebank.h>

namespace Ui {
class Frame_2;
}

class Frame_2 : public QFrame, public MainFrame
{
    Q_OBJECT

public:
    explicit Frame_2(QWidget *parent = 0);
    ~Frame_2();
    QVector<typeDef_unit> build();

Clock_and_Reset_model *clockReset1;
Clock_and_Reset_model *clockReset2;
private:
    Ui::Frame_2 *ui;

    typeDefReset rst1;
    typeDefClock clk1;

    typeDefReset rst2;
    typeDefClock clk2;
    InterfaceBank *bank1;
    InterfaceBank *bank2;
    QAction *configInt1;
    QAction *configInt2;

   typeDef_unit auxUnit1;
   typeDef_unit auxUnit2;
private slots:
    void tapa1(typeDefClock t, typeDefReset res);
    void tapa2(typeDefClock t, typeDefReset res);

    void langa1(QVector<typeDefBank> b);
    void langa2(QVector<typeDefBank> b);
};

#endif // FRAME_2_H
