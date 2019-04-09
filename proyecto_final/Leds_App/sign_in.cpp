#include "sign_in.h"
#include "ui_sign_in.h"

Sign_in::Sign_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sign_in)
{
    ui->setupUi(this);
}

Sign_in::~Sign_in()
{
    delete ui;
}
