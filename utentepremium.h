#ifndef UTENTEPREMIUM_H
#define UTENTEPREMIUM_H

#include"utente.h"

class utentePremium:public utente{
public:
    utentePremium(controllerUtente* =0,const string& ="userpremium");
    virtual string utenteSearch(const string& ="") const;
};


#endif // UTENTEPREMIUM_H
