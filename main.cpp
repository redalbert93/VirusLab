#include"admin.h"
#include"dbutenti.h"
#include"dbvirus.h"

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]){
    /*dbUtenti *firstdbU = new dbUtenti();
    dbVirus *firstdbV = new dbVirus();

    firstdbV->load();
    firstdbU->load(firstdbV);


    admin *first = new admin(firstdbU,firstdbV);
    //string z=first->elimina_user("davide");cout<<z;
    string s = firstdbU->stampaTutti();
    cout<<s;
    firstdbU->save();
    firstdbV->save();*/


    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

}
