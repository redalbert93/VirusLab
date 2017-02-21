#include "admincontroller.h"

admincontroller::admincontroller(admin* x):punt(x){}

QString admincontroller::elimina_utente(const QString& x)const{
    string ris = punt->elimina_user(x.toStdString());
    return QString::fromStdString(ris);
}

QString admincontroller::modifica_utente(const QString& x)const{
    string ris = punt->modifica_user(x.toStdString());
    return QString::fromStdString(ris);
}

QString admincontroller::aggiungi_utente(const QString& x)const{
    string ris = punt->aggiungi_user(x.toStdString());
    return QString::fromStdString(ris);
}

QString admincontroller::stampa_virus()const{
    string ris=punt->stampa_virus();
    return QString::fromStdString(ris);
}

void admincontroller::save_dbU() const{
    punt->save_dbU();

}

void admincontroller::save_dbV() const{
    punt->save_dbV();

}

QString admincontroller::aggiungi_virus(const QString& nome,const QString& tipo,const QString& impatto,const QString& descrizione)const{
    string ris=punt->aggiungi_virus(nome.toStdString(),tipo.toStdString(),impatto.toStdString(),descrizione.toStdString());
    return QString::fromStdString(ris);
}

QString admincontroller::modifica_virus(const QString &oldname,const QString&nome,const QString& tipo,const QString& impatto,const QString& descrizione)const{
    string ris=punt->modifica_virus(oldname.toStdString(),nome.toStdString(),tipo.toStdString(),impatto.toStdString(),descrizione.toStdString());
    return QString::fromStdString(ris);
}


QString admincontroller::elimina_virus(const int& x)const{
    string ris = punt->elimina_virus(x);
    return QString::fromStdString(ris);
}



