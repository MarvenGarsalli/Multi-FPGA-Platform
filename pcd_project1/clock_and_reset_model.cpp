#include "clock_and_reset_model.h"
#include "ui_clock_and_reset_model.h"

using namespace std;

void Clock_and_Reset_model::replir()
{        QString pin;
          vector<string> v;
          vector<string> tableau;
          string ligne;
          string name="Data/"+ ui->fpgaRef->currentText().toStdString();
          fstream fichier(name+"pkg.txt");
          while(getline(fichier, ligne))
                      {
                          istringstream iss (ligne);
                          for (int n=0; n<5; n++)
                          {
                              string champ;
                              iss >> champ;
                              tableau.push_back(champ);
                          }
                          if (tableau[4]=="HP" && tableau[2]!="NA")
                          {
                              v.push_back(tableau[0]);
                          }
                          tableau.clear();
           }
            for (int i=0 ; i<v.size() ;++i)
          {
               pin=QString::fromStdString(v[i]);
                ui->clockNetwork_pinN->addItem(pin);
                ui->clockNetwork_pinP->addItem(pin);
                ui->resetNetwork_pinN->addItem(pin);
                ui->resetNetwork_pinP->addItem(pin);
           }
}

Clock_and_Reset_model::Clock_and_Reset_model(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::Clock_and_Reset_model)
{
    ui->setupUi(this);
    QString package;
        QStringList list(QDir("Data/" ).entryList());

        for (int i=0 ; i<list.size() ;++i)
      {

               package=list[i];
               package.remove("pkg.txt");
             if(package != "." && package != "..")
                ui->fpgaRef->addItem(package);
       }
}

QString Clock_and_Reset_model::getfpgaRef() {
    return refFPGA;
}

Clock_and_Reset_model::~Clock_and_Reset_model()
{
    delete ui;
}

void Clock_and_Reset_model::on_addclocknetwork_clicked()
{QString ch;
    if(ui->clockModel_name->text() == "" || ui->clockNetwork_name->text() == "")
    {QMessageBox::critical(this,"Error","All field are required!");
    return ;
    }
if(ui->clockModel_name->isEnabled())
  {ui->clockModelContainer->append(" <clockModel name=\""+ui->clockModel_name->text()+"\"/>");
  clockModel.modelName=ui->clockModel_name->text();
  /*for(int i=0;i<clkV_size;i++) //utilisé le cas ou on peut enregistrer plusieurs clkModelName
      if( clockModel.clk[i] == clockModel.modelName )
      {QMessageBox::critical(this,"Error","ClockNetwork name exists");
      return;
      }*/
  refFPGA=ui->fpgaRef->currentText();
  ui->clockModel_name->setEnabled(false);
  }
horloge h={ ui->clockNetwork_name->text(),
           ui->clockMode->currentText(),
           ui->clockNetwork_pinP->currentText(),
           ui->clockNetwork_pinN->currentText()     };
//clkNetwork_It=find(clockModel.clk.begin()->networkName,clockModel.clk.end()->networkName,h.networkName);
int clkV_size=clockModel.clk.size();
for(int i=0;i<clkV_size;i++)
      if( clockModel.clk[i].networkName == h.networkName )
      {QMessageBox::critical(this,"Error","clockNetwork name exists");
      return;
      }

if(ui->clockMode->currentText() == "lvds")
     ch = "\"  lvds=\"true\"";
else
    ch = "\"  lvds=\"false\"";
ui->clockModelContainer->append("   <clockNetwork name=\""+ui->clockNetwork_name->text()+ch+
"  pinP=\""+ui->clockNetwork_pinP->currentText()+"\"  pinN=\""+ui->clockNetwork_pinN->currentText()+"\"/>");

clockModel.clk.push_back(h);
ui->clockMode->setCurrentIndex(0);
ui->clockNetwork_pinN->setCurrentIndex(0);
ui->clockNetwork_pinP->setCurrentIndex(0);
}

