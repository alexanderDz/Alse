#include "register.h"
#include "ui_register.h"

#include<sqlite3.h>
#include<sstream>
#include<QDebug>
#include<iostream>

#define Path_to_DB "../data_base/user.db"

using namespace std;

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on__txtR_name_textEdited(const QString &arg1)
{
    QString a = arg1;
    first_name = a.toStdString();
}

void Register::on__txtR_LsName_textEdited(const QString &arg1)
{
    QString a = arg1;
    last_name = a.toStdString();
}

void Register::on__txtR_national_id_textEdited(const QString &arg1)
{
    QString a = arg1;
    national_id = a.toInt();
}

void Register::on__txtR_usrnm_textEdited(const QString &arg1)
{
    QString a = arg1;
    user_name = a.toStdString();
}

void Register::on__txtR_psswd_textEdited(const QString &arg1)
{
    QString a = arg1;
    psswd = a.toStdString();
}

void Register::on__birthdate_dateChanged(const QDate &date)
{
    b_date = date;
    age = calcular_edad(b_date);

}

void Register::on_buttonBox_accepted()
{
    int rc;
    sqlite3 *db;
    const char* data = "Callback function called";
    char *zErrMsg = 0;
    rc = sqlite3_open(Path_to_DB,&db);
    if(rc != SQLITE_OK){
        qDebug()<<"FAILED TO OPEN";
    }
    else{
        stringstream sqlstream;
        sqlstream << "INSERT INTO usuario(Nombre,Apellido,national_id,user_name,password,";
        sqlstream << " birth_date,age) VALUES ( ' " ;
        sqlstream << first_name << "' , ' " << last_name << "' , ' " << national_id << "' , ' ";
        sqlstream << user_name << "' , ' "  << psswd << "' , ' " << b_date.toString().toStdString() << "' , '" << age << " ' ";
        sqlstream << "); " ;
        rc = sqlite3_exec(db, sqlstream.str().c_str(), 0, 0, &zErrMsg);
        if( rc != SQLITE_OK ){
           fprintf(stderr, "SQL error: %s\n", zErrMsg);
           sqlite3_free(zErrMsg);
           }
        }
    sqlite3_close(db);
}




int Register::calcular_edad(QDate bd)
{
    int age = QDate::currentDate().year() - bd.year();
    if(bd.month() > QDate::currentDate().month() || (bd.month() == QDate::currentDate().month() && bd.day() > QDate::currentDate().day() ) )
        age-- ;
    return age;


}

