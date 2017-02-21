#include "smartutente.h"

SmartUtente::SmartUtente(utente* p):punt(p){
    if (punt) {
        punt->riferimenti++;
    }
}

utente* SmartUtente::getUtente() const{
    return punt;
}

SmartUtente::SmartUtente(const SmartUtente& s) : punt(s.punt) {
    if (punt) {
        punt->riferimenti++;
    }
}

SmartUtente::SmartUtente::~SmartUtente() {
    if (punt) {
        punt->riferimenti--;
        if (punt->riferimenti == 0) {
            delete punt;
        }
    }
}

SmartUtente& SmartUtente::SmartUtente::operator=(const SmartUtente& s) {
    if (this != &s) {
        utente* t = punt;
        punt = s.punt;
        if (punt) {
            punt->riferimenti++;
        }
        if (t) {
            t->riferimenti--;
            if (t->riferimenti == 0) {
                delete t;
            }
        }
    }
    return *this;
}

utente& SmartUtente::SmartUtente::operator*() const {
    return *punt;
}

utente* SmartUtente::SmartUtente::operator->() const {
    return punt;
}

bool SmartUtente::SmartUtente::operator==(const SmartUtente& s) const {
    return punt == s.punt;
}

bool SmartUtente::SmartUtente::operator!=(const SmartUtente& s) const {
    return punt != s.punt;
}


