#include "frame_4.h"
#include "ui_frame_4.h"

Frame_4::Frame_4(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Frame_4)
{   ui->setupUi(this);

    QAction *config1=new QAction("Configure UNIT...",ui->unit4A);
    configInt1 = new QAction("condfigure interface",ui->unit4A);
    QAction *config2=new QAction("Configure UNIT...",ui->unit4B);
    configInt2= new QAction("condfigure interface",ui->unit4B);
    QAction *config3=new QAction("Configure UNIT...",ui->unit4C);
    configInt3= new QAction("condfigure interface",ui->unit4C);
    QAction *config4=new QAction("Configure UNIT...",ui->unit4D);
    configInt4= new QAction("condfigure interface",ui->unit4D);
    configInt1->setEnabled(false);
    configInt2->setEnabled(false);
    configInt3->setEnabled(false);
    configInt4->setEnabled(false);
    ui->unit4A->addAction(config1);
    ui->unit4A->addAction(configInt1);
    ui->unit4B->addAction(config2);
    ui->unit4B->addAction(configInt2);
    ui->unit4C->addAction(config3);
    ui->unit4C->addAction(configInt3);
    ui->unit4D->addAction(config4);
    ui->unit4D->addAction(configInt4);

    clockReset1 = new Clock_and_Reset_model();
    clockReset2 = new Clock_and_Reset_model();
    clockReset3 = new Clock_and_Reset_model();
    clockReset4 = new Clock_and_Reset_model();
    ui->unit4A->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->unit4B->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->unit4C->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->unit4D->setContextMenuPolicy(Qt::ActionsContextMenu);

    QWidget::connect(config1,SIGNAL(triggered(bool)),clockReset1,SLOT(show()));
    QWidget::connect(clockReset1,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa1(typeDefClock,typeDefReset)));
    QWidget::connect(config2,SIGNAL(triggered(bool)),clockReset2,SLOT(show()));
    QWidget::connect(clockReset2,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa2(typeDefClock,typeDefReset)));
    QWidget::connect(config3,SIGNAL(triggered(bool)),clockReset3,SLOT(show()));
    QWidget::connect(clockReset3,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa3(typeDefClock,typeDefReset)));
    QWidget::connect(config4,SIGNAL(triggered(bool)),clockReset4,SLOT(show()));
    QWidget::connect(clockReset4,SIGNAL(defineClock_Reset(typeDefClock,typeDefReset)),this,SLOT(tapa4(typeDefClock,typeDefReset)));

    bank1 = new InterfaceBank();
    QWidget::connect(configInt1,SIGNAL(triggered(bool)),bank1,SLOT(show()));
    QWidget::connect(bank1,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa1(QVector<typeDefBank>)));
    bank2 = new InterfaceBank();
    QWidget::connect(configInt2,SIGNAL(triggered(bool)),bank2,SLOT(show()));
    QWidget::connect(bank2,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa2(QVector<typeDefBank>)));
    bank3 = new InterfaceBank();
    QWidget::connect(configInt3,SIGNAL(triggered(bool)),bank3,SLOT(show()));
    QWidget::connect(bank3,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa3(QVector<typeDefBank>)));
    bank4 = new InterfaceBank();
    QWidget::connect(configInt4,SIGNAL(triggered(bool)),bank4,SLOT(show()));
    QWidget::connect(bank4,SIGNAL(bankSignal(QVector<typeDefBank>)),this,SLOT(langa4(QVector<typeDefBank>)));

    auxUnit1.unitName="4UNIT_A";
    auxUnit2.unitName="4UNIT_B";
    auxUnit3.unitName="4UNIT_C";
    auxUnit4.unitName="4UNIT_D";
}

void Frame_4::tapa1(typeDefClock t,typeDefReset res)
{auxUnit1.FPGA_ref = clockReset1->getfpgaRef();
    auxUnit1.clk=t;
    auxUnit1.reset = res;
    bank1->setBank("Data/"+clockReset1->getfpgaRef().toStdString()+"pkg.txt");
    configInt1->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error 1",res.modelName);
}
void Frame_4::tapa2(typeDefClock t,typeDefReset res)
{auxUnit2.FPGA_ref = clockReset2->getfpgaRef();
    auxUnit2.clk = t;
    auxUnit2.reset = res;
    bank2->setBank("Data/"+clockReset2->getfpgaRef().toStdString()+"pkg.txt");
    configInt2->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error RES2",res.modelName);
}

void Frame_4::tapa3(typeDefClock t,typeDefReset res)
{  auxUnit3.FPGA_ref = clockReset3->getfpgaRef();
    auxUnit3.clk = t;
    auxUnit3.reset = res;
    bank3->setBank("Data/"+clockReset3->getfpgaRef().toStdString()+"pkg.txt");
    configInt3->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error RES2",res.modelName);
}
void Frame_4::tapa4(typeDefClock t,typeDefReset res)
{auxUnit4.FPGA_ref = clockReset4->getfpgaRef();
    auxUnit4.clk = t;
    auxUnit4.reset = res;
    bank4->setBank("Data/"+clockReset4->getfpgaRef().toStdString()+"pkg.txt");
    configInt4->setEnabled(true);
//@Delete@ QMessageBox::critical(this,"Error RES2",res.modelName);
}

void Frame_4::langa1(QVector<typeDefBank> b)
{auxUnit1.unitBanks = b;
}
void Frame_4::langa2(QVector<typeDefBank> b)
{auxUnit2.unitBanks = b;
}
void Frame_4::langa3(QVector<typeDefBank> b)
{auxUnit3.unitBanks = b;
}
void Frame_4::langa4(QVector<typeDefBank> b)
{auxUnit4.unitBanks = b;
//@Delete@  QMessageBox::critical(this,"ErrortEST IS READY",auxUnit4.unitBanks.first().name);
}

Frame_4::~Frame_4()
{
    delete ui;
}

QVector<typeDef_unit> Frame_4::build()
{tapalanga.clear();

    tapalanga.push_back(auxUnit1);
    tapalanga.push_back(auxUnit2);
    tapalanga.push_back(auxUnit3);
    tapalanga.push_back(auxUnit4);
      return tapalanga;
}
