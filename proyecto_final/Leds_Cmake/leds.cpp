#include "leds.h"
#include "ui_leds.h"

#include<sqlite3.h>
#include<QDebug>
#include<iostream>
#include<sstream>


#define Path_to_DB "../data_base/user.db"

using namespace std;

Leds::Leds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leds)
{
    ui->setupUi(this);
    rc = sqlite3_open(Path_to_DB,&db);
    if(SQLITE_OK != rc)
        ui->label_info->setText("FAILED TO OPEN DATABASE");
    else
        ui->label_info->setText("DATA BASE OPEN SUCCESSFULLY");
    sqlite3_close(db);


}

Leds::~Leds()
{
    delete ui;

}


void Leds::on__cmdLog_in_clicked()
{
    //int rc;
    //sqlite3 *db;
    const char* data = "Callback function called";
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
        rc = sqlite3_exec(db, sqlstream.str().c_str(), 0, 0, &zErrMsg);
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
