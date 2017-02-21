#ifndef ADMIN_H
#define ADMIN_H

#include"dbutenti.h"
#include"dbvirus.h"
#include"virus.h"
#include"utente.h"
#include"utentefree.h"
#include"utentebasic.h"
#include"utentepremium.h"
#include"controllerutente.h"


class dbUtenti;
class dbVirus;
class controllerUtente;

class admin{
private:
    dbUtenti* dbU;
    dbVirus* dbV;
    controllerUtente* punt_c;
public:
    admin(dbUtenti*,dbVirus*);
    string aggiungi_user(const string&);
    string elimina_user(const string&);
    string modifica_user(const string&);


    string aggiungi_virus(const string& ="",const string& ="",const string& ="",const string& ="");
    string elimina_virus(const int&);
    string modifica_virus(const string& ="",const string& ="",const string& ="",const string& ="",const string& ="")const;

    string stampa_virus()const;
    void save_dbU() const;
    void save_dbV() const;

    ~admin();
};

#endif // ADMIN_H

