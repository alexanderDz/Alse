#include "division.h"
#include "ui_division.h"
#include <string.h>

using namespace std;



Division::Division(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Division)
{
    ui->setupUi(this);
}

Division::~Division()
{
    delete ui;
}

void Division::on_buttonBox_accepted()
{
    bool first = ui->_rdbPol1->isChecked() ? true : false;
    float divi = ui->_txtDivisor->text().toFloat();
    emit enviaDatos( first, divi );

}

void Division::on__txtDivisor_textEdited(const QString &arg1)
{
    string a;
}
