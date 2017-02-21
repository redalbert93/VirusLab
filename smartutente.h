#ifndef SMARTUTENTE_H
#define SMARTUTENTE_H


#include"utente.h"

class utente;

class SmartUtente{
private:
    utente* punt;
public:
    SmartUtente(utente* = 0);
    SmartUtente(const SmartUtente&);
    utente* getUtente() const;
    ~SmartUtente();
    SmartUtente& operator=(const SmartUtente&);
    utente& operator*() const;
    utente* operator->() const;
    bool operator==(const SmartUtente&) const;
    bool operator!=(const SmartUtente&) const;
};

#endif // SMARTUTENTE_H
