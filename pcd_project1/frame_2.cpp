#include "frame_2.h"
#include "ui_frame_2.h"

Frame_2::Frame_2(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_2)
{   ui->setupUi(this);

    QAction *config1=new QAction("Configure UNIT...",ui->unit2A);
    configInt1 = new QAction("condfigure interface",ui->unit2A);
    QAction *config2=new QAction("Configure UNIT...",ui->unit2B);
    configInt2= new QAction("condfigure interface",ui->unit2B);
    configInt1->setEnabled(false);
    configInt2->setEnabled(false);
    ui->unit2A->addAction(config1);
    ui->unit2A->addAction(configInt1);
    ui->unit2B->addAction(config2);
    ui->unit2B->addAction(configInt2);

   clockReset1 = new Clock_and_Reset_model();
   clockReset2 = new Clock_and_Reset_model();
   ui->unit2A->setContextMenuPolicy(Qt::ActionsContextMenu);
   ui->unit2B->setContextMenuPolicy(Qt::ActionsContextMenu);

   QWidget::connect(config1,SIGNAL(triggered(bool)),clockReset1,SLOT(show()));
   QWidget::connect(clockReset1,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa1(typeDefClock,typeDefReset)));
   QWidget::connect(config2,SIGNAL(triggered(bool)),clockReset2,SLOT(show()));
   QWidget::connect(clockReset2,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa2(typeDefClock,typeDefReset)));

   bank1 = new InterfaceBank();
   QWidget::connect(configInt1,SIGNAL(triggered(bool)),bank1,SLOT(show()));
   QWidget::connect(bank1,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa1(QVector<typeDefBank>)));
   bank2 = new InterfaceBank();
   QWidget::connect(configInt2,SIGNAL(triggered(bool)),bank2,SLOT(show()));
   QWidget::connect(bank2,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa2(QVector<typeDefBank>)));

auxUnit1.unitName="2UNIT_A";
auxUnit2.unitName="2UNIT_B";
}

void Frame_2::tapa1(typeDefClock t,typeDefReset res)
{auxUnit1.FPGA_ref = clockReset1->getfpgaRef();
    auxUnit1.clk=t;
    auxUnit1.reset = res;
    bank1->setBank("Data/"+clockReset1->getfpgaRef().toStdString()+"pkg.txt");
    configInt1->setEnabled(true);
}
void Frame_2::tapa2(typeDefClock t,typeDefReset res)
{    auxUnit2.FPGA_ref = clockReset2->getfpgaRef();
    auxUnit2.clk = t;
    auxUnit2.reset = res;
    bank2->setBank("Data/"+clockReset2->getfpgaRef().toStdString()+"pkg.txt");
    configInt2->setEnabled(true);
}

void Frame_2::langa1(QVector<typeDefBank> b)
{auxUnit1.unitBanks = b;
}
void Frame_2::langa2(QVector<typeDefBank> b)
{auxUnit2.unitBanks = b;
}

Frame_2::~Frame_2()
{
    delete ui;
}

QVector<typeDef_unit> Frame_2::build()
{tapalanga.clear();
    tapalanga.push_back(auxUnit1); //variable hérité
    tapalanga.push_back(auxUnit2);
      return tapalanga;
}
