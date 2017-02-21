#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include"admincontroller.h"
#include"usercontroller.h"
#include<typeinfo>


namespace Ui {
class MainWindow;
}

class admincontroller;
class usercontroller;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /*User*/
    void on_pushButton_ricerca_clicked();

    /*AdminUser*/
    void on_pushButton_rimozioneutente_clicked();
    void on_pushButton_modificautente_clicked();
    void on_pushButton_aggiungiutente_clicked();

    /*AdminVirus*/
    void on_pushButton_aggiungivirus_clicked();
    void on_pushButton_modificavirus_clicked();
    void on_pushButton_eliminavirus_clicked();

private:
    Ui::MainWindow *ui;
    usercontroller* uc;
    admincontroller* ac;

};

#endif // MAINWINDOW_H
