#ifndef LEDS_H
#define LEDS_H

#include <QMainWindow>

#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include<QSqlDatabase>
#include<QMessageBox>
#include<register.h>
#include"control.h"
#include"register.h"

namespace Ui {
class Leds;
}

class Leds : public QMainWindow
{
    Q_OBJECT

public:
    explicit Leds(QWidget *parent = 0);
    ~Leds();


private slots:
    void on__cmdLog_in_clicked();

    void on__cmdSign_in_clicked();


private:
    Ui::Leds *ui;
    QSqlDatabase db;
    QString Log_usr;
    QString Log_psswd;
    Register *r;
    Control *control;
};

#endif // LEDS_H
