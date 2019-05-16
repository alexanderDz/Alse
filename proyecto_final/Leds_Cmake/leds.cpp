#include "leds.h"
#include "ui_leds.h"
#include <iostream>
using namespace std;

string pswtemp;
void settemp(char* b){
    pswtemp = b;

}
/**
 * @param path
 */
static int callback(void* data, int argc, char** argv, char** azColName)
{
    int i;
    fprintf(stderr, "%s: ", (const char*)data);
    for (i = 0; i < argc; i++) {
        //printf("%s = %s\n",azColName[i],argv[i] ? argv[i] : " NULL");
        settemp(argv[i]);
        //cout << argv[i];
    }
    return 0;
}


Leds::Leds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leds)
{
    ui->setupUi(this);
    if(db.open_database())
        ui->label_info->setText("DATABASE OPEN SUCCESSFULLY");
    else
        ui->label_info->setText("FAILED TO OPEN DATABASE");
   db.close_database();
}

Leds::~Leds()
{
    delete ui;

}

// FALTA ARREGLAR ESTA FUNCIÓN USANDO CODIGO DE SQLITE3
void Leds::on__cmdLog_in_clicked()
{
    int rc;
    char *zErrMsg = 0;
    sqlite3 *db;
    string path1 = "../data_base/user.db";
    rc = sqlite3_open(path1.c_str(),&db);
    if( rc != SQLITE_OK)
       ui->label_info->setText("Can't opened database successfully.");

    stringstream sqlstream;
    string username = ui->_txtUsr_name->text().toStdString();
    string password = ui->_txtPswd->text().toStdString();

    /* Create SQL statement */
    sqlstream << "SELECT password from usuario where user_name = '";
    sqlstream << username << "'";

    string sql( sqlstream.str() );
    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql.c_str(), callback , NULL, &zErrMsg);
    if( rc != SQLITE_OK ){
       fprintf(stderr, "SQL error: %s\n", zErrMsg);
    }
    if(pswtemp == password && (password != "")){
        ui->_txtUsr_name->setText("");
        ui->_txtPswd->setText("");
        control = new Control(this);
        control->SetUsername(username);
        this->hide();
        control->exec();
        if(control->close())
            this->show();

    }else if(password == ""){
        ui->message_user->setText("Usuario no registrado.");
        ui->_txtUsr_name->setText("");
        ui->_txtPswd->setText("");
    }else if (pswtemp != password) {
        ui->_txtUsr_name->setText("");
        ui->_txtPswd->setText("");
        ui->message_user->setText("wrong password");
    }




}

void Leds::on__cmdSign_in_clicked()
{
    r = new Register(this);
    r->show();
}
