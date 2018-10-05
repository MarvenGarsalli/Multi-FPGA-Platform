#include "frame_1.h"
#include "ui_frame_1.h"
#include "interfacebank.h"

Frame_1::Frame_1(QWidget *parent) :
    QFrame(parent),  ui(new Ui::Frame_1)
{   ui->setupUi(this);

    QAction *config=new QAction("Configure UNIT...",ui->unit1A);
    configInt = new QAction("condfigure interface",ui->unit1A);
    configInt->setEnabled(false);
    ui->unit1A->addAction(config);
    ui->unit1A->addAction(configInt);

   clockReset = new Clock_and_Reset_model();
   ui->unit1A->setContextMenuPolicy(Qt::ActionsContextMenu);
   QWidget::connect(config,SIGNAL(triggered(bool)),clockReset,SLOT(show()));
   QWidget::connect(clockReset,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa(typeDefClock,typeDefReset)));

   bank = new InterfaceBank();
   QWidget::connect(configInt,SIGNAL(triggered(bool)),bank,SLOT(show()));
   QWidget::connect(bank,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa(QVector<typeDefBank>)));

  auxUnit.unitName = "1UNIT_A";
}

void Frame_1::tapa(typeDefClock t,typeDefReset res)
{auxUnit.FPGA_ref = clockReset->getfpgaRef();
    auxUnit.clk=t;
    auxUnit.reset = res;
 bank->setBank("Data/"+clockReset->getfpgaRef().toStdString()+"pkg.txt");
configInt->setEnabled(true);
}

void Frame_1::langa(QVector<typeDefBank> b)
{auxUnit.unitBanks.clear();
 auxUnit.unitBanks = b;
//@Delete@  QMessageBox::critical(this,"Error",b.last().name);
}

Frame_1::~Frame_1()
{
    delete ui;
}

QVector<typeDef_unit> Frame_1::build()
{tapalanga.clear();
tapalanga.push_back(auxUnit);
    return tapalanga;
}
