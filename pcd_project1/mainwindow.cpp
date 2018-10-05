#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtXml/QtXml>

using namespace std;
Interface::Interface(QApplication *a, QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{ ui->setupUi(this);
    setFixedSize(1020,700);
    setWindowTitle(tr("FPGA Pro"));
ui->confgInfo->setVisible(false);  ui->treeW_Info->setVisible(false);   ui->frameLbl->setVisible(false);
    for(int i=0;i<7;i++)
     hbox[i] = NULL;//pOUR EVITER UNE EXCEPTION INITIAL
for(int i=0;i<7;i++)
  {frame1[i] = NULL;
    frame2[i] = NULL;
    frame3[i] = NULL;
    frame4[i] = NULL;
   }
nbFrame1 = 0;
nbFrame2 = 0;
nbFrame3 = 0;
nbFrame4 = 0;
     ui->tabWidget->setVisible(false);
QWidget::connect(ui->nbMultiFPGA,SIGNAL(valueChanged(int)),this,SLOT(nbFPGA_valueChanged(int)));
    //m_boutonDialogue->adjustSize();
autreTab=true;
nbmulti=0;
    multiFPGA = new QComboBox(this);
    multiFPGA->setGeometry(3,160,160,25);
    multiFPGA->addItem("UnoFPGA");
    multiFPGA->addItem("DuoFPGA");
    multiFPGA->addItem("TriFPGA");
    multiFPGA->addItem("QuadFPGA");
    multiFPGA->setEnabled(false);
 QObject::connect(multiFPGA,SIGNAL(activated(int)),this,SLOT(showFrame(int)));
 QObject::connect(ui->addMultiFPGA,SIGNAL(clicked()),this,SLOT(ouvrirUnitVerify()));
    createFrames();
//***** Créer le menu ******
     createMenus();
// **** Initialisation du fichier output



}

void Interface::createMenus()
{
     fileMenu = menuBar()->addMenu("&File");
     newAct = new QAction("&New", this);
     newAct->setIcon(QIcon("../pcd_project1/images/new.png"));
       fileMenu->addAction(newAct);
 QWidget::connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));
     openAct = new QAction("&Open", this);
     openAct->setIcon(QIcon("../pcd_project1/images/open.png"));
        fileMenu->addAction(openAct);
 QWidget::connect(openAct, SIGNAL(triggered()), this, SLOT(openFile()));
       fileMenu->addSeparator();
     saveAct = new QAction("&Save", this);
     saveAct->setIcon(QIcon("../pcd_project1/images/save.png"));
       fileMenu->addAction(saveAct);
 QWidget::connect(saveAct, SIGNAL(triggered(bool)), this, SLOT(saveFile()));
     saveActas = new QAction(QIcon("../pcd_project1/images/save as.png"),"Save as", this);
       fileMenu->addAction(saveActas);
 QWidget::connect(saveActas, SIGNAL(triggered(bool)), this, SLOT(saveFileas()));
       fileMenu->addSeparator();
    exitAct = new QAction(QIcon("../pcd_project1/images/quit.png"),tr("&Exit"), this);
      fileMenu->addAction(exitAct);
 QWidget::connect(exitAct, SIGNAL(triggered(bool)), this, SLOT(close()));
     refresh = menuBar()->addMenu("&Refresh");
    delConfig = new QAction(QIcon("../pcd_project1/images/refresh.png"),"Delete Configuration", this);
      refresh->addAction(delConfig);//@*** refresh is ready ***@
 QWidget::connect(delConfig, SIGNAL(triggered(bool)),this, SLOT(active()));
      //refresh->addAction("Other option");
     build = menuBar()->addMenu("&Build");
     buildXML = new QAction(QIcon("../pcd_project1/images/build.png"),"&Generate descriptive XML file",this);
     buildXML->setDisabled(true);
        build->addAction(buildXML);
 QWidget::connect(buildXML, SIGNAL(triggered(bool)), this, SLOT(buildFile()));
        buildDetail= new QAction(QIcon("../pcd_project1/images/ok.png"),"Generate &detailed XML file");
           build->addAction(buildDetail);
QWidget::connect(buildDetail, SIGNAL(triggered(bool)), this, SLOT(generateDetailedFile()));
     option = menuBar()->addMenu("&Options");
     help = menuBar()->addMenu("&Help");
     useManual = new QAction("Manual of &use", this);
         help->addAction(useManual);
 QWidget::connect(useManual, SIGNAL(triggered(bool)), this, SLOT(use()));
        owner=new QAction("About FPGATool");
        help->addAction(owner);
