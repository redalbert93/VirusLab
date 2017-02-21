#ifndef DBVIRUS_H
#define DBVIRUS_H

#include"smartvirus.h"
#include<iostream>
#include<list>
#include <algorithm>
#include<fstream>
#include<sstream>
using std::list;
using std::ifstream;
using std::ofstream;
using std::string;


class dbVirus{
private:
    list<SmartVirus> C;
public:
    string stampaTutti()const;

    /*METODI USATI DA ADMIN*/
    list<SmartVirus> getC() const;
    void addVirus(const SmartVirus&);
    bool deleteVirus(const int&);
    bool checkVirus(const string&) const;
    virus* getVirus(const string&) const;

    /*METODI USATI DA UTENTE*/
    list<SmartVirus> ricercaUtente(const string&) const;

    /*GESTIONE DB*/
    void load();
    void save()const;
};

#endif // DBVIRUS_H
