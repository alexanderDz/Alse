#include "leds.h"
#include "ui_leds.h"

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
        ui->label_info->setText("DATABASE OPEN SUCCESSFULLY");
    }
}

Leds::~Leds()
{
    delete ui;

}


void Leds::on__cmdLog_in_clicked()
{
 QString username = ui->_txtUsr_name->text();
 QString password = ui->_txtPswd->text();
 QSqlQuery query;
 if(db.open()){
     if(query.exec(" SELECT * FROM usuario WHERE user_name = '"+username+"' AND password = '"+password+"' ")){
         int count = 0;
         while(query.next()){
             count++;
         }
         if(count == 1){
             ui->_txtUsr_name->setText("");
             ui->_txtPswd->setText("");
             this->hide();
             control = new Control(this);
             control->exec();
             if(control->close()){
                 this->show();
             }

         }
         if(count < 1){
             QMessageBox::information(this,"Log in","USUARIO O CONTRASEÑA INCORRECTOS");
             ui->_txtUsr_name->setText("");
             ui->_txtPswd->setText("");
         }
     }

 }else{
    QMessageBox::information(this,"CONNECTION","DATABASE CONNECTION FAILED");
 }


}

void Leds::on__cmdSign_in_clicked()
{ 
    r = new Register(this);
    r->show();
}

