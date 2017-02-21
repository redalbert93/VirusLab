#include "usercontroller.h"

usercontroller::usercontroller(dbUtenti* y):db(y){}


bool usercontroller::esisteUtente(const QString& username) const{
    string name = username.toStdString();
    return db->esisteUtente(name);
}

utente* usercontroller::ricercaUser(const QString& s)const{
    utente *ris = db->ricercaUser(s.toStdString());
    if(ris!=NULL)
        return ris;
    else
        return NULL;
}

QString usercontroller::utenteSearch(utente * usr,const QString& s)const{
    string ris = usr->utenteSearch(s.toStdString());
    return QString::fromStdString(ris);
}

QString  usercontroller::stampauser()const{
    string aux = db->stampaTutti();
    return QString::fromStdString(aux);
}
