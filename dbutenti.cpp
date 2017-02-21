#include "dbutenti.h"


/*ritorna la list formata da tutti gli utenti aggiunti dall'admin*/
list<SmartUtente> dbUtenti::getLista() const{
    return lista;
}

/*aggiunge in fronte alla lista un utente*/
void dbUtenti::aggiungiUtente(const SmartUtente& x){
    lista.push_front(x);
}

/*elimina dalla lista un utente*/
void dbUtenti::eliminaUtente(const SmartUtente& x){
   /* bool ok = false;
    for(list<SmartUtente>::iterator it=lista.begin();it!=lista.end() && !ok;++it){
        if((*it)->getUsername()==x->getUsername()){
            it=lista.erase(it);
            it--;
            ok=true;
        }
    }*/
    lista.remove(x);
}


/*ritorna un utente avente un certo username*/
utente* dbUtenti::ricercaUser(const string& username) const{
    for(list<SmartUtente>::const_iterator i=lista.begin();i!=lista.end();++i){
        if((*i).getUtente()->getUsername() == username){
            return (*i).getUtente(); 
        }
    }
    return NULL;
}

string dbUtenti::stampaTutti() const{
    string tutti;
        for(list<SmartUtente>::const_iterator i=lista.begin();i!=lista.end();++i){
                string tipo;
                if(dynamic_cast<utentePremium*>((*i).getUtente())){
                    tipo="Premium";
                }
                else{
                    if(dynamic_cast<utenteBasic*>((*i).getUtente())){
                        tipo="Basic";
                    }
                    else{
                        tipo="Free";
                    }
                }
                tutti+="- "+(*i).getUtente()->getUsername()+" ("+tipo+")\n";
        }
        if(tutti!="")
            return "Lista Username:\n"+tutti;
        else
            return "Nessun Utente Iscritto";
}

/*ritorna true se trova nella lista un utente che ha un dato username*/
bool dbUtenti::esisteUtente(const string& username) const{
    for(list<SmartUtente>::const_iterator i=lista.begin();i!=lista.end();++i)
        if((*i).getUtente()->getUsername() == username)
            return true;
    return false;
}



void dbUtenti::load(dbVirus *punt){
    ifstream database("dbUtenti.txt");
    while(true){
        string username,tipo,temp;
        database>>username;
        if(username=="XX")
            break;
        database>>tipo;
        database>>temp;
        controllerUtente *p = new controllerUtente(punt);
        SmartUtente u;
        if(temp=="00"){
           if(tipo=="Free")
                u = new utenteFree(p,username);
           else
               if(tipo=="Basic")
                   u = new utenteBasic(p,username);
               else
                   u = new utentePremium(p,username);

           lista.push_back(u);
        }
    }
    database.close();
}


void dbUtenti::save() const{
    ofstream database("dbUtenti.txt");
    for(list<SmartUtente>::const_iterator i=lista.begin(); i!=lista.end(); ++i){
        database<<(*i).getUtente()->getUsername()<<" ";
             if(dynamic_cast<utentePremium*>((*i).getUtente())!=0){
                 database<<"Premium"<<" ";
             }
             else{
                 if(dynamic_cast<utenteBasic*>((*i).getUtente())!=0){
                    database<<"Basic"<<" ";
                 }
                 else{
                    database<<"Free"<<" ";
                 }
             }
        database<<" 00 "<<endl;
    }
    database<<" XX ";
    database.close();

}

