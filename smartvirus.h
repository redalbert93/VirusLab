#ifndef SMARTVIRUS_H
#define SMARTVIRUS_H

#include"virus.h"

class virus;

class SmartVirus{
private:
    virus* punt;
public:
    SmartVirus(virus* = 0);
    SmartVirus(const SmartVirus&);
    virus* getVirus() const;
    ~SmartVirus();
    SmartVirus& operator=(const SmartVirus&);
    virus& operator*() const;
    virus* operator->() const;
    bool operator==(const SmartVirus&) const;
    bool operator!=(const SmartVirus&) const;
};

#endif // SMARTVIRUS_H
