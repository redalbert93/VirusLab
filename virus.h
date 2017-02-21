#ifndef VIRUS_H
#define VIRUS_H

#include<string>
using std::string;

class DB;

class virus{
    friend class SmartVirus;
private:
    int id;
    string nome;
    string tipo; /*elevato medio basso*/
    string impatto;
    string descrizione;
    int riferimenti;
public:
    virus(int =0,const string& ="",const string& ="",const string& ="",const string& ="");
    int getid() const;
    string getnome() const;
    string gettipo() const;
    string getimpatto() const;
    string getdescrizione() const;
};

#endif // VIRUS_H