void Clock_and_Reset_model::on_addresetnetwork_clicked()
{QString ch;
   if(ui->resetModel_name->text() == "" || ui->resetNetwork_name->text() == "")
    {QMessageBox::critical(this,"Error","All field are required !");
    return ;
    }  

 if(ui->resetModel_name->isEnabled())
  {ui->resetModelContainer->append(" <resetModel name=\""+ui->resetModel_name->text()+"\"/>");
   resetModel.modelName=ui->resetModel_name->text();
   refFPGA=ui->fpgaRef->currentText();
   ui->resetModel_name->setEnabled(false);
  }
 remisea0 h={ ui->resetNetwork_name->text(),
            ui->resetMode->currentText(),
            ui->resetNetwork_type->currentText(),
            ui->resetNetwork_pinP->currentText(),
            ui->resetNetwork_pinN->currentText()     };
 int rstV_size=resetModel.rst.size();
 for(int i=0;i<rstV_size;i++)
       if( resetModel.rst[i].networkName == h.networkName )
       {QMessageBox::critical(this,"Error","resetNetwork name exists");
       return;
       }
 if(ui->clockMode->currentText() == "lvds")
     ch = "\"  lvds=\"true\"";
 else
    ch = "\"  lvds=\"false\"";
    ui->resetModelContainer->append("   <resetNetwork name=\""+ui->resetNetwork_name->text()+"\" type=\""+
    ui->resetNetwork_type->currentText()+ch +"  pinP=\""+
    ui->resetNetwork_pinP->currentText()+"\"  pinN=\""+ui->resetNetwork_pinN->currentText()+"\"/>" );

resetModel.rst.push_back(h);
ui->resetMode->setCurrentIndex(0);
ui->resetNetwork_pinN->setCurrentIndex(0);
ui->resetNetwork_pinP->setCurrentIndex(0);
ui->resetNetwork_type->setCurrentIndex(0);
}

void Clock_and_Reset_model::on_fpgaRef_currentIndexChanged(int index)
{bool ok;
    if(index != 0)
      ok=true;
    else ok=false;
    ui->clockModel_name->setEnabled(ok);
    ui->clockNetwork_name->setEnabled(ok);
    ui->clockModelContainer->setEnabled(ok);
    ui->clockMode->setEnabled(ok);
    ui->clockNetwork_pinN->setEnabled(ok);
    ui->clockNetwork_pinP->setEnabled(ok);
    ui->addclocknetwork->setEnabled(ok);
    ui->resetModel_name->setEnabled(ok);
    ui->resetNetwork_name->setEnabled(ok);
    ui->resetNetwork_pinN->setEnabled(ok);
    ui->resetNetwork_pinP->setEnabled(ok);
    ui->resetModelContainer->setEnabled(ok);
    ui->resetMode->setEnabled(ok);
    ui->resetNetwork_type->setEnabled(ok);
    ui->addresetnetwork->setEnabled(ok);
}

void Clock_and_Reset_model::on_clearClockBtn_clicked()
{
    ui->clockModel_name->clear();
    ui->clockNetwork_name->clear();
    ui->clockModelContainer->clear();
    ui->clockModel_name->setEnabled(true);
    clockModel.clk.clear();
    clockModel.modelName="";
}

void Clock_and_Reset_model::on_clearResetBtn_clicked()
{
    ui->resetModel_name->clear();
    ui->resetNetwork_name->clear();
    ui->resetModelContainer->clear();
    ui->resetModel_name->setEnabled(true);
    resetModel.modelName="";
    resetModel.rst.clear();
}

void Clock_and_Reset_model::on_okBtn_clicked()
{    // @@ la verification des champs
   if(ui->clockModelContainer->toPlainText()=="" || ui->resetModelContainer->toPlainText()=="")
    {QMessageBox::critical(this,"Error","Add clockNetwork and resetNetwork!");
     return ;}
ui->resetModelContainer->append(" </resetModels>");
ui->clockModelContainer->append(" </clockModels>");
this->close();
emit defineClock_Reset(clockModel,resetModel);
emit definedUnit(clockModel,resetModel,refFPGA);
}

QString Clock_and_Reset_model::get_clockContainer()
{
    return ui->clockModelContainer->toPlainText();
}
QString Clock_and_Reset_model::get_resetContainer()
{
    return ui->resetModelContainer->toPlainText();
}






/*QTextCursor sel =ui->clockModelContainer->textCursor();
if( !sel.hasSelection())
   {QMessageBox::critical(this,"Error","Select clockModel and resetModel !");
    return ;
    }
QMessageBox::critical(this,"Error",sel.selectedText());*/

void Clock_and_Reset_model::on_fpgaRef_currentTextChanged(const QString &arg1)
{
    if(ui->fpgaRef->currentIndex()>0)
        replir();
    else
    {ui->clockNetwork_pinN->clear();
        ui->clockNetwork_pinP->clear();
        ui->resetNetwork_pinN->clear();
        ui->resetNetwork_pinP->clear();
    }
}
