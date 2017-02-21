#ifndef UTENTEFREE_H
#define UTENTEFREE_H

#include"utente.h"

class utenteFree:public utente{
public:
    utenteFree(controllerUtente* =0,const string& ="userfree");
    virtual string utenteSearch(const string& ="") const;
};


#endif // UTENTEFREE_H
