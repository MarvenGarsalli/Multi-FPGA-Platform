#include "frame_3.h"
#include "ui_frame_3.h"

Frame_3::Frame_3(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_3)
{   ui->setupUi(this);

    QAction *config1=new QAction("Configure UNIT...",ui->unit3A);
    configInt1 = new QAction("condfigure interface",ui->unit3A);
    QAction *config2=new QAction("Configure UNIT...",ui->unit3B);
    configInt2= new QAction("condfigure interface",ui->unit3B);
    QAction *config3=new QAction("Configure UNIT...",ui->unit3C);
    configInt3= new QAction("condfigure interface",ui->unit3C);
    configInt1->setEnabled(false);
    configInt2->setEnabled(false);
    configInt3->setEnabled(false);
    ui->unit3A->addAction(config1);
    ui->unit3A->addAction(configInt1);
    ui->unit3B->addAction(config2);
    ui->unit3B->addAction(configInt2);
    ui->unit3C->addAction(config3);
    ui->unit3C->addAction(configInt3);

   clockReset1 = new Clock_and_Reset_model();
   clockReset2 = new Clock_and_Reset_model();
   clockReset3 = new Clock_and_Reset_model();
   ui->unit3A->setContextMenuPolicy(Qt::ActionsContextMenu);
   ui->unit3B->setContextMenuPolicy(Qt::ActionsContextMenu);
   ui->unit3C->setContextMenuPolicy(Qt::ActionsContextMenu);

   QWidget::connect(config1,SIGNAL(triggered(bool)),clockReset1,SLOT(show()));
   QWidget::connect(clockReset1,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa1(typeDefClock,typeDefReset)));
   QWidget::connect(config2,SIGNAL(triggered(bool)),clockReset2,SLOT(show()));
   QWidget::connect(clockReset2,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa2(typeDefClock,typeDefReset)));
   QWidget::connect(config3,SIGNAL(triggered(bool)),clockReset3,SLOT(show()));
   QWidget::connect(clockReset3,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa3(typeDefClock,typeDefReset)));

   bank1 = new InterfaceBank();
   QWidget::connect(configInt1,SIGNAL(triggered(bool)),bank1,SLOT(show()));
   QWidget::connect(bank1,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa1(QVector<typeDefBank>)));
   bank2 = new InterfaceBank();
   QWidget::connect(configInt2,SIGNAL(triggered(bool)),bank2,SLOT(show()));
   QWidget::connect(bank2,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa2(QVector<typeDefBank>)));
   bank3 = new InterfaceBank();
   QWidget::connect(configInt3,SIGNAL(triggered(bool)),bank3,SLOT(show()));
   QWidget::connect(bank3,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa3(QVector<typeDefBank>)));

   auxUnit1.unitName="3UNIT_A";
   auxUnit1.unitName="3UNIT_B";
   auxUnit2.unitName="3UNIT_C";
}

void Frame_3::tapa1(typeDefClock t,typeDefReset res)
{auxUnit1.FPGA_ref = clockReset1->getfpgaRef();
   auxUnit1.clk=t;
   auxUnit1.reset = res;
   bank1->setBank("Data/"+clockReset1->getfpgaRef().toStdString()+"pkg.txt");
   configInt1->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error 1",res.modelName);
}
void Frame_3::tapa2(typeDefClock t,typeDefReset res)
{    auxUnit2.FPGA_ref = clockReset2->getfpgaRef();
    auxUnit2.clk = t;
    auxUnit2.reset = res;
   bank2->setBank("Data/"+clockReset2->getfpgaRef().toStdString()+"pkg.txt");
    configInt2->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error RES2",res.modelName);
}

void Frame_3::tapa3(typeDefClock t,typeDefReset res)
{    auxUnit3.FPGA_ref = clockReset3->getfpgaRef();
    auxUnit3.clk = t;
    auxUnit3.reset = res;
   bank3->setBank("Data/"+clockReset3->getfpgaRef().toStdString()+"pkg.txt");
    configInt3->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error RES2",res.modelName);
}

void Frame_3::langa1(QVector<typeDefBank> b)
{auxUnit1.unitBanks = b;
}
void Frame_3::langa2(QVector<typeDefBank> b)
{auxUnit2.unitBanks = b;
}
void Frame_3::langa3(QVector<typeDefBank> b)
{auxUnit3.unitBanks = b;
}

Frame_3::~Frame_3()
{
    delete ui;
}

QVector<typeDef_unit> Frame_3::build()
{tapalanga.clear();

    tapalanga.push_back(auxUnit1);
    tapalanga.push_back(auxUnit2);
    tapalanga.push_back(auxUnit3);
      return tapalanga;
}

