#ifndef FRAME_4_H
#define FRAME_4_H
#include <QFrame>
//#include "clock_and_reset_model.h"
#include "mainframe.h"
#include <interfacebank.h>
#include <QMessageBox>

namespace Ui {
class Frame_4;
}

class Frame_4 : public QFrame, public MainFrame
{
    Q_OBJECT

public:
    explicit Frame_4(QWidget *parent = 0);
    ~Frame_4();
    QVector<typeDef_unit> build();

Clock_and_Reset_model *clockReset1;
Clock_and_Reset_model *clockReset2;
Clock_and_Reset_model *clockReset3;
 Clock_and_Reset_model *clockReset4;
private:
    Ui::Frame_4 *ui;

    typeDefReset rst1;
    typeDefClock clk1;

    typeDefReset rst2;
    typeDefClock clk2;
    InterfaceBank *bank1;
    InterfaceBank *bank2;

    QAction *configInt1;
    QAction *configInt2;

    typeDefReset rst3;
    typeDefClock clk3;

    typeDefReset rst4;
    typeDefClock clk4;
    InterfaceBank *bank3;
    InterfaceBank *bank4;
    QAction *configInt3;
    QAction *configInt4;

    typeDef_unit auxUnit1;
    typeDef_unit auxUnit2;
    typeDef_unit auxUnit3;
    typeDef_unit auxUnit4;
private slots:
    void tapa1(typeDefClock t, typeDefReset res);
    void tapa2(typeDefClock t, typeDefReset res);
    void tapa3(typeDefClock t, typeDefReset res);
    void tapa4(typeDefClock t, typeDefReset res);

    void langa1(QVector<typeDefBank> b);
    void langa2(QVector<typeDefBank> b);
    void langa3(QVector<typeDefBank> b);
    void langa4(QVector<typeDefBank> b);
};

#endif // FRAME_4_H
