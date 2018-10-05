#include "mainwindow.h"
#include <QApplication>
#include <QWidget>
#include <QProcess>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Interface w(&app);



   /* QString commandLine ("ls $HOME");
        qDebug () << commandLine;
        QProcess process;
        process.start (commandLine);
        process.waitForFinished ();
        if (process.exitCode () != 0) {
            qDebug () << "erreur n° " << process.exitCode () << process.readAllStandardError ();
        }
        else {
            qDebug () << "ça baigne ! résultat de la commande : " << process.readAllStandardOutput ();
        }
    //QProcess *p =new QProcess;
   /*if( !p->execute("./exemple"))
        p->execute("ls -l");*/
   w.show();
/* @@@ Dans le build on peut recuperer directement le contenu de
 champs texte clockModelContainer et reset. de chaque unit en
  se basant sur le multiboard(frame) choisie, puis on inserre
 dans le fichier xml par le methodes c++ pure.
  @@@ Soit on inserre balise par balise grace au structure  QVector<typeDefClock>*/
    return app.exec();
}
