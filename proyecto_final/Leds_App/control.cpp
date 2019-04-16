#include "control.h"
#include "ui_control.h"

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
}

Control::~Control()
{
    delete ui;
}

void Control::on__cmdSt_1_clicked()
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

    //    switch (est)
}

void Control::on__cmdSt_2_clicked()
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
}

void Control::on__cmdSt_3_clicked()
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
}
