#include "polinomios.h"
#include "ui_polinomios.h"
#include"../polinomios/Polinomio.h"
#include<division.h>

Polinomios::Polinomios(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Polinomios)
{
    ui->setupUi(this);
    ui->_txtPol1->setText("2X^2+5X-6");
    ui->_txtPol2->setText("15X+8+3X^3");
}

Polinomios::~Polinomios()
{
    delete ui;
}

void Polinomios::on__cmdSuma_clicked()
{
   Polinomio a(ui->_txtPol1->text().toStdString());
   Polinomio b(ui->_txtPol2->text().toStdString());
   Polinomio res( (a + b).getString() );
   ui->_txtRes->setText( QString(res.getString().c_str() ));
}

void Polinomios::on__cmdResta_clicked()
{
    Polinomio a( ui->_txtPol1->text().toStdString() );
    Polinomio b( ui->_txtPol2->text().toStdString() );
    Polinomio res( (a - b).getString() );
    ui->_txtRes->setText( QString(res.getString().c_str()) );
}

void Polinomios::on__cmdMulti_clicked()
{
    Polinomio a( ui->_txtPol1->text().toStdString() );
    Polinomio b( ui->_txtPol2->text().toStdString() );
    Polinomio res( (a * b).getString() );
    ui->_txtRes->setText( QString(res.getString().c_str()) );
}

void Polinomios::on__cmdDivsion_clicked()
{
    Division a(this);
    connect (&a, &Division::enviaDatos, this, &Polinomios::recibeDatos);
    a.show();
    a.exec();
}

void Polinomios::recibeDatos(bool first, float divisor){
    Polinomio a;
    if(first)
         a.redefinir( ui->_txtPol1->text().toStdString() );
    else
        a.redefinir( ui->_txtPol2->text().toStdString() );
    ui->_txtRes->setText( (a/divisor).getString().c_str());

}

