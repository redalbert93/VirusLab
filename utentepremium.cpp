#include "utentepremium.h"

utentePremium::utentePremium(controllerUtente* db_punt,const string& u):utente(db_punt,u) {}


/*overriding del metodo puro utenteSearch presente nella base utente
per la classe utentePremium*/
string utentePremium::utenteSearch(const string& s) const{
    list<SmartVirus> aux = punt_c->ricerca(s);
    if(aux.empty())
        return "nessun virus trovato con questo nome";
    else{
        string vr;
        for(list<SmartVirus>::const_iterator i=aux.begin();i!=aux.end(); ++i){
                vr+=(SearchFunctor(3)(*i)+"\n");
        }
        return vr;
    }

}