QWidget::connect(owner, SIGNAL(triggered(bool)), this, SLOT(Owner()));
        help->addAction("Read documentation");
    //**** create TOOL BAR ****/
      toolbar = new QToolBar("ToolBar",this);
      toolbar->setGeometry(1,22,this->width(),27);
      toolbar->move(1,22);
      toolbar->addAction(newAct);
      toolbar->addSeparator();
      toolbar->addAction(openAct);
      toolbar->addSeparator();
      toolbar->addAction(saveAct);
      toolbar->addSeparator();
      toolbar->addAction(saveActas);
      toolbar->addSeparator();
      toolbar->addAction(delConfig);
      toolbar->addSeparator();
      toolbar->addAction(buildDetail);
      toolbar->addSeparator();
      toolbar->addAction(exitAct);
      toolbar->setPalette(QPalette(QColor("light cyan")));
      toolbar->setMovable(false);//alHamdou lelleh
}
void Interface::active()
{   ui->tabWidget->setVisible(false);
    buildXML->setEnabled(false);
    for(int j=0;j<nbmulti;j++)
      if(hbox[j] != NULL)
        { hbox[j]->removeWidget(hbox[j]->widget());delete(hbox[j]);
         }
   for(int i=0;i<7;i++)
    {delete(frame1[i]);
    delete(frame2[i]);
    delete(frame3[i]);
    delete(frame4[i]);
       frame1[i] = NULL;
       frame2[i] = NULL;
       frame3[i] = NULL;
       frame4[i] = NULL;
   }
//@@ NO LONGER UTIL createFrames();
    for(int i=ui->tabWidget->count()+1;i<=7;i++)
        switch(i)
          { //case 1:ui->tabWidget->addTab(ui->tab_1,"Model one");break;
            case 2:ui->tabWidget->addTab(ui->tab_2,"Model two");break;
            case 3:ui->tabWidget->addTab(ui->tab_3,"Model three");break;
            case 4:ui->tabWidget->addTab(ui->tab_4,"Model four");break;
            case 5:ui->tabWidget->addTab(ui->tab_5,"Model five");break;
            case 6:ui->tabWidget->addTab(ui->tab_6,"Model six");break;
            case 7:ui->tabWidget->addTab(ui->tab_7,"Model seven");break;
          }
    ui->nbMultiFPGA->setEnabled(true);
    ui->nbMultiFPGA->setValue(0);
    nbmulti = 0;
    nbFrame1 = 0;
    nbFrame2 = 0;
    nbFrame3 = 0;
    nbFrame4 = 0;
}

void Interface::disable()
 { //ui->treeW_Info->setVisible(true);
 /*ui->treeW_Info->setHeaderLabel(whatWeNeed[i].unitName);
            str.push_back("FPGA_ref: "+whatWeNeed[i].FPGA_ref);
            str.push_back("clockModelName: "+whatWeNeed[i].clk.modelName);
            str.push_back("resetModelName: "+whatWeNeed[i].reset.modelName);
            length2=whatWeNeed[i].unitBanks.size();
            for(int j=0;j<length2;j++)
                str.push_back("InterfaceName: "+whatWeNeed[i].unitBanks[j].name);
            QTreeWidgetItem *t1=new QTreeWidgetItem(str);
            ui->treeW_Info->addTopLevelItem(t1);*/
    if(ui->nbMultiFPGA->value() == nbmulti)
     { buildXML->setEnabled(true);
       multiFPGA->setEnabled(false);
     }
    /*int j=0;
    for(int i=0;i<nbmulti;i++)
      {j=0;
        while(j<whatWeNeed[i].size() && !whatWeNeed[i].at(j).FPGA_ref.isEmpty() && whatWeNeed[i].at(j).FPGA_ref!="N/A")
         {
            j++;
          }
     if(j != whatWeNeed[i].size())
         break;
      }
    if(j==whatWeNeed[nbmulti-1].size())
        buildXML->setEnabled(true);*/
}
void Interface::deleteConfig()
{  active();
}

