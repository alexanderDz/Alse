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
        ui->label_info->setText("DATABASE OPEN SUCCESFULLY");
        //query = new QSqlQuery();
    }
}

Leds::~Leds()
{
    delete ui;
    //delete r;

}


void Leds::on__cmdLog_in_clicked()
{
 QString username = ui->_txtUsr_name->text();
 QString password = ui->_txtPswd->text();
 QSqlQuery query;
 control = new Control(this);
 if(db.open()){
     if(query.exec(" SELECT * FROM usuario WHERE user_name = '"+username+"' AND password = '"+password+"' ")){
         int count = 0;
         while(query.next()){
             count++;
         }
         if(count == 1){
             this->hide();
             ui->_txtUsr_name->setText("");
             ui->_txtPswd->setText("");
             control->exec();
             if(control->close())
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
    r = new Register(this);
    r->show();
}

