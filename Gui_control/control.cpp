#include "control.h"
#include "ui_control.h"
#include <QTimer>
#include <wiringPi.h>
#include <iostream>

using namespace std;
enum estado{
    A,
    B,
    C,
    D
};

estado est = A;

Control::Control(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
    wiringPiSetup();
    inter = 0;
    inter = new QTimer(this);
    connect(inter,SIGNAL(timeout() ),this,SLOT(updateTimer() ) );
}

Control::~Control()
{
    pinMode( 0, OUTPUT );
    digitalWrite( 0, LOW );
    pinMode( 1, OUTPUT );
    digitalWrite( 1, LOW );
    pinMode( 2, OUTPUT );
    digitalWrite( 2, LOW );
    delete ui;
}

void Control::on_button_1_clicked()
{
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

void Control::on_button_2_clicked()
{
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

void Control::on_button_3_clicked()
{
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
