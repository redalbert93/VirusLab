#ifndef CONTROLLERUTENTE_H
#define CONTROLLERUTENTE_H

#include"dbvirus.h"

class dbVirus;

class controllerUtente{
private:
    dbVirus* punt_dbV;
public:
    controllerUtente(dbVirus* =0);
    list<SmartVirus> ricerca(const string& x) const;
    ~controllerUtente();
};

#endif // CONTROLLERUTENTE_H
