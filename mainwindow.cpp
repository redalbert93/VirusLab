#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    dbUtenti *firstdbU = new dbUtenti();
    dbVirus *firstdbV = new dbVirus();
    admin *first = new admin(firstdbU,firstdbV);

    firstdbV->load();
    firstdbU->load(firstdbV);

    uc=new usercontroller(firstdbU);
    ac=new admincontroller(first);


    ui->setupUi(this);
    ui->textBrowser_listautenti->setText(uc->stampauser());
    ui->textBrowser_2->setText(ac->stampa_virus());
}

MainWindow::~MainWindow()
{
    delete ui;
    delete uc;
    delete ac;
}


void MainWindow::on_pushButton_ricerca_clicked(){
    QString username = ui->lineEdit_username->text();
    if(uc->esisteUtente(username)){
        ui->lineEdit_nomevirus->setEnabled(1);
        utente *u = uc->ricercaUser(username);
        QString ris = uc->utenteSearch(u,ui->lineEdit_nomevirus->text());
        ui->textBrowser_ricercauser->setText(ris);
        QString tipo;
        if(typeid(*u)==typeid(utenteFree))tipo="FREE";
        else if(typeid(*u)==typeid(utenteBasic)) tipo="BASIC";
             else if(typeid(*u)==typeid(utentePremium)) tipo="PREMIUM";
        ui->label_benvenuto->setText("ACCOUNT DI TIPO : "+tipo);

    }else{
        ui->lineEdit_nomevirus->setDisabled(1);
        ui->textBrowser_ricercauser->setText(QString::fromStdString("NON SEI UN UTENTE!"));
    }
}

void MainWindow::on_pushButton_rimozioneutente_clicked(){
    QString username = ui->lineEdit_username_4->text();
    QString aux = ac->elimina_utente(username);
    ui->textBrowser_4->setText(aux);
    ac->save_dbU();
    ui->textBrowser_listautenti->setText(uc->stampauser());

}

void MainWindow::on_pushButton_modificautente_clicked(){
    QString username = ui->lineEdit_username_3->text();
    QString aux = ac->modifica_utente(username);
    ui->textBrowser_4->setText(aux);
    ac->save_dbU();
    ui->textBrowser_listautenti->setText(uc->stampauser());
}

void MainWindow::on_pushButton_aggiungiutente_clicked(){
    QString username = ui->lineEdit_username_2->text();
    QString aux = ac->aggiungi_utente(username);
    ui->textBrowser_4->setText(aux);
    ac->save_dbU();
    ui->textBrowser_listautenti->setText(uc->stampauser());
}

void MainWindow::on_pushButton_aggiungivirus_clicked(){
    QString name = ui->lineEdit_nomevirus_2->text();
    QString tipo = ui->lineEdit_15->text();
    QString descrizione = ui->textEdit_descrizione->toPlainText();
    QString impatto;
    if(ui->radioButton->isChecked()) impatto="elevato";
    else if(ui->radioButton_2->isChecked()) impatto = "medio";
         else if(ui->radioButton_3->isChecked()) impatto = "basso";
    QString aux=ac->aggiungi_virus(name,tipo,impatto,descrizione);
    ui->textBrowser_3->setText(aux);
    ac->save_dbV();
    ui->textBrowser_2->setText(ac->stampa_virus());

}

void MainWindow::on_pushButton_modificavirus_clicked(){
    QString oldname = ui->lineEdit_nomeoldvirus->text();
    QString name = ui->lineEdit_nomevirus_3->text();
    QString descrizione = ui->textEdit_descrizione_2->toPlainText();
    QString tipo=ui->lineEdit_tipo->text();
    QString impatto;
    if(ui->radioButton_6->isChecked()) impatto="elevato";
    else if(ui->radioButton_4->isChecked()) impatto = "medio";
         else if(ui->radioButton_5->isChecked()) impatto = "basso";

    QString aux = ac->modifica_virus(oldname,name,tipo,impatto,descrizione);
    ui->textBrowser_3->setText(aux);
    ac->save_dbV();
    ui->textBrowser_2->setText(ac->stampa_virus());
}

void MainWindow::on_pushButton_eliminavirus_clicked(){
    int aux = ui->spinBox->value();
    QString ris = ac->elimina_virus(aux);
    ui->textBrowser_3->setText(ris);
    ac->save_dbV();
    ui->textBrowser_2->setText(ac->stampa_virus());
}
