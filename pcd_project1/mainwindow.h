#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mainframe.h"
#include <QMainWindow>
#include <QPushButton>
#include <QAction>
#include <QButtonGroup>
#include <QCheckBox>
#include <QComboBox>
#include <QWidget>
#include <QFileDialog>
#include <QDomDocument>
#include <QMessageBox>
#include <QTextStream>
#include <QtXml/QtXml>
#include "frame_1.h"
#include "frame_2.h"
#include "frame_3.h"
#include "frame_4.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <stdlib.h>
#include <QProcess>
#include <QInputDialog>
#define MaxFPGA 7

namespace Ui {
class MainWindow;
}

class Interface : public QMainWindow
{
    Q_OBJECT

public:
    // QFile *forWrite;
    explicit Interface(QApplication *a =NULL,QWidget *parent = 0);
    ~Interface();
    void createMenus();
    void createFrames();
    void ouvrirUnit(int );
private slots:
    void ouvrirUnitVerify() ;
    void openFile();
    void saveFile();
    void saveFileas();
    void newFile();
    void deleteConfig();
    void buildFile();
    void use();
    void active();
    void disable();
    void nbFPGA_valueChanged(int arg1);
    void showFrame(int pos);
    void generateDetailedFile();
    void Owner();
private:
    QToolBar *toolbar;
    QMenu *fileMenu;
    QMenu *refresh;
    QMenu *build;
    QMenu *option;
    QMenu *help;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveActas;
    QAction *exitAct;
    QAction *delConfig;
    QAction *buildXML;
    QAction *buildDetail;
    QAction *useManual;
    QAction *owner;
    Ui::MainWindow *ui;
    //QPushButton *m_boutonDialogue;
    QHBoxLayout *hbox[MaxFPGA];
     QString fileName;
public:
    QComboBox *multiFPGA;
    Frame_1 *frame1[MaxFPGA];    //tableau de pointeurs de frame_1
    int nbFrame1 ;
    int nbFrame2 ;
    int nbFrame3 ;
    int nbFrame4 ;
    Frame_2 *frame2[MaxFPGA];
    Frame_3 *frame3[MaxFPGA];
    Frame_4 *frame4[MaxFPGA];
//QDomDocument *dom;
    int nbmulti;
    QVector<typeDef_unit> whatWeNeed[MaxFPGA];
    bool autreTab;//we can choose checkBox to add new multiFPGA
};

bool exist(QVector<QString>* v,QString s);

#endif // MAINWINDOW_H
