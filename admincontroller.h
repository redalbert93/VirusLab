#ifndef ADMINCONTROLLER_H
#define ADMINCONTROLLER_H

#include<QObject>
#include"admin.h"

class admin;

class admincontroller{
private:
    admin *punt;
public:
    admincontroller(admin* x=0);

    QString elimina_utente(const QString& x)const;
    QString modifica_utente(const QString &x)const;
    QString aggiungi_utente(const QString &x)const;


    QString stampa_virus()const;
    QString aggiungi_virus(const QString&nome,const QString& tipo,const QString& impatto,const QString& descrizione)const;
    QString modifica_virus(const QString &oldname,const QString&nome,const QString& tipo,const QString& impatto,const QString& descrizione)const;
    QString elimina_virus(const int& x)const;
    void save_dbU()const;
    void save_dbV()const;

};

#endif // ADMINCONTROLLER_H
