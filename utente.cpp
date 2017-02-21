#include"utente.h"

/****************PROTECTED**********************/

utente::SearchFunctor::SearchFunctor(int x):searchType(x){}


string utente::SearchFunctor::operator()(const SmartVirus& x) const{
    switch(searchType){
        case 1:{
            return "-\n nome: "+x->getnome()+"\n";
            break;
        }
        case 2:{
            return "-\n nome: "+x->getnome()+"\n tipo: "+x->gettipo()+"\n";
            break;
        }
        case 3:{
            return "-\n nome: "+x->getnome()+"\n tipo: "+x->gettipo()+ "\n impatto: "+x->getimpatto()+
                    "\n descrizione: "+x->getdescrizione();
            break;
        }
    }
    return 0;
}

/*****************METODI PUBBLICI UTENTE********************/

/*costruttore di utente*/
utente::utente(controllerUtente* punt,const string& u):username(u),punt_c(punt),riferimenti(0){}

/*ritorna il campo dati username di un utente*/
string utente::getUsername()const{return username;}

/*distruttore di utente*/
utente::~utente(){
    //delete punt_c; la classe controller utente viene distrutta nella distruzione di admin
}
