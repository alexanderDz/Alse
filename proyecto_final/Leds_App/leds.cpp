#include "leds.h"
#include "ui_leds.h"

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
