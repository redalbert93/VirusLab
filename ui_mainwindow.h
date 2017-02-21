/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_Titolo;
    QTabWidget *tabWidget;
    QWidget *tab1_User;
    QGroupBox *groupBox_ricercauser;
    QTextBrowser *textBrowser_ricercauser;
    QTextEdit *textEdit_benvenuto;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_nomevirus;
    QLineEdit *lineEdit_nomevirus;
    QPushButton *pushButton_ricerca;
    QLabel *label_benvenuto;
    QWidget *tab2_AdminUser;
    QGroupBox *groupBox_listautenti;
    QTextBrowser *textBrowser_listautenti;
    QGroupBox *groupBox_AdminUser;
    QGroupBox *groupBox_rimozioneutente;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_rimozioneutente;
    QLabel *label_username_4;
    QLineEdit *lineEdit_username_4;
    QPushButton *pushButton_rimozioneutente;
    QGroupBox *groupBox_modificautente;
    QTextEdit *textEdit_infomodificautente;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_modificautente;
    QLabel *label_username_3;
    QLineEdit *lineEdit_username_3;
    QPushButton *pushButton_modificautente;
    QGroupBox *groupBox_aggiungiutente;
    QWidget *layoutWidget_6;
    QGridLayout *gridLayout_aggiungiutente;
    QLabel *label_username_2;
    QLineEdit *lineEdit_username_2;
    QPushButton *pushButton_aggiungiutente;
    QGroupBox *groupBox_log_2;
    QTextBrowser *textBrowser_4;
    QWidget *tab3_AdminVirus;
    QGroupBox *groupBox_AdminVirus;
    QGroupBox *groupBox_rimozionevirus;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_id;
    QSpinBox *spinBox;
    QPushButton *pushButton_eliminavirus;
    QGroupBox *groupBox_aggiungivirus;
    QPushButton *pushButton_aggiungivirus;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_nomeaggiungivirus;
    QLabel *label_nomevirus_2;
    QLineEdit *lineEdit_nomevirus_2;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_descrizione;
    QLabel *label_descrizione;
    QTextEdit *textEdit_descrizione;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_tipovirus;
    QLabel *label_tipo;
    QLineEdit *lineEdit_15;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_2;
    QLabel *label_impatto;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QGroupBox *groupBox_log;
    QTextBrowser *textBrowser_3;
    QGroupBox *groupBox_listavirus;
    QTextBrowser *textBrowser_2;
    QGroupBox *groupBox_modificavirus;
    QPushButton *pushButton_modificavirus;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_descrizione_2;
    QLabel *label_descrizione_2;
    QTextEdit *textEdit_descrizione_2;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_tipo;
    QLabel *label_tipo_2;
    QLineEdit *lineEdit_tipo;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_nomevirus;
    QLabel *label_nomevirus_3;
    QLineEdit *lineEdit_nomevirus_3;
    QLabel *label_nomeoldvirus;
    QLineEdit *lineEdit_nomeoldvirus;
    QLabel *label_modificavirus;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_impatto_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(771, 650);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(800, 650));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        centralWidget->setMaximumSize(QSize(771, 589));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        label_Titolo = new QLabel(centralWidget);
        label_Titolo->setObjectName(QStringLiteral("label_Titolo"));
        sizePolicy.setHeightForWidth(label_Titolo->sizePolicy().hasHeightForWidth());
        label_Titolo->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        label_Titolo->setFont(font);
        label_Titolo->setLayoutDirection(Qt::LeftToRight);
        label_Titolo->setLineWidth(1);

        verticalLayout->addWidget(label_Titolo);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(751, 281));
        tabWidget->setMaximumSize(QSize(400, 600));
        tab1_User = new QWidget();
        tab1_User->setObjectName(QStringLiteral("tab1_User"));
        sizePolicy1.setHeightForWidth(tab1_User->sizePolicy().hasHeightForWidth());
        tab1_User->setSizePolicy(sizePolicy1);
        groupBox_ricercauser = new QGroupBox(tab1_User);
        groupBox_ricercauser->setObjectName(QStringLiteral("groupBox_ricercauser"));
        groupBox_ricercauser->setGeometry(QRect(20, 170, 711, 321));
        groupBox_ricercauser->setStyleSheet(QStringLiteral("border: 1px solid black;"));
        textBrowser_ricercauser = new QTextBrowser(groupBox_ricercauser);
        textBrowser_ricercauser->setObjectName(QStringLiteral("textBrowser_ricercauser"));
        textBrowser_ricercauser->setGeometry(QRect(10, 30, 691, 281));
        textEdit_benvenuto = new QTextEdit(tab1_User);
        textEdit_benvenuto->setObjectName(QStringLiteral("textEdit_benvenuto"));
        textEdit_benvenuto->setGeometry(QRect(21, 17, 339, 91));
        textEdit_benvenuto->setAcceptRichText(false);
        textEdit_benvenuto->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget = new QWidget(tab1_User);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 20, 271, 89));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QStringLiteral("label_username"));

        gridLayout->addWidget(label_username, 0, 0, 1, 1);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        gridLayout->addWidget(lineEdit_username, 0, 1, 1, 1);

        label_nomevirus = new QLabel(layoutWidget);
        label_nomevirus->setObjectName(QStringLiteral("label_nomevirus"));
        sizePolicy1.setHeightForWidth(label_nomevirus->sizePolicy().hasHeightForWidth());
        label_nomevirus->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_nomevirus, 1, 0, 1, 1);

        lineEdit_nomevirus = new QLineEdit(layoutWidget);
        lineEdit_nomevirus->setObjectName(QStringLiteral("lineEdit_nomevirus"));

        gridLayout->addWidget(lineEdit_nomevirus, 1, 1, 1, 1);

        pushButton_ricerca = new QPushButton(layoutWidget);
        pushButton_ricerca->setObjectName(QStringLiteral("pushButton_ricerca"));

        gridLayout->addWidget(pushButton_ricerca, 2, 0, 1, 2);

        label_benvenuto = new QLabel(tab1_User);
        label_benvenuto->setObjectName(QStringLiteral("label_benvenuto"));
        label_benvenuto->setGeometry(QRect(20, 130, 271, 21));
        tabWidget->addTab(tab1_User, QString());
        tab2_AdminUser = new QWidget();
        tab2_AdminUser->setObjectName(QStringLiteral("tab2_AdminUser"));
        groupBox_listautenti = new QGroupBox(tab2_AdminUser);
        groupBox_listautenti->setObjectName(QStringLiteral("groupBox_listautenti"));
        groupBox_listautenti->setGeometry(QRect(20, 20, 201, 281));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setKerning(true);
        groupBox_listautenti->setFont(font1);
        groupBox_listautenti->setStyleSheet(QStringLiteral("border: 1px solid black;"));
        groupBox_listautenti->setFlat(false);
        textBrowser_listautenti = new QTextBrowser(groupBox_listautenti);
        textBrowser_listautenti->setObjectName(QStringLiteral("textBrowser_listautenti"));
        textBrowser_listautenti->setGeometry(QRect(15, 31, 171, 241));
        groupBox_AdminUser = new QGroupBox(tab2_AdminUser);
        groupBox_AdminUser->setObjectName(QStringLiteral("groupBox_AdminUser"));
        groupBox_AdminUser->setGeometry(QRect(260, 20, 471, 471));
        groupBox_AdminUser->setStyleSheet(QStringLiteral(""));
        groupBox_rimozioneutente = new QGroupBox(groupBox_AdminUser);
        groupBox_rimozioneutente->setObjectName(QStringLiteral("groupBox_rimozioneutente"));
        groupBox_rimozioneutente->setGeometry(QRect(20, 30, 431, 101));
        groupBox_rimozioneutente->setStyleSheet(QStringLiteral(""));
        groupBox_rimozioneutente->setFlat(false);
        layoutWidget1 = new QWidget(groupBox_rimozioneutente);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 391, 58));
        gridLayout_rimozioneutente = new QGridLayout(layoutWidget1);
        gridLayout_rimozioneutente->setSpacing(6);
        gridLayout_rimozioneutente->setContentsMargins(11, 11, 11, 11);
        gridLayout_rimozioneutente->setObjectName(QStringLiteral("gridLayout_rimozioneutente"));
        gridLayout_rimozioneutente->setContentsMargins(0, 0, 0, 0);
        label_username_4 = new QLabel(layoutWidget1);
        label_username_4->setObjectName(QStringLiteral("label_username_4"));
        sizePolicy1.setHeightForWidth(label_username_4->sizePolicy().hasHeightForWidth());
        label_username_4->setSizePolicy(sizePolicy1);
        label_username_4->setLayoutDirection(Qt::LeftToRight);
        label_username_4->setStyleSheet(QStringLiteral(""));
        label_username_4->setAlignment(Qt::AlignCenter);

        gridLayout_rimozioneutente->addWidget(label_username_4, 0, 0, 1, 1);

        lineEdit_username_4 = new QLineEdit(layoutWidget1);
        lineEdit_username_4->setObjectName(QStringLiteral("lineEdit_username_4"));

        gridLayout_rimozioneutente->addWidget(lineEdit_username_4, 0, 1, 1, 1);

        pushButton_rimozioneutente = new QPushButton(layoutWidget1);
        pushButton_rimozioneutente->setObjectName(QStringLiteral("pushButton_rimozioneutente"));

        gridLayout_rimozioneutente->addWidget(pushButton_rimozioneutente, 1, 0, 1, 2);

        groupBox_modificautente = new QGroupBox(groupBox_AdminUser);
        groupBox_modificautente->setObjectName(QStringLiteral("groupBox_modificautente"));
        groupBox_modificautente->setGeometry(QRect(20, 140, 431, 191));
        textEdit_infomodificautente = new QTextEdit(groupBox_modificautente);
        textEdit_infomodificautente->setObjectName(QStringLiteral("textEdit_infomodificautente"));
        textEdit_infomodificautente->setGeometry(QRect(20, 30, 391, 71));
        textEdit_infomodificautente->setAcceptRichText(false);
        textEdit_infomodificautente->setTextInteractionFlags(Qt::NoTextInteraction);
        layoutWidget_2 = new QWidget(groupBox_modificautente);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 120, 391, 58));
        gridLayout_modificautente = new QGridLayout(layoutWidget_2);
        gridLayout_modificautente->setSpacing(6);
        gridLayout_modificautente->setContentsMargins(11, 11, 11, 11);
        gridLayout_modificautente->setObjectName(QStringLiteral("gridLayout_modificautente"));
        gridLayout_modificautente->setContentsMargins(0, 0, 0, 0);
        label_username_3 = new QLabel(layoutWidget_2);
        label_username_3->setObjectName(QStringLiteral("label_username_3"));
        sizePolicy1.setHeightForWidth(label_username_3->sizePolicy().hasHeightForWidth());
        label_username_3->setSizePolicy(sizePolicy1);
        label_username_3->setStyleSheet(QStringLiteral(""));
        label_username_3->setAlignment(Qt::AlignCenter);

        gridLayout_modificautente->addWidget(label_username_3, 0, 0, 1, 1);

        lineEdit_username_3 = new QLineEdit(layoutWidget_2);
        lineEdit_username_3->setObjectName(QStringLiteral("lineEdit_username_3"));

        gridLayout_modificautente->addWidget(lineEdit_username_3, 0, 1, 1, 1);

        pushButton_modificautente = new QPushButton(layoutWidget_2);
        pushButton_modificautente->setObjectName(QStringLiteral("pushButton_modificautente"));

        gridLayout_modificautente->addWidget(pushButton_modificautente, 1, 0, 1, 2);

        groupBox_aggiungiutente = new QGroupBox(groupBox_AdminUser);
        groupBox_aggiungiutente->setObjectName(QStringLiteral("groupBox_aggiungiutente"));
        groupBox_aggiungiutente->setGeometry(QRect(20, 350, 431, 101));
        layoutWidget_6 = new QWidget(groupBox_aggiungiutente);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(20, 30, 391, 58));
        gridLayout_aggiungiutente = new QGridLayout(layoutWidget_6);
        gridLayout_aggiungiutente->setSpacing(6);
        gridLayout_aggiungiutente->setContentsMargins(11, 11, 11, 11);
        gridLayout_aggiungiutente->setObjectName(QStringLiteral("gridLayout_aggiungiutente"));
        gridLayout_aggiungiutente->setContentsMargins(0, 0, 0, 0);
        label_username_2 = new QLabel(layoutWidget_6);
        label_username_2->setObjectName(QStringLiteral("label_username_2"));
        sizePolicy1.setHeightForWidth(label_username_2->sizePolicy().hasHeightForWidth());
        label_username_2->setSizePolicy(sizePolicy1);
        label_username_2->setStyleSheet(QStringLiteral(""));
        label_username_2->setAlignment(Qt::AlignCenter);

        gridLayout_aggiungiutente->addWidget(label_username_2, 0, 0, 1, 1);

        lineEdit_username_2 = new QLineEdit(layoutWidget_6);
        lineEdit_username_2->setObjectName(QStringLiteral("lineEdit_username_2"));

        gridLayout_aggiungiutente->addWidget(lineEdit_username_2, 0, 1, 1, 1);

        pushButton_aggiungiutente = new QPushButton(layoutWidget_6);
        pushButton_aggiungiutente->setObjectName(QStringLiteral("pushButton_aggiungiutente"));

        gridLayout_aggiungiutente->addWidget(pushButton_aggiungiutente, 1, 0, 1, 2);

        groupBox_log_2 = new QGroupBox(tab2_AdminUser);
        groupBox_log_2->setObjectName(QStringLiteral("groupBox_log_2"));
        groupBox_log_2->setGeometry(QRect(20, 330, 201, 161));
        textBrowser_4 = new QTextBrowser(groupBox_log_2);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(10, 30, 181, 121));
        tabWidget->addTab(tab2_AdminUser, QString());
        tab3_AdminVirus = new QWidget();
        tab3_AdminVirus->setObjectName(QStringLiteral("tab3_AdminVirus"));
        groupBox_AdminVirus = new QGroupBox(tab3_AdminVirus);
        groupBox_AdminVirus->setObjectName(QStringLiteral("groupBox_AdminVirus"));
        groupBox_AdminVirus->setGeometry(QRect(360, 0, 371, 491));
        groupBox_AdminVirus->setStyleSheet(QStringLiteral(""));
        groupBox_rimozionevirus = new QGroupBox(groupBox_AdminVirus);
        groupBox_rimozionevirus->setObjectName(QStringLiteral("groupBox_rimozionevirus"));
        groupBox_rimozionevirus->setGeometry(QRect(20, 30, 231, 71));
        groupBox_rimozionevirus->setStyleSheet(QStringLiteral(""));
        layoutWidget2 = new QWidget(groupBox_rimozionevirus);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(11, 31, 201, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_id = new QLabel(layoutWidget2);
        label_id->setObjectName(QStringLiteral("label_id"));
        sizePolicy1.setHeightForWidth(label_id->sizePolicy().hasHeightForWidth());
        label_id->setSizePolicy(sizePolicy1);
        label_id->setStyleSheet(QStringLiteral(""));
        label_id->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_id);

        spinBox = new QSpinBox(layoutWidget2);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        pushButton_eliminavirus = new QPushButton(layoutWidget2);
        pushButton_eliminavirus->setObjectName(QStringLiteral("pushButton_eliminavirus"));

        horizontalLayout->addWidget(pushButton_eliminavirus);

        groupBox_aggiungivirus = new QGroupBox(groupBox_AdminVirus);
        groupBox_aggiungivirus->setObjectName(QStringLiteral("groupBox_aggiungivirus"));
        groupBox_aggiungivirus->setGeometry(QRect(20, 110, 331, 271));
        pushButton_aggiungivirus = new QPushButton(groupBox_aggiungivirus);
        pushButton_aggiungivirus->setObjectName(QStringLiteral("pushButton_aggiungivirus"));
        pushButton_aggiungivirus->setGeometry(QRect(190, 80, 131, 25));
        layoutWidget3 = new QWidget(groupBox_aggiungivirus);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 141, 27));
        horizontalLayout_nomeaggiungivirus = new QHBoxLayout(layoutWidget3);
        horizontalLayout_nomeaggiungivirus->setSpacing(6);
        horizontalLayout_nomeaggiungivirus->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_nomeaggiungivirus->setObjectName(QStringLiteral("horizontalLayout_nomeaggiungivirus"));
        horizontalLayout_nomeaggiungivirus->setContentsMargins(0, 0, 0, 0);
        label_nomevirus_2 = new QLabel(layoutWidget3);
        label_nomevirus_2->setObjectName(QStringLiteral("label_nomevirus_2"));
        label_nomevirus_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_nomeaggiungivirus->addWidget(label_nomevirus_2);

        lineEdit_nomevirus_2 = new QLineEdit(layoutWidget3);
        lineEdit_nomevirus_2->setObjectName(QStringLiteral("lineEdit_nomevirus_2"));

        horizontalLayout_nomeaggiungivirus->addWidget(lineEdit_nomevirus_2);

        layoutWidget4 = new QWidget(groupBox_aggiungivirus);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 170, 311, 95));
        verticalLayout_descrizione = new QVBoxLayout(layoutWidget4);
        verticalLayout_descrizione->setSpacing(6);
        verticalLayout_descrizione->setContentsMargins(11, 11, 11, 11);
        verticalLayout_descrizione->setObjectName(QStringLiteral("verticalLayout_descrizione"));
        verticalLayout_descrizione->setContentsMargins(0, 0, 0, 0);
        label_descrizione = new QLabel(layoutWidget4);
        label_descrizione->setObjectName(QStringLiteral("label_descrizione"));

        verticalLayout_descrizione->addWidget(label_descrizione);

        textEdit_descrizione = new QTextEdit(layoutWidget4);
        textEdit_descrizione->setObjectName(QStringLiteral("textEdit_descrizione"));

        verticalLayout_descrizione->addWidget(textEdit_descrizione);

        layoutWidget5 = new QWidget(groupBox_aggiungivirus);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(170, 30, 151, 27));
        horizontalLayout_tipovirus = new QHBoxLayout(layoutWidget5);
        horizontalLayout_tipovirus->setSpacing(6);
        horizontalLayout_tipovirus->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_tipovirus->setObjectName(QStringLiteral("horizontalLayout_tipovirus"));
        horizontalLayout_tipovirus->setContentsMargins(0, 0, 0, 0);
        label_tipo = new QLabel(layoutWidget5);
        label_tipo->setObjectName(QStringLiteral("label_tipo"));
        label_tipo->setStyleSheet(QStringLiteral(""));

        horizontalLayout_tipovirus->addWidget(label_tipo);

        lineEdit_15 = new QLineEdit(layoutWidget5);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        horizontalLayout_tipovirus->addWidget(lineEdit_15);

        layoutWidget6 = new QWidget(groupBox_aggiungivirus);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(11, 81, 148, 77));
        gridLayout_2 = new QGridLayout(layoutWidget6);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_impatto = new QLabel(layoutWidget6);
        label_impatto->setObjectName(QStringLiteral("label_impatto"));
        label_impatto->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(label_impatto, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(layoutWidget6);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        gridLayout_2->addWidget(radioButton_2, 2, 0, 1, 1);

        radioButton_3 = new QRadioButton(layoutWidget6);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        gridLayout_2->addWidget(radioButton_3, 2, 1, 1, 1);

        radioButton = new QRadioButton(layoutWidget6);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        gridLayout_2->addWidget(radioButton, 1, 0, 1, 2);

        groupBox_log = new QGroupBox(groupBox_AdminVirus);
        groupBox_log->setObjectName(QStringLiteral("groupBox_log"));
        groupBox_log->setGeometry(QRect(20, 400, 331, 81));
        textBrowser_3 = new QTextBrowser(groupBox_log);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 30, 311, 41));
        groupBox_listavirus = new QGroupBox(tab3_AdminVirus);
        groupBox_listavirus->setObjectName(QStringLiteral("groupBox_listavirus"));
        groupBox_listavirus->setGeometry(QRect(20, 20, 331, 181));
        groupBox_listavirus->setStyleSheet(QStringLiteral("border: 1px solid black;"));
        textBrowser_2 = new QTextBrowser(groupBox_listavirus);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(15, 31, 301, 141));
        groupBox_modificavirus = new QGroupBox(tab3_AdminVirus);
        groupBox_modificavirus->setObjectName(QStringLiteral("groupBox_modificavirus"));
        groupBox_modificavirus->setGeometry(QRect(20, 210, 331, 281));
        groupBox_modificavirus->setStyleSheet(QStringLiteral(""));
        pushButton_modificavirus = new QPushButton(groupBox_modificavirus);
        pushButton_modificavirus->setObjectName(QStringLiteral("pushButton_modificavirus"));
        pushButton_modificavirus->setGeometry(QRect(240, 130, 81, 51));
        layoutWidget_4 = new QWidget(groupBox_modificavirus);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 200, 311, 71));
        verticalLayout_descrizione_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_descrizione_2->setSpacing(6);
        verticalLayout_descrizione_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_descrizione_2->setObjectName(QStringLiteral("verticalLayout_descrizione_2"));
        verticalLayout_descrizione_2->setContentsMargins(0, 0, 0, 0);
        label_descrizione_2 = new QLabel(layoutWidget_4);
        label_descrizione_2->setObjectName(QStringLiteral("label_descrizione_2"));

        verticalLayout_descrizione_2->addWidget(label_descrizione_2);

        textEdit_descrizione_2 = new QTextEdit(layoutWidget_4);
        textEdit_descrizione_2->setObjectName(QStringLiteral("textEdit_descrizione_2"));

        verticalLayout_descrizione_2->addWidget(textEdit_descrizione_2);

        layoutWidget_5 = new QWidget(groupBox_modificavirus);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(170, 90, 151, 27));
        horizontalLayout_tipo = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_tipo->setSpacing(6);
        horizontalLayout_tipo->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_tipo->setObjectName(QStringLiteral("horizontalLayout_tipo"));
        horizontalLayout_tipo->setContentsMargins(0, 0, 0, 0);
        label_tipo_2 = new QLabel(layoutWidget_5);
        label_tipo_2->setObjectName(QStringLiteral("label_tipo_2"));
        label_tipo_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_tipo->addWidget(label_tipo_2);

        lineEdit_tipo = new QLineEdit(layoutWidget_5);
        lineEdit_tipo->setObjectName(QStringLiteral("lineEdit_tipo"));

        horizontalLayout_tipo->addWidget(lineEdit_tipo);

        layoutWidget7 = new QWidget(groupBox_modificavirus);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(10, 90, 151, 27));
        horizontalLayout_nomevirus = new QHBoxLayout(layoutWidget7);
        horizontalLayout_nomevirus->setSpacing(6);
        horizontalLayout_nomevirus->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_nomevirus->setObjectName(QStringLiteral("horizontalLayout_nomevirus"));
        horizontalLayout_nomevirus->setContentsMargins(0, 0, 0, 0);
        label_nomevirus_3 = new QLabel(layoutWidget7);
        label_nomevirus_3->setObjectName(QStringLiteral("label_nomevirus_3"));
        label_nomevirus_3->setStyleSheet(QStringLiteral(""));

        horizontalLayout_nomevirus->addWidget(label_nomevirus_3);

        lineEdit_nomevirus_3 = new QLineEdit(layoutWidget7);
        lineEdit_nomevirus_3->setObjectName(QStringLiteral("lineEdit_nomevirus_3"));

        horizontalLayout_nomevirus->addWidget(lineEdit_nomevirus_3);

        label_nomeoldvirus = new QLabel(groupBox_modificavirus);
        label_nomeoldvirus->setObjectName(QStringLiteral("label_nomeoldvirus"));
        label_nomeoldvirus->setGeometry(QRect(10, 30, 211, 21));
        label_nomeoldvirus->setStyleSheet(QStringLiteral(""));
        lineEdit_nomeoldvirus = new QLineEdit(groupBox_modificavirus);
        lineEdit_nomeoldvirus->setObjectName(QStringLiteral("lineEdit_nomeoldvirus"));
        lineEdit_nomeoldvirus->setGeometry(QRect(230, 30, 90, 21));
        label_modificavirus = new QLabel(groupBox_modificavirus);
        label_modificavirus->setObjectName(QStringLiteral("label_modificavirus"));
        label_modificavirus->setGeometry(QRect(10, 60, 151, 20));
        label_modificavirus->setStyleSheet(QStringLiteral(""));
        layoutWidget_3 = new QWidget(groupBox_modificavirus);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 130, 221, 61));
        gridLayout_3 = new QGridLayout(layoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_4 = new QRadioButton(layoutWidget_3);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        gridLayout_3->addWidget(radioButton_4, 3, 0, 1, 1);

        radioButton_5 = new QRadioButton(layoutWidget_3);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        gridLayout_3->addWidget(radioButton_5, 3, 1, 1, 1);

        radioButton_6 = new QRadioButton(layoutWidget_3);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        gridLayout_3->addWidget(radioButton_6, 2, 0, 1, 2);

        label_impatto_2 = new QLabel(layoutWidget_3);
        label_impatto_2->setObjectName(QStringLiteral("label_impatto_2"));
        label_impatto_2->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(label_impatto_2, 1, 0, 1, 1);

        tabWidget->addTab(tab3_AdminVirus, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 771, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "VirusLab", 0));
        label_Titolo->setText(QApplication::translate("MainWindow", "VirusLab", 0));
        groupBox_ricercauser->setTitle(QApplication::translate("MainWindow", "RISULTATI RICERCA", 0));
        textEdit_benvenuto->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Benvenuto su VirusLab, inserisci il tuo username per iniziare la ricerca dei Virus , otterrai informazioni a seconda del tuo account</span></p></body></html>", 0));
        label_username->setText(QApplication::translate("MainWindow", "Username", 0));
        label_nomevirus->setText(QApplication::translate("MainWindow", "Nome del Virus:", 0));
        pushButton_ricerca->setText(QApplication::translate("MainWindow", "Ricerca", 0));
        label_benvenuto->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab1_User), QApplication::translate("MainWindow", "User", 0));
        groupBox_listautenti->setTitle(QApplication::translate("MainWindow", "Utenti", 0));
        groupBox_AdminUser->setTitle(QString());
        groupBox_rimozioneutente->setTitle(QApplication::translate("MainWindow", "RIMOZIONE UTENTE", 0));
        label_username_4->setText(QApplication::translate("MainWindow", "username:", 0));
        pushButton_rimozioneutente->setText(QApplication::translate("MainWindow", "ELIMINA", 0));
        groupBox_modificautente->setTitle(QApplication::translate("MainWindow", "MODIFICA USER", 0));
        textEdit_infomodificautente->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">inserire l'username dell'utente che si vuole promuovere, la promozione c'\303\250 solo in positivo :</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Free-&gt;Basic-&gt;Premium</p></body></html>", 0));
        label_username_3->setText(QApplication::translate("MainWindow", "username:", 0));
        pushButton_modificautente->setText(QApplication::translate("MainWindow", "MODIFICA", 0));
        groupBox_aggiungiutente->setTitle(QApplication::translate("MainWindow", "AGGIUNGI UTENTE", 0));
        label_username_2->setText(QApplication::translate("MainWindow", "username:", 0));
        pushButton_aggiungiutente->setText(QApplication::translate("MainWindow", "AGGIUNGI", 0));
        groupBox_log_2->setTitle(QApplication::translate("MainWindow", "LOG", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab2_AdminUser), QApplication::translate("MainWindow", "AdminUser", 0));
        groupBox_AdminVirus->setTitle(QString());
        groupBox_rimozionevirus->setTitle(QApplication::translate("MainWindow", "RIMOZIONE VIRUS", 0));
        label_id->setText(QApplication::translate("MainWindow", "id:", 0));
        pushButton_eliminavirus->setText(QApplication::translate("MainWindow", "ELIMINA", 0));
        groupBox_aggiungivirus->setTitle(QApplication::translate("MainWindow", "AGGIUNGI VIRUS", 0));
        pushButton_aggiungivirus->setText(QApplication::translate("MainWindow", "AGGIUNGI", 0));
        label_nomevirus_2->setText(QApplication::translate("MainWindow", "nome:", 0));
        label_descrizione->setText(QApplication::translate("MainWindow", "descrizione:", 0));
        label_tipo->setText(QApplication::translate("MainWindow", "tipo:", 0));
        label_impatto->setText(QApplication::translate("MainWindow", "impatto:", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "medio", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "basso", 0));
        radioButton->setText(QApplication::translate("MainWindow", "elevato", 0));
        groupBox_log->setTitle(QApplication::translate("MainWindow", "LOG", 0));
        groupBox_listavirus->setTitle(QApplication::translate("MainWindow", "LISTA VIRUS:", 0));
        groupBox_modificavirus->setTitle(QApplication::translate("MainWindow", "MODIFICA VIRUS", 0));
        pushButton_modificavirus->setText(QApplication::translate("MainWindow", "MODIFICA", 0));
        label_descrizione_2->setText(QApplication::translate("MainWindow", "descrizione:", 0));
        label_tipo_2->setText(QApplication::translate("MainWindow", "tipo:", 0));
        label_nomevirus_3->setText(QApplication::translate("MainWindow", "nome:", 0));
        label_nomeoldvirus->setText(QApplication::translate("MainWindow", "nome del virus da modificare:", 0));
        label_modificavirus->setText(QApplication::translate("MainWindow", "inserisci i nuovi dati:", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "medio", 0));
        radioButton_5->setText(QApplication::translate("MainWindow", "basso", 0));
        radioButton_6->setText(QApplication::translate("MainWindow", "elevato", 0));
        label_impatto_2->setText(QApplication::translate("MainWindow", "impatto:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab3_AdminVirus), QApplication::translate("MainWindow", "AdminVirus", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
