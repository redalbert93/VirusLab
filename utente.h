#ifndef UTENTE_H
#define UTENTE_H

#include"controllerutente.h"
#include<string>
using std::string;
using std::endl;


class controllerUtente;

class utente{
    friend class SmartUtente;
private:
    string username;
    int riferimenti;

protected:
    controllerUtente* punt_c;

    class SearchFunctor{
    public:
        int searchType;
        SearchFunctor(int =0);
        string operator()(const SmartVirus&) const;
    };

public:
    utente(controllerUtente* =0,const string& ="user");
    utente(const utente& u);
    virtual string utenteSearch(const string& ="") const=0; //metodo puro
    string getUsername() const;
    virtual ~utente(); //IMPORTANTE DISTRUTTORE VIRTUALE
};

#endif // UTENTE_H

