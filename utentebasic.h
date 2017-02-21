#ifndef UTENTEBASIC_H
#define UTENTEBASIC_H

#include"utente.h"

class utenteBasic:public utente{
public:
    utenteBasic(controllerUtente* =0,const string& ="userbasic");
    virtual string utenteSearch(const string& ="") const;
};

#endif // UTENTEBASIC_H

