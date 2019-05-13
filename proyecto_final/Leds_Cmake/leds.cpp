#include "leds.h"
#include "ui_leds.h"

#include<sqlite3.h>
#include<QDebug>
#include<iostream>
#include<sstream>
#include"db_local.h"

#define Path_to_DB "../data_base/user.db"

using namespace std;

Leds::Leds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leds)
{
    ui->setupUi(this);
    db_local a;
    if(a.open_database())
        ui->label_info->setText("DATA BASE OPEN SUCCESSFULLY");
    else
        ui->label_info->setText("FAILED TO OPEN DATABASE");
    a.close_database();
}

Leds::~Leds()
{
    delete ui;

}

// FALTA ARREGLAR ESTA FUNCIÓN USANDO CODIGO DE SQLITE3
void Leds::on__cmdLog_in_clicked()
{
    char *zErrMsg = 0;
    QString username = ui->_txtUsr_name->text();
    QString password = ui->_txtPswd->text();
    string usr = username.toStdString();
    string psswd =password.toStdString();
    rc = sqlite3_open(Path_to_DB,&db);
    if(rc != SQLITE_OK){
        qDebug()<<"FAILED TO OPEN";
    }
    else{
        stringstream sqlstream;
        sqlstream << "SELECT * ";
        sqlstream << "FROM usuario WHERE user_name = ' ";
        sqlstream << usr <<"' AND password = ' ";
        sqlstream << psswd <<"' ;";
        rc = sqlite3_exec(db, sqlstream.str().c_str(),0,0, &zErrMsg);
        if( rc != SQLITE_OK ){
            ui->_txtUsr_name->setText("");
            ui->_txtPswd->setText("");
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           }
        else{
            ui->_txtUsr_name->setText("");
            ui->_txtPswd->setText("");
            control = new Control(this);
            control->SetUsername(username);
            control->setModal(true);
            this->hide();
            control->exec();
            if(control->close())
                this->show();
        }
    }
    sqlite3_close(db);

}

void Leds::on__cmdSign_in_clicked()
{
    r = new Register(this);
    r->show();
}

static int callback(void *data, int argc, char **argv, char **azColName){
   int i;
   fprintf(stderr, "%s: ", (const char*)data);

   for(i = 0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }

   printf("\n");
   return 0;
}
