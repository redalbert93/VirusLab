#include "dbvirus.h"

/*************METODI USATI DA ADMIN************/

/*ritorna la lista C contenente tutti i virus*/
list<SmartVirus> dbVirus::getC() const {
    return C;
}

/*aggiunge in fronte al contenitore C un virus*/
void dbVirus::addVirus(const SmartVirus& v){
    C.push_back(v);
}

/*rimuove un virus dal contenitore C*/
bool dbVirus::deleteVirus(const int& id){
    for(list<SmartVirus>::iterator i=C.begin();i!=C.end();++i){
        if((*i).getVirus()->getid() == id){
            i = C.erase(i); 
            --i;
            return true;
        }
    }
    return false;
}

/*dato un nome di virus ci dice true se è presente all'interno di C*/
bool dbVirus::checkVirus(const string& nomeVirus) const{
    for(list<SmartVirus>::const_iterator i=C.begin();i!=C.end();++i)
        if((*i).getVirus()->getnome() == nomeVirus)
            return true;
    return false;
}


/* ritorna un virus dato il nome se esiste in C */
virus* dbVirus::getVirus(const string& nomeVirus) const{
    for(list<SmartVirus>::const_iterator i=C.begin();i!=C.end();++i){
        if((*i).getVirus()->getnome() == nomeVirus){
            return (*i).getVirus(); 
        } 
    }
    return 0;
}

string dbVirus::stampaTutti() const{
    string tutti;
    for(list<SmartVirus>::const_iterator i=C.begin();i!=C.end();++i){
        int aux = (*i).getVirus()->getid();
        std::stringstream ss;
        ss<<aux;
        string ris=ss.str();
        tutti += "-\nID: "+ris +  "\nNOME: "+ (*i).getVirus()->getnome()
                +"\nTIPO: "+ (*i).getVirus()->gettipo() +"\nIMPATTO: "+ (*i).getVirus()->getimpatto() +
                "\nDESCRIZIONE: \n"+ (*i).getVirus()->getdescrizione()+"\n\n";
    }
    if(tutti!="")
            return "Lista Virus:\n"+tutti;
        else
            return "Nessun Virus inserito";
}

/****************METODI USATI DA UTENTE*******************/

list<SmartVirus> dbVirus::ricercaUtente(const string& x) const{
    list<SmartVirus> aux;
    for(list<SmartVirus>::const_iterator i=C.begin();i!=C.end();++i){
        string nv = (*i).getVirus()->getnome();
        if(nv.find(x)!=std::string::npos){
            aux.push_back(*i);
        }
    }
    return aux;
}

/****************GESTIONE DB*******************/

void dbVirus::load(){
    ifstream database("dbVirus.txt");
    while(true){
        int id;
        string nome,tipo,impatto,descrizione;
        string temp;
        database>>id;
        if(id==999)
            break;
        database>>nome;
        database>>temp;
        for(; temp!="00"; database>>temp)
            if(nome!="") nome=nome+" "+temp;
            else nome=temp;
        database>>temp;
        for(; temp!="00"; database>>temp)
            if(tipo!="") tipo=tipo+" "+temp;
            else tipo=temp;
        database>>temp;
        for(; temp!="00"; database>>temp)
            if(impatto!="") impatto=impatto+" "+temp;
            else impatto=temp;
        database>>temp;
        for(; temp!="00"; database>>temp)
            if(descrizione!="") descrizione=descrizione+" "+temp;
            else descrizione=temp;

        SmartVirus aux = new virus(id,nome,tipo,impatto,descrizione);
        C.push_back(aux);

    }
    database.close();
}


void dbVirus::save() const{
    ofstream database("dbVirus.txt");
    for(list<SmartVirus>::const_iterator i=C.begin(); i!=C.end(); ++i){
        database<<(*i).getVirus()->getid()<<" ";
        database<<(*i).getVirus()->getnome()<<" ";
        database<<" 00 ";
        database<<(*i).getVirus()->gettipo()<<" ";
        database<<" 00 ";
        database<<(*i).getVirus()->getimpatto()<<" ";
        database<<" 00 ";
        database<<(*i).getVirus()->getdescrizione();
        database<<" 00 ";
        database<<"\n";
    }
    database<<"999";
    database.close();
}










