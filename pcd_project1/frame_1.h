#ifndef FRAME_1_H
#define FRAME_1_H
//#include "clock_and_reset_model.h"
#include <QFrame>
#include <QMessageBox>
#include "mainframe.h"

namespace Ui {
class Frame_1;
}

class Frame_1 : public QFrame, public MainFrame
{
    Q_OBJECT
public:
    explicit Frame_1(QWidget *parent = 0);
    ~Frame_1();
 QVector<typeDef_unit> build();
 Clock_and_Reset_model *clockReset;
private:
    Ui::Frame_1 *ui;
//Clock_and_Reset_model *clockReset;
    typeDef_unit auxUnit;

InterfaceBank *bank;
    QAction *configInt;

private slots:
    void tapa(typeDefClock t, typeDefReset res);
    void langa(QVector<typeDefBank> b);
};
#endif // FRAME_1_H
