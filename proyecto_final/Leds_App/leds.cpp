#include "leds.h"
#include "ui_leds.h"
#include "sign_in.h"
#include "control_leds.h"


leds::leds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::leds)
{
    ui->setupUi(this);
}

leds::~leds()
{
    delete ui;
}

void leds::on__cmdSignUp_clicked()
{
 Sign_in sign_in;
 sign_in.setModal(true);
 sign_in.show();
 sign_in.exec();
}

void leds::on__cmdLog_in_clicked()
{
 control_leds control;
 control.setModal(true);
 control.show();
 control.exec();
}