void Interface::newFile()
{/*whatWeNeed=frame4->build();
  for(int i=0;i<whatWeNeed.size();i++)
      QMessageBox::critical(this,"Error",whatWeNeed.at(i).FPGA_ref);
 QString fichPath=QFileDialog::getOpenFileName(this,"Choose file",QString(),"XML(*.xml)");
*/}

void Interface::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this,"choose file","","XML(*.xml *.arch)");
    /* @@@ Ici le traitement lecture du fichier et remplir les champs  @@@@ */




}
void Interface::saveFile()
{
    QString fileName = QFileDialog::getSaveFileName(this);
}

void Interface::saveFileas()
{
    QString fileName = QFileDialog::getSaveFileName(this,"Save file","","XML(*.xml)");
    /* @@@ work to save xml file @@@ */
}

    //**************** @@@@  Generate XML file  @@@@ *****************/
void Interface::buildFile()
{   int f1=0;
    int f2=0;
    int f3=0;
    int f4=0;
int i=0;
for(int i=0;i<7;i++)
 whatWeNeed[i].clear();

    while ( i<nbmulti )   //Can be del***
    {while( frame1[f1] != NULL)
       {
        whatWeNeed[i]=frame1[f1]->build();
        f1++; i++;
        }
     while( frame2[f2] != NULL)
        {
         whatWeNeed[i]=frame2[f2]->build();
         f2++; i++;
         }
     while( frame3[f3] != NULL)
        {
         whatWeNeed[i]=frame3[f3]->build();  f3++; i++;
         }
     while( frame4[f4] != NULL)
         {
         whatWeNeed[i]=frame4[f4]->build();  f4++; i++;
          }
    }
    for(int i=0;i<nbmulti;i++)
        for(int j=0;j<whatWeNeed[i].size();j++)
         if(whatWeNeed[i].isEmpty() || whatWeNeed[i].at(j).FPGA_ref =="" || whatWeNeed[i].at(j).clk.modelName=="" || whatWeNeed[i].at(j).reset.modelName=="")
           {QMessageBox::critical(this,"Error","Empty required fields");
             return;}
    // @@@@@@@@ Generate xml file @@
 //******* FILE NAME *********
 bool ok;
 fileName=QInputDialog::getText(this,"Descriptive file's name","Type a name for the XML file",QLineEdit::Normal,"config.xml",&ok);
 if(!ok || fileName.isEmpty())  // WHEN USER DOESN'T SPECIFY A NAME
     fileName="config.xml";
 QFile* forWrite=new QFile("output/"+fileName);
 QDomDocument *dom = new QDomDocument("version=\"1.0\"?");
 QDomElement node1,node2,node3,node4;
   /*if(!dom->setContent(forWrite))
      {forWrite->close();
       QMessageBox::warning(this,"Access denied","Error when opening, verify file's name!");
       return;
      }*/
    QString lvds;
    QDomElement doc = dom->documentElement();
    QDomElement root = dom->createElement("hardware");
    root.setAttribute("xmlns:xi","http://www.w3.org/2001/XInclude");
    node1= dom->createElement("version");
    node1.setAttribute("major",1);  node1.setAttribute("minor",0);  node1.setAttribute("revision",0);
    root.appendChild(node1);
    node1= dom->createElement("xi:include");
    node1.setAttribute("href","NO_cables.php");
    node2=dom->createElement("xi:fallback");
    node1.appendChild(node2);
    root.appendChild(node1);
    node1 = dom->createElement("vendor");
    node1.setAttribute("name","FPGA pro");
    root.appendChild(node1);

// ################################################ For clock
    node1= dom->createElement("clockModels");
   QVector<QString> clk_ModelName;  //For eatch time the new variable is active

    for(int i=0;i<nbmulti;i++)
      for(int j=0;j<whatWeNeed[i].size();j++)
        if( !exist(&clk_ModelName, whatWeNeed[i].at(j).clk.modelName) )
         {clk_ModelName.push_back(whatWeNeed[i].at(j).clk.modelName);
          node2 = dom->createElement("clockModel");
          node2.setAttribute("name",whatWeNeed[i].at(j).clk.modelName);
          for(int c=0;c<whatWeNeed[i].at(j).clk.clk.size();c++)
          { node3=dom->createElement("clockNetwork");
            lvds= (whatWeNeed[i].at(j).clk.clk.at(c).mode=="lvds") ? "true":"false";
            node3.setAttribute("lvds",lvds);
            node3.setAttribute("name",whatWeNeed[i].at(j).clk.clk.at(c).networkName);
            if(!whatWeNeed[i].at(j).clk.clk.at(c).pinP.isEmpty())
              node3.setAttribute("pinP",whatWeNeed[i].at(j).clk.clk.at(c).pinP);
            if(!whatWeNeed[i].at(j).clk.clk.at(c).pinN.isEmpty())
               node3.setAttribute("pinN",whatWeNeed[i].at(j).clk.clk.at(c).pinN);
            node2.appendChild(node3);
           }
          node1.appendChild(node2);
         }
    if(node1.hasChildNodes())
      root.appendChild(node1);

  //############################################ For reset
QVector<QString> rst_ModelName;
    node1= dom->createElement("resetModels");
    for(int i=0;i<nbmulti;i++)
     for(int j=0;j<whatWeNeed[i].size();j++)
       if( !exist(&rst_ModelName, whatWeNeed[i].at(j).clk.modelName) )
        {rst_ModelName.push_back(whatWeNeed[i].at(j).clk.modelName); node2 = dom->createElement("resetModel");
          node2.setAttribute("name",whatWeNeed[i].at(j).reset.modelName);
          for(int c=0;c<whatWeNeed[i].at(j).reset.rst.size();c++)
          { node3=dom->createElement("resetNetwork");
            node3.setAttribute("name",whatWeNeed[i].at(j).reset.rst.at(c).networkName);
            node3.setAttribute("name",whatWeNeed[i].at(j).reset.rst.at(c).type);
            lvds= (whatWeNeed[i].at(j).reset.rst.at(c).mode=="lvds") ? "true":"false";
            node3.setAttribute("lvds",lvds);
            if(!whatWeNeed[i].at(j).clk.clk.at(c).pinP.isEmpty())
               node3.setAttribute("pinP",whatWeNeed[i].at(j).reset.rst.at(c).pinP);
            if(!whatWeNeed[i].at(j).clk.clk.at(c).pinN.isEmpty())
               node3.setAttribute("pinN",whatWeNeed[i].at(j).reset.rst.at(c).pinN);
            node2.appendChild(node3);
           }
          node1.appendChild(node2);
         }
    if(node1.hasChildNodes())
      root.appendChild(node1);

 //############################################ For interfaces
    node1= dom->createElement("interfaces");
    for(int i=0;i<nbmulti;i++)
      for(int j=0;j<whatWeNeed[i].size();j++)
        { //node2 = dom->createElement("interface");
         for(int k=0;k<whatWeNeed[i].at(j).unitBanks.size();k++)
          if(whatWeNeed[i].at(j).unitBanks.at(k).name != "")
          { node2 = dom->createElement("interface"); QMessageBox::information(this,"Success",QString::number(whatWeNeed[i].at(j).unitBanks.size()));
            node2.setAttribute("name",whatWeNeed[i].at(j).unitBanks.at(k).name);
            node2.setAttribute("nbBank",whatWeNeed[i].at(j).unitBanks.at(k).nbBank);
            for(int c=0;c<whatWeNeed[i].at(j).unitBanks.at(k).numBank.size();c++)
               if(whatWeNeed[i].at(j).unitBanks.at(k).numBank.at(c) != "N/A")
                { node3 = dom->createElement("interfaceBank");
                 node3.setAttribute("bank",whatWeNeed[i].at(j).unitBanks.at(k).numBank.at(c));
                 node2.appendChild(node3);
                }
          node1.appendChild(node2);
          }
       }
     if(node1.hasChildNodes())
       root.appendChild(node1);
              node1 = dom->createElement("");
              root.appendChild(node1);

      node1 = dom->createElement("units");
  /*int nbUnit=0;
      for(int i=0;i<nbmulti;i++)
       for(int j=0;j<whatWeNeed[i].size();j++)
          nbUnit++;//Calcul the number of units
  QMessageBox::information(this,"number of unit",QString::number(nbUnit));*/
 //############################ For units
  for(int i=0;i<nbmulti;i++)
    for(int j=0;j<whatWeNeed[i].size();j++)
    {node2 = dom->createElement("unit");
     node2.setAttribute("name",whatWeNeed[i].at(j).unitName);
         {node3 = dom->createElement("fpgaRef");
          node3.setAttribute("name",whatWeNeed[i].at(j).FPGA_ref);
        node2.appendChild(node3);
          node3 = dom->createElement("clockRef");
          node3.setAttribute("name",whatWeNeed[i].at(j).clk.modelName);
        node2.appendChild(node3);
          node3 = dom->createElement("resetRef");
          node3.setAttribute("name",whatWeNeed[i].at(j).reset.modelName);
        node2.appendChild(node3);
        if(!whatWeNeed[i].at(j).unitBanks.isEmpty())
         { node3=dom->createElement("interfaces");
          for(int c=0;c<whatWeNeed[i].at(j).unitBanks.size();c++)
             {node4 = dom->createElement("interface");
              node4.setAttribute("name",whatWeNeed[i].at(j).unitBanks.at(c).name);
              node3.appendChild(node4);
              }
          node2.appendChild(node3);
          }
       }
     node1.appendChild(node2);
     }
  root.appendChild(node1);
 //############################ For modules
 QString t[MaxFPGA]={"A","B","C","D","E","F","J"};
  int p=0,pos=0;
  node1 = dom->createElement("modules");
  for(int i=0;i<nbmulti;i++)
  {  node2 = dom->createElement("module");
     node2.setAttribute("name","MODULE_" + t[p]); p++;
     node3=dom->createElement("instances");
     for(int j=0;j<whatWeNeed[i].size();j++)
       {node4=dom->createElement("instance");
        node4.setAttribute("name","U"+  t[pos]);pos++;
        node4.setAttribute("moduleRef",whatWeNeed[i].at(j).unitName);
        node3.appendChild(node4);
       }
     node2.appendChild(node3);
     node1.appendChild(node2);
  }
root.appendChild(node1);

    dom->appendChild(root);

    if(forWrite->open(QIODevice::WriteOnly))
    {
    QString textForWrite = dom->toString();
    QTextStream stream (forWrite);
    stream<< textForWrite;
    forWrite->close();
     QMessageBox::information(this,"Success","Descriptive file generated successfully"); //@@ SUCCESS
    active();
    }
     else
         QMessageBox::critical(this,"Error","file does not exist");
}


