#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <QObject>
#include"dbutenti.h"
#include"utente.h"
#include"smartutente.h"

class utente;
class dbUtenti;

class usercontroller{
private:
    dbUtenti *db;
public:
    usercontroller(dbUtenti* y=0);
    bool esisteUtente(const QString&) const;
    utente* ricercaUser(const QString&) const;
    QString utenteSearch(utente*usr,const QString& s="") const;
    QString stampauser()const;
};

#endif // USERCONTROLLER_H
