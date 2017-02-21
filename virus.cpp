#include "virus.h"

virus::virus(int i,const string& n,const string& t,const string& imp,const string& de)
    :id(i),nome(n),tipo(t),impatto(imp),descrizione(de),riferimenti(0){}

int virus::getid() const{return id;}

string virus::getnome() const{return nome;}

string virus::gettipo() const{return tipo;}

string virus::getimpatto() const{return impatto;}

string virus::getdescrizione() const{return descrizione;}



