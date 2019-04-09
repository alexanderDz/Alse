#include "control_leds.h"
#include "ui_control_leds.h"

control_leds::control_leds(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::control_leds)
{
    ui->setupUi(this);
}

control_leds::~control_leds()
{
    delete ui;
}
