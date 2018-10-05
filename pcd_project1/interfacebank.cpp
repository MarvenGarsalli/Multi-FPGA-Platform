#include "interfacebank.h"
#include "ui_interfacebank.h"
using namespace std;
InterfaceBank::InterfaceBank(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfaceBank)
{
    ui->setupUi(this);
    ui->groupBox->setEnabled(false);
    this->setModal(true);
}

InterfaceBank::~InterfaceBank()
{
    delete ui;
}

void InterfaceBank::setBank(string ch)
{ QString pin;
    vector<string> v;
    vector<string> tableau;
    string ligne;
    fstream fichier(ch);
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
         ui->bank->addItem(pin);
    }
}

void InterfaceBank::on_pushButton_2_clicked()
{if(ui->nbBank->isEnabled() == false ) //Donc l' Interfacename est aussi:on a fait déja un add
 {  ui->InterfaceName->clear();
     ui->nbBank->setValue(0);
     ui->InterfaceName->setEnabled(true);
     ui->nbBank->setEnabled(true);
     for (int i=0;i<nbBanc;i++)
      {   //Ou bien on parcour le package et mettre des n° bank non usé là dessus
       interfaceBank.numBank.push_back("N/A");
        QMessageBox::information(this,"Random","Interface is choosed randomly");
      }
    ui->regInterfaces->append("</interface>");
  }
 else if(ui->nbBank->value()>0 && ui->InterfaceName->text() != "")//ou bien ui->groupBox est active
    {QWidget lab;
     int rstV_size=intBankVector.size();   //*********
     for(int i=0;i<rstV_size;i++)
         if(intBankVector[i].name == ui->InterfaceName->text() )
            {QMessageBox::critical(this,"Error","interfaceBanks name exists");
             return;
             }
     interfaceBank.name=ui->InterfaceName->text();
     interfaceBank.nbBank= lab.locale().toString(nbBanc);
     for (int i=0;i<nbBanc;i++)
      {   //Ou bien on parcour le package et mettre des n° bank non usé là dessus
       interfaceBank.numBank.push_back("N/A");
      }
    ui->regInterfaces->append("<interface name="+interfaceBank.name+" nbBank="+interfaceBank.nbBank+">\n</interface>");
    }
   intBankVector.push_back(interfaceBank);
}

void InterfaceBank::on_nbBank_valueChanged(int arg1)
{  QWidget lab;
    nbBanc =ui->nbBank->value();
//@Delete@   QMessageBox::critical(this,"nbBanc",lab.locale().toString(nbBanc));
    if(arg1 != 0 && ui->InterfaceName->text() != "")
      ui->groupBox->setEnabled(true);
    else
      ui->groupBox->setEnabled(false);
}

void InterfaceBank::on_addInterBank_clicked()
{ if(nbBanc > 0)
    {if(ui->InterfaceName->isEnabled())
     { int rstV_size=intBankVector.size();   //*********
       for(int i=0;i<rstV_size;i++)
                if(intBankVector[i].name == ui->InterfaceName->text() )
                {QMessageBox::critical(this,"Error","interfaceBanks name exists");
                return;
                }
       interfaceBank.name=ui->InterfaceName->text();QWidget lab;
       interfaceBank.nbBank= lab.locale().toString(nbBanc);
       ui->regInterfaces->append("<interface name="+interfaceBank.name+" nbBank="+interfaceBank.nbBank+"/>");
       ui->InterfaceName->setEnabled(false);
       ui->nbBank->setEnabled(false);
       //ui->InterfaceName->clear();
     }
      if(ui->bank->currentIndex() != 0)
          interfaceBank.numBank.push_back(ui->bank->currentText());
      else
          interfaceBank.numBank.push_back("N\A");//@@@ ou bien charcher dans le package correspondant un bank
      ui->regInterfaces->append("   <interfaceBank bank= "+interfaceBank.numBank.last()+"/>");
      nbBanc--;
    }
    else
       QMessageBox::critical(this,"Error","No more banks");
  ui->bank->setCurrentIndex(0);
}

void InterfaceBank::on_InterfaceName_textChanged(const QString &arg1)
{
    if(ui->InterfaceName->text() == "" || ui->nbBank->value() == 0)
        ui->groupBox->setEnabled(false);
    else
        ui->groupBox->setEnabled(true);
}

void InterfaceBank::on_pushButton_3_clicked()
{if(ui->regInterfaces->toPlainText() == "")
    {QMessageBox::critical(this,"Error","Add interface!");
      return;
    }
    if(!intBankVector.isEmpty())
      { emit bankSignal(intBankVector);
        this->setModal(false);
        this->close();
       }
    else
        {QMessageBox::warning(this,"Warning","No interface Bank");
        return;}
}

void InterfaceBank::on_clearBtn_clicked()
{
    ui->InterfaceName->clear();
    ui->regInterfaces->clear();
    ui->InterfaceName->setEnabled(true);
    ui->nbBank->setEnabled(true);
    intBankVector.clear();
}

void InterfaceBank::on_pushButton_clicked()
{
    this->setModal(false);
    this->close();
}
