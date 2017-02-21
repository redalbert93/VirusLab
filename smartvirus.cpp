#include "smartvirus.h"

SmartVirus::SmartVirus(virus* p):punt(p){
    if (punt) {
        punt->riferimenti++;
    }
}

virus* SmartVirus::getVirus() const{
    return punt;
}

SmartVirus::SmartVirus(const SmartVirus& v) : punt(v.punt) {
    if (punt) {
        punt->riferimenti++;
    }
}

SmartVirus::SmartVirus::~SmartVirus() {
    if (punt) {
        punt->riferimenti--;
        if (punt->riferimenti == 0) {
            delete punt;
        }
    }
}

SmartVirus& SmartVirus::SmartVirus::operator=(const SmartVirus& s) {
    if (this != &s) {
        virus* t = punt;
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

virus& SmartVirus::SmartVirus::operator*() const {
    return *punt;
}

virus* SmartVirus::SmartVirus::operator->() const {
    return punt;
}

bool SmartVirus::SmartVirus::operator==(const SmartVirus& s) const {
    return punt == s.punt;
}

bool SmartVirus::SmartVirus::operator!=(const SmartVirus& s) const {
    return punt != s.punt;
}



