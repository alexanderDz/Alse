#include "leds.h"
#include "ui_leds.h"


Leds::Leds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Leds)
{
    ui->setupUi(this);
    if(db.open_database())
        ui->label_info->setText("DATABASE OPEN SUCCESSFULLY");
    else
        ui->label_info->setText("FAILED TO OPEN DATABASE");
    db.close_database();
}

Leds::~Leds()
{
    delete ui;

}

// FALTA ARREGLAR ESTA FUNCIÓN USANDO CODIGO DE SQLITE3
void Leds::on__cmdLog_in_clicked()
{
    string username = ui->_txtUsr_name->text().toStdString();
    string password = ui->_txtPswd->text().toStdString();
    if(username != "" && password != ""){
        ui->_txtUsr_name->setText("");
        ui->_txtPswd->setText("");
        control = new Control(this);
        control->SetUsername(username);
        this->hide();
        control->exec();
        if(control->close())
            this->show();
    }else{
        ui->_txtUsr_name->setText("");
        ui->_txtPswd->setText("");
    }

}

void Leds::on__cmdSign_in_clicked()
{
    r = new Register(this);
    r->show();
}
