#include "control.h"
#include "ui_control.h"
#include <QTimer>
#include <iostream>
#include <wiringPi.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

using namespace std;
enum estado{
    A,
    B,
    C,
    D
};
estado est = A;
int counterB1 = 0; /**< Variable que almacena la cantidad de veces que se presiona el primer boton. */
int counterB2 = 0; /**< Variable que almacena la cantidad de veces que se presiona el segundo boton. */
int counterB3 = 0; /**< Variable que almacena la cantidad de veces que se presiona el tercer boton. */



void button1(void){
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
    delay(100);
}

void button2(void){
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
    delay(100);
}

void button3(void){
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
    delay(100);
}


Control::Control(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
    wiringPiSetup();
    estado est = A;
    pinMode(27,INPUT);
    pinMode(28,INPUT);
    pinMode(29,INPUT);
    inter = 0;
    inter = new QTimer(this);
    inter->start(300);
    connect(inter,SIGNAL(timeout() ),this,SLOT(updatetimer() ) );
    wiringPiISR (27,INT_EDGE_RISING, &button1);
    wiringPiISR(28,INT_EDGE_RISING, &button2);
    wiringPiISR(29,INT_EDGE_RISING, &button3);
}

Control::~Control()
{
    pinMode( 0, OUTPUT );
    digitalWrite( 0, LOW );
    pinMode( 1, OUTPUT );
    digitalWrite( 1, LOW );
    pinMode( 2, OUTPUT );
    digitalWrite( 2, LOW );
    pinMode( 27, OUTPUT );
    digitalWrite( 0, LOW );
    pinMode( 28, OUTPUT );
    digitalWrite( 1, LOW );
    pinMode( 29, OUTPUT );
    digitalWrite( 2, LOW );

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
    inter->start(300);
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
    inter->start(300);
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
    inter->start(300);
}

void Control::on__cmdLog_out_clicked()
{
    digitalWrite( 0, LOW );
    digitalWrite( 1, LOW );
    digitalWrite( 2, LOW );
if(counterB1 == 0 && counterB2 == 0 && counterB3 == 0)
    this->close();
else{
    db_local db;
    db.open_database();
    if(db.insertData(username, counterB1,counterB2, counterB3))
        QMessageBox::information(this,"CONTROL","DATOS INSERTADOS CORRECTAMENTE");
    else
        QMessageBox::information(this,"CONTROL","LOS DATOS NO FUERON INSERTADOS");
    db.close_database();
    counterB1 = 0;
    counterB2 = 0;
    counterB3 = 0;
    this->close();
}

}


void Control::updatetimer(){
    pinMode(0,OUTPUT);
    pinMode(1,OUTPUT);
    pinMode(2,OUTPUT);
    switch (est){
        case A:
            digitalWrite(0,LOW);
            digitalWrite(1,LOW);
            digitalWrite(2,LOW);
        break;
        case B:
            digitalWrite(0,LOW);
            digitalWrite(1,LOW);
            digitalWrite(2,LOW);
            delay(300);
            digitalWrite(0,HIGH);
            digitalWrite(1,HIGH);
            digitalWrite(2,HIGH);
        break;
        case C:
            digitalWrite(1,LOW);
            digitalWrite(2,LOW);
            digitalWrite(0,HIGH);
            delay(50);
            digitalWrite(0,LOW);
            delay(50);
            digitalWrite(1,HIGH);
            delay(50);
            digitalWrite(1,LOW);
            delay(50);
            digitalWrite(2,HIGH);
            delay(50);
            digitalWrite(2,LOW);
            delay(50);
        break;
        case D:
            digitalWrite(1,LOW);
            digitalWrite(0,LOW);
            digitalWrite(2,HIGH);
            delay(50);
            digitalWrite(2,LOW);
            delay(50);
            digitalWrite(1,HIGH);
            delay(50);
            digitalWrite(1,LOW);
            delay(50);
            digitalWrite(0,HIGH);
            delay(50);
            digitalWrite(0,LOW);
            delay(50);
        break;
    }
    inter->start(30);

}


