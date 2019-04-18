#include "leds.h"
#include "ui_leds.h"
#include<QString>
#include<string.h>
#include "control.h"


#define Path_to_DB "../data_base/user.db"

using namespace std;

Leds::Leds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leds)
{
    ui->setupUi(this);


    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(Path_to_DB);
    if(!db.open())
        ui->label_info->setText("FAILED TO OPEN DATABASE");
    else{
        ui->label_info->setText("DATABASE OPEN SUCCESFULLY");
        query = new QSqlQuery();
    }
}

Leds::~Leds()
{
    delete ui;
    db.close();
}


void Leds::on__cmdLog_in_clicked()
{
 QString username = ui->_txtUsr_name->text();
 QString password = ui->_txtPswd->text();
 if(db.open()){
     if(query->exec(" SELECT * FROM usuario WHERE user_name = '"+username+"' AND password = '"+password+"' ")){
         int count = 0;
         while(query->next()){
             count++;
         }
         if(count == 1){
             ui->label_info->setText("Login Correct");
             this->hide();
             ui->_txtUsr_name->setText("");
             ui->_txtPswd->setText("");
             Control control;
             control.setModal(true);
             control.exec();
             if(control.close())
                 this->show();
         }
         if(count < 1){
             QMessageBox::information(this,"Log in","USUARIO O CONTRASEÑA INCORRECTOS");
         }
     }

 }else{
    QMessageBox::information(this,"Database Failed","DATABASE CONNECTION FAILED");
 }


}

void Leds::on__cmdSign_in_clicked()
{
  QString first_name = ui->_txtR_name->text();
  QString last_name = ui->_txtR_LsName->text();
  QString national_id = ui->_txtR_national_id->text();
  QString user_name = ui->_txtR_usrnm->text();
  QString psswd = ui->_txtR_psswd->text();
  query->prepare("INSERT INTO usuario(Nombre,Apellido,national_id,user_name,password)"
                 "VALUES(:first_name, :last_name, :national_id, :user_name, :psswd)");

  query->bindValue(":first_name",first_name);
  query->bindValue(":last_name",last_name);
  query->bindValue(":national_id",national_id.toInt());
  query->bindValue(":user_name",user_name);
  query->bindValue(":psswd",psswd);

if(first_name == "" && last_name == "" && national_id == "" && user_name == "" && psswd == "")
    QMessageBox::information(this,"REGISTRO","POR FAVOR LLENE TODOS LOS CAMPOS");
else{
  if(query->exec()){
     QMessageBox::information(this,"REGISTRO","DATOS INSERTADOS CORRECTAMENTE");
     ui->_txtR_name->setText("");
     ui->_txtR_LsName->setText("");
     ui->_txtR_national_id->setText("");
     ui->_txtR_usrnm->setText("");
     ui->_txtR_psswd->setText("");
     }else{
     QMessageBox::information(this,"REGISTRO","LOS DATOS NO FUERON INSERTADOS");
      }
}



}