void Interface::use()
{
    //@ open html file in witch we explain how to use this tool via images
}

/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
QString s=QString::number(longTab);*/
void Interface::ouvrirUnitVerify()
{int longTab= ui->nbMultiFPGA->value();
      if(ui->nbMultiFPGA->isEnabled())
        {ui->nbMultiFPGA->setEnabled(false);
        for(int i=6;i>=longTab;i--)
            ui->tabWidget->removeTab(i);
        ui->tabWidget->setVisible(true);
        for(int i=0;i<longTab;i++)
          {hbox[i] = new QHBoxLayout();
           hbox[i]->setAlignment(Qt::AlignCenter);
          }
        }
//@@@ Verify the number of multiFPGA choosed!!
  if(nbmulti < longTab )
     {
      ouvrirUnit(nbmulti);
      nbmulti++;
     }
  else
      multiFPGA->setEnabled(false);

    /*ui->confgInfo->setVisible(true);
    ui->confgInfo->setText("MultiFPGA's number: "+ui->nbMultiFPGA->text());
    QLabel lab("<strong>MotherBoard</strong> contains: ");  lab.setFont(QFont("CenturySchoolBook L",14,-1,true));
    ui->confgInfo->append(lab.text());    ui->confgInfo->append(ui->nbMultiFPGA->text()+" "+multiFPGA->currentText());*/
}

