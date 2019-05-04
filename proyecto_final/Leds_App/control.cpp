#include "control.h"
#include "ui_control.h"

#define Path_to_DB "../data_base/user.db"

using namespace std;
enum estado{
    A,
    B,
    C,
    D
};

estado est = A;

Control::Control(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
    //wiringPiSetup();
}

Control::~Control()
{
    delete ui;

}

void Control::on__cmdSt_1_clicked()
{
    counterB1++;

    if (est == A){
            est = B;
        }else if (est == B){
            est = A;
        }else if (est == C){
            est = C;
        }else if (est == D){
            est = D;
        }
//    pinMode(0,OUTPUT);
//    pinMode(1,OUTPUT);
//    pinMode(2,OUTPUT);

    switch (est){
        case A:
//            digitalWrite(0,LOW);
//            digitalWrite(1,LOW);
//            digitalWrite(2,LOW);
        break;
        case B:
//            digitalWrite(0,LOW);
//            digitalWrite(1,LOW);
//            digitalWrite(2,LOW);
//            delay(50);
//            digitalWrite(0,HIGH);
//            digitalWrite(1,HIGH);
//            digitalWrite(2,HIGH);
        break;
        case C:
//            digitalWrite(0,HIGH);
//            delay(20);
//            digitalWrite(0,LOW);
//            digitalWrite(1,HIGH);
//            delay(20);
//            digitalWrite(1,LOW);
//            digitalWrite(2,HIGH);
//            delay(20);
//            digitalWrite(2,LOW);
        break;
        case D:
//        digitalWrite(2,HIGH);
//        delay(20);
//        digitalWrite(2,LOW);
//        digitalWrite(1,HIGH);
//        delay(20);
//        digitalWrite(1,LOW);
//        digitalWrite(0,HIGH);
//        delay(20);
//        digitalWrite(0,LOW);

        break;
    }
}

void Control::on__cmdSt_2_clicked()
{
    counterB2++;


    if (est == A){
            est = A;
        }else if (est == B){
            est = C;
        }else if (est == C){
            est = B;
        }else if (est == D){
            est = B;
        }
}

void Control::on__cmdSt_3_clicked()
{
    counterB3++;

    if (est == A){
            est = A;
        }else if (est == B){
            est = B;
        }else if (est == C){
            est = D;
        }else if (est == D){
            est = D;
        }
}


void Control::on__cmdLog_out_clicked()
{
  if(counterB1 == 0 && counterB2 == 0 && counterB3 == 0){
      this->close();
  }
  else{
    QSqlDatabase db;
    QSqlQuery query;
    QDateTime local = QDateTime::currentDateTime();
    db.setDatabaseName(Path_to_DB);
    query.prepare("INSERT INTO sensor(date, user, buttom_1, buttom_2, buttom_3)""VALUES(:date, :user, :cb_1, :cb_2, :cb_3)");
    query.bindValue(":date",local.toString());
    query.bindValue(":user",username);
    query.bindValue(":cb_1",counterB1);
    query.bindValue(":cb_2",counterB2);
    query.bindValue(":cb_3",counterB3);
    if(query.exec()){
       QMessageBox::information(this,"CONTROL","DATOS INSERTADOS CORRECTAMENTE");
       }else{
       QMessageBox::information(this,"CONTROL","DATOS NO INSERTADOS");
        }
    db.close();
    db.removeDatabase(db.connectionName());
    this->close();
  }
}


