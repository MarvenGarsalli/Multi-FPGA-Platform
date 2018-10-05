#ifndef FRAME_3_H
#define FRAME_3_H
#include <QFrame>
//#include "clock_and_reset_model.h"
#include "mainframe.h"
#include <interfacebank.h>

namespace Ui {
class Frame_3;
}

class Frame_3 : public QFrame, public MainFrame
{
    Q_OBJECT

public:
    explicit Frame_3(QWidget *parent = 0);
    ~Frame_3();
    QVector<typeDef_unit> build();

Clock_and_Reset_model *clockReset1;
Clock_and_Reset_model *clockReset2;
Clock_and_Reset_model *clockReset3;
private:
    Ui::Frame_3 *ui;

    typeDefReset rst1;
    typeDefClock clk1;

    typeDefReset rst2;
    typeDefClock clk2;

    typeDefReset rst3;
    typeDefClock clk3;

    InterfaceBank *bank1;
    InterfaceBank *bank2;
    InterfaceBank *bank3;
    QAction *configInt1;
    QAction *configInt2;
    QAction *configInt3;

    typeDef_unit auxUnit1;
    typeDef_unit auxUnit2;
    typeDef_unit auxUnit3;
private slots:
    void tapa1(typeDefClock t, typeDefReset res);
    void tapa2(typeDefClock t, typeDefReset res);
    void tapa3(typeDefClock t, typeDefReset res);

    void langa1(QVector<typeDefBank> b);
    void langa2(QVector<typeDefBank> b);
    void langa3(QVector<typeDefBank> b);
};

#endif // FRAME_3_H
