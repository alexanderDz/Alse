#include "register.h"
#include "ui_register.h"

#define Path_to_DB "../data_base/user.db"

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
    first_name = a;
}

void Register::on__txtR_LsName_textEdited(const QString &arg1)
{
    QString a = arg1;
    last_name = a;
}

void Register::on__txtR_national_id_textEdited(const QString &arg1)
{
    QString a = arg1;
    national_id = a.toInt();
}

void Register::on__txtR_usrnm_textEdited(const QString &arg1)
{
    QString a = arg1;
    user_name = a;
}

void Register::on__txtR_psswd_textEdited(const QString &arg1)
{
    QString a = arg1;
    psswd = a;
}

void Register::on__birthdate_dateChanged(const QDate &date)
{
    b_date = date;
    age = calcular_edad(b_date);

}

void Register::on_buttonBox_accepted()
{
    QSqlDatabase db;
    db.setDatabaseName(Path_to_DB);
    QSqlQuery query;
    query.prepare("INSERT INTO usuario(Nombre,Apellido,national_id,user_name,password,birth_date,age)"
                   "VALUES(:first_name, :last_name, :national_id, :user_name, :psswd, :birth_date,:age)");

    query.bindValue(":first_name",first_name);
    query.bindValue(":last_name",last_name);
    query.bindValue(":national_id",national_id);
    query.bindValue(":user_name",user_name);
    query.bindValue(":psswd",psswd);
    query.bindValue(":birth_date",b_date);
    query.bindValue(":age",age);

    if(query.exec()){
       QMessageBox::information(this,"REGISTRO","DATOS INSERTADOS CORRECTAMENTE");
       }else{
       QMessageBox::information(this,"REGISTRO","POR FAVOR LLENE TODOS LOS CAMPOS");
        }
    db.close();
    db.removeDatabase(db.connectionName());
}

int Register::calcular_edad(QDate bd)
{
    int age = QDate::currentDate().year() - bd.year();
    if(bd.month() > QDate::currentDate().month() || (bd.month() == QDate::currentDate().month() && bd.day() > QDate::currentDate().day() ) )
        age-- ;
    return age;


}

