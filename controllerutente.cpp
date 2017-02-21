#include "controllerutente.h"

controllerUtente::controllerUtente(dbVirus* x):punt_dbV(x){}

list<SmartVirus> controllerUtente::ricerca(const string& x)const{
    return punt_dbV->ricercaUtente(x);
}

controllerUtente::~controllerUtente(){delete punt_dbV;}
