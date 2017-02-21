#ifndef DBUTENTI_H
#define DBUTENTI_H

#include<iostream>
#include"smartutente.h"
#include"admin.h"
#include<fstream>
#include<list>
using std::list;
using std::ifstream;
using std::ofstream;


class dbUtenti{
private:
    list<SmartUtente> lista;
public:

    list<SmartUtente> getLista() const;
    void aggiungiUtente(const SmartUtente&); //metodo riservato ad admin
    void eliminaUtente(const SmartUtente&); //metodo riservato ad admin
    utente* ricercaUser(const string&) const; 
    bool esisteUtente(const string&) const;

    string stampaTutti()const;

    /*GESTIONE DB*/
    void load(dbVirus*);
    void save() const;
};

#endif // DBUTENTI_H
