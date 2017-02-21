#include "admin.h"

admin::admin(dbUtenti* punt_dbutenti,dbVirus* punt_dbvirus):dbU(punt_dbutenti),dbV(punt_dbvirus),punt_c(new controllerUtente(dbV)) {}

/*******************METODI GESTIONE UTENTI*****************/
string admin::aggiungi_user(const string& u){
    SmartUtente nuovo = new utenteFree(punt_c,u);
    if(dbU->esisteUtente(u)==false){
        dbU->aggiungiUtente(nuovo);
        return "utente inserito con successo";
    }
    else
        return "esiste già un utente con lo stesso username";
}

string admin::elimina_user(const string& u){
    if(dbU->esisteUtente(u)){
        SmartUtente aux = dbU->ricercaUser(u);
        dbU->eliminaUtente(aux); //elimina utente in dbU richiede un const smartUtente&
        return "utente eliminato con successo";
    }else{
        return "utente non esistente";
    }
}

string admin::modifica_user(const string& u){
    //controllerUtente *aux = new controllerUtente(dbV);

    if(dbU->esisteUtente(u)){
        SmartUtente nuovo;
        SmartUtente vecchio = dbU->ricercaUser(u);
        if(dynamic_cast<utentePremium*>(vecchio.getUtente())){
                return "l'utente è già premium";
        }
        else{
            if(dynamic_cast<const utenteBasic*>(vecchio.getUtente())){
                nuovo=new utentePremium(punt_c,u);
            }
            else{
                nuovo=new utenteBasic(punt_c,u);
            }
        }
        dbU->eliminaUtente(vecchio);
        dbU->aggiungiUtente(nuovo);
        return "utente modificato con successo";
    }
    else{
        return "l'utente non esiste";
    }
}

/*******************METODI GESTIONE VIRUS******************/


string admin::aggiungi_virus(const string& n,const string& t,const string& imp,const string& de){
    int i;
    if(!((dbV->getC()).empty()))
        i=(((dbV->getC()).back())->getid())+1;
    else
        i=1;
    if(dbV->checkVirus(n)) return "virus già esistente";
    else{
        SmartVirus aux = new virus(i,n,t,imp,de);
        dbV->addVirus(aux);
        return "virus aggiunto con successo";
    }

}

string admin::elimina_virus(const int& id){
    bool ok = dbV->deleteVirus(id);
    if(ok)
        return "virus eliminato con successo";
    else
        return "l'id selezionato è inesistente";
}


string admin::modifica_virus(const string& oldvname,const string& name,const string& type,const string& impatto,const string& desc)const{
    if(dbV->checkVirus(oldvname)){
        SmartVirus vecchio=dbV->getVirus(oldvname);
        int oldid = vecchio->getid();
        SmartVirus nuovo=new virus(oldid,name,type,impatto,desc);

        if(dbV->deleteVirus(oldid)){
            dbV->addVirus(nuovo);
            return "virus modificato con successo";
        }else
            return "modifica del virus fallita";

    }
    else{

        return "il nome del virus che si vuole modificare è inesistente";
    }

}

string admin::stampa_virus()const{
    return dbV->stampaTutti();
}

void admin::save_dbU() const{
    dbU->save();
}


void admin::save_dbV() const{
    dbV->save();
}



admin::~admin(){
    delete dbU;
    delete punt_c;
}