void Interface::ouvrirUnit(int pos)
{
   int index=multiFPGA->currentIndex();
   if (index == 0)
    {frame1[nbFrame1] = new Frame_1;
     frame1[nbFrame1]->move(370,100);
QObject::connect(frame1[nbFrame1]->clockReset,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
       hbox[pos]->addWidget(frame1[nbFrame1]);
       nbFrame1++;
    //@@@ QMessageBox::critical(this,QString::number(nbFrame1-1),"frame1");
    }
    else if(index == 1)
     { frame2[nbFrame2] = new Frame_2;
       frame2[nbFrame2]->move(300,100);
  //@@@ QMessageBox::critical(this,QString::number(nbFrame2),"frame2");
QObject::connect(frame2[nbFrame2]->clockReset1,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame2[nbFrame2]->clockReset2,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
      hbox[pos]->addWidget(frame2[nbFrame2]);
      nbFrame2++;
/*QMessageBox::critical(this,"Error",QString("index = %0").arg(index));*/
     }
    else if(index == 2)
     {frame3[nbFrame3] = new Frame_3;
      frame3[nbFrame3]->move(270,100);
//@@@ QMessageBox::critical(this,QString::number(nbFrame3),"frame3");
QObject::connect(frame3[nbFrame3]->clockReset1,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame3[nbFrame3]->clockReset2,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame3[nbFrame3]->clockReset3,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
      hbox[pos]->addWidget(frame3[nbFrame3]);
      nbFrame3++;
    }
    else
     {frame4[nbFrame4] = new Frame_4;
      frame4[nbFrame4]->move(320,100);

QObject::connect(frame4[nbFrame4]->clockReset1,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[nbFrame4]->clockReset2,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[nbFrame4]->clockReset3,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[nbFrame4]->clockReset4,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
       hbox[pos]->addWidget(frame4[nbFrame4]);
       nbFrame4++;
   }
  ui->tabWidget->widget(pos)->setLayout(hbox[pos]);
  ui->tabWidget->setCurrentIndex(pos);

 }

//QString t[]={"first","second","third","forth","fifth","sixth","seventh"};
void Interface::nbFPGA_valueChanged(int arg1)
{
    if(arg1 != 0)
        multiFPGA->setEnabled(true);
    else
        multiFPGA->setEnabled(false);
}

void Interface::showFrame(int pos)
{ui->frameLbl->setVisible(true);
    switch(pos)
    {
    case 0:ui->frameLbl->setPixmap(QPixmap("../pcd_project1/images/unit1.jpg"));break;
    case 1:ui->frameLbl->setPixmap(QPixmap("../pcd_project1/images/unit2.jpg"));break;
    case 2:ui->frameLbl->setPixmap(QPixmap("../pcd_project1/images/unit3.jpg"));break;
    default:ui->frameLbl->setPixmap(QPixmap("../pcd_project1/images/unit4.jpg"));break;
    }
}

void Interface::generateDetailedFile()
{
   QString filePath = QFileDialog::getOpenFileName(this,
         tr("Choose input file"), "output/", tr("XML Files (*.xml *.arch *.txt )"));
if(!filePath.isEmpty())
   { QProcess *p =new QProcess;
    p->execute("./generator "+ filePath);//the generator must take the file name as input!!
    QMessageBox::information(this,"Success","output/system1.phd is the new detailed file");
    wait();
    p->execute("gedit output/system1.phd");
   }
else
    QMessageBox::critical(this,"Error","Choose input file");
}

void Interface::Owner()
{
   QDialog *a_propos = new QDialog();
   a_propos->setWindowIcon(QIcon("../pcd_project1/images/build.png"));
   QLabel *lbl = new QLabel(a_propos);
   QLabel *lbl2 = new QLabel(a_propos);
   lbl->setPixmap(QPixmap("../pcd_project1/images/bravo.gif"));
   lbl2->setText("<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">FPGA Pro v1.1</span></p><p align=\"center\"><span style=\" font-size:12pt;\">Using Qt 5.8.0</span></p><p align=\"center\"><span style=\" font-size:12pt;\">Created by<em> Garsalli Marwen</em> and his PCD'group</span></p><p align=\"center\"><span style=\" font-size:11pt;\">Contact: <em>marwen.garsalli@ensi-uma.tn</em></span></p><p align=\"center\"><span style=\" font-size:12pt;\"> Copyright © 2017.All rights reserved ®</span></p></body></html>");
   a_propos->setFixedSize(370,180);
   a_propos->show();
}

Interface::~Interface()
{   delete ui;
    //delete m_boutonDialogue;
    delete multiFPGA;
}

void Interface::createFrames() {
    /*frame1[0] = new Frame_1();
    //frame1[0]->move(370,100);
    //frame2[0] = new Frame_2();
    //frame2[0]->move(300,100);;
    frame3[0] = new Frame_3();
    frame3[0]->move(270,100);
    frame4[0] = new Frame_4();
    frame4[0]->move(320,100);
QObject::connect(frame1[0]->clockReset,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
//QObject::connect(frame2[0]->clockReset1,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
//QObject::connect(frame2[0]->clockReset2,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame3[0]->clockReset1,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame3[0]->clockReset2,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame3[0]->clockReset3,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[0]->clockReset1,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[0]->clockReset2,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[0]->clockReset3,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
QObject::connect(frame4[0]->clockReset4,SIGNAL(definedUnit(typeDefClock ,typeDefReset ,QString )),this,SLOT(disable()));
*/
}



/*void Interface::activerFPGA(int arg1)
{   frame1->setVisible(false);
    frame2->setVisible(false);
    frame3->setVisible(false);
    frame4->setVisible(false);
    nbmulti = ui->nbMultiFPGA->value();
    if(arg1 != 0)
        {multiFPGA->setEnabled(true);
        frame1->resize(frame1->size()/arg1);
        frame2->resize(frame2->size()/arg1);
        frame3->resize(frame3->size()/arg1);
        frame4->resize(frame4->size()/arg1);
        }
     else multiFPGA->setEnabled(false);
}*/
/*void Interface::ouvrirUnit(int index)
{ QMessageBox::information(this,"Be carefull","you have choose only "+ui->nbMultiFPGA->text()+" multiFPGA");
  nb++;
  if(nb <= nbmulti)
    {if (index == 0)
     {//this->setCentralWidget(frame1);
      frame1->setVisible(true);
      if(!frame4->isHidden())
        frame1->move(frame1->x(),nb*2*frame1->y());
      else
        frame1->move(frame1->x(),nb*frame1->y());
      if(nb == 1)
      {frame2->setVisible(false);
      frame3->setVisible(false);
      frame4->setVisible(false);
      }
     }
    else if(index == 1)
     {frame2->setVisible(true);
      if(!frame4->isHidden())
          frame2->move(frame2->x(),nb*2*frame2->y());
       else
          frame2->move(frame2->x(),nb*frame2->y());
      if(nb == 1)
      {frame1->setVisible(false);
      frame3->setVisible(false);
      frame4->setVisible(false);
      }
     }
    else if(index == 2)
     {frame3->setVisible(true);
        if(!frame4->isHidden())
           frame3->move(frame3->x(),nb*2*frame3->y());
        else
           frame3->move(frame3->x(),nb*frame3->y());
       if(nb == 1)
      {frame1->setVisible(false);
      frame2->setVisible(false);
      frame4->setVisible(false);
      }
      }
    else
      {frame4->setVisible(true);
        if(!frame4->isHidden() && nb>1)
          frame4->move(frame4->x(),nb*2*frame4->y());
        else
          frame4->move(frame4->x(),nb*frame4->y());
       if(nb == 1)
       {frame1->setVisible(false);
       frame2->setVisible(false);
       frame3->setVisible(false);
       }
     }
  }
  else multiFPGA->setEnabled(false);
}*/

/*if(arg1>longTab) //Aprés +ieurs refresh
        {for(int i=1;i<arg1;i++)
            {QWidget *page=new QWidget;
             hbox[i]->addWidget(frame1);
             page->setLayout(hbox[i]);
             QMessageBox::warning(this,"khsdhk",page->objectName());
                 page->setObjectName("tab_"+i);
             ui->tabWidget->addTab(page,"Your "+t[i]+" Module");
            }
            }

              ui->tabWidget->setTabText(1,"");
            ui->tabWidget->widget(0)->close();
//ui->tabWidget->setTabEnabled(6,false);
***********************/



/*for(int i=0;i<=ui->nbMultiFPGA->value();i++)
  {
      pages[i]=new QWidget;
  }
 pages1=new QWidget;
 pages2=new QWidget;
QVBoxLayout *vbox=new QVBoxLayout;
Frame_1 *frame5=new Frame_1;
frame5->move(250,100);
QLineEdit *lineEdit = new QLineEdit("Entrez votre nom");
QPushButton *bouton1 = new QPushButton("Cliquez ici");
QPushButton *bouton2 = new QPushButton("Ou là...");
QVBoxLayout *vbox1 = new QVBoxLayout;
vbox1->addWidget(lineEdit);
vbox1->addWidget(bouton1);
vbox1->addWidget(bouton2);
vbox1->addWidget(frame1);
//vbox1->setAlignment(Qt::AlignCenter);
pages1->setLayout(vbox1);
//pages2->setLayout(vbox1);
onglets->addTab(pages1,"frame1");
onglets->addTab(pages2,"frame2");
*/

bool exist(QVector<QString> *v, QString s)
{
    for(int i=0;i<v->size();i++)
     if(v->at(i) == s)
         return true;
    return false;
}
