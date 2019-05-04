#ifndef CONTROL_H
#define CONTROL_H

//#include <WiringPi.h>

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>


namespace Ui {
class Control;
}

class Control : public QDialog
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = 0);
    ~Control();

public slots:
    void SetUsername(QString usr){username = usr;};

private slots:
    void on__cmdSt_1_clicked();

    void on__cmdSt_2_clicked();

    void on__cmdSt_3_clicked();

    void on__cmdLog_out_clicked();


private:
    Ui::Control *ui;
    QString username;
    int counterB1 = 0;
    int counterB2 = 0;
    int counterB3 = 0;
};

#endif // CONTROL_H
