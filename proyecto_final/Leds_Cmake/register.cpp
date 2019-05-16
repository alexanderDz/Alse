#include "register.h"
#include "ui_register.h"
#include"db_local.h"
#include<QMessageBox>

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
    if(first_name != "" && last_name != "" && national_id != 0 && user_name != "" && psswd != "" && b_date.toString() != ""){
        db_local a;
        sqlite3 *db;
        string path1 = "../data_base/user.db";
        sqlite3_open(path1.c_str(),&db);
        if( a.insertUser(first_name, last_name, national_id, user_name, psswd, b_date, age) )
            QMessageBox::information(this,"REGISTRO","DATOS INSERTADOS CORRECTAMENTE");
    }else{
        QMessageBox::information(this,"REGISTRO","POR FAVOR LLENE TODOS LOS CAMPOS");
        this->close();
    }
}

int Register::calcular_edad(QDate bd)
{
    int age = QDate::currentDate().year() - bd.year();
    if(bd.month() > QDate::currentDate().month() || (bd.month() == QDate::currentDate().month() && bd.day() > QDate::currentDate().day() ) )
        age-- ;
    return age;


}

