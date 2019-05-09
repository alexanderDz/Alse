#ifndef CONTROL_H
#define CONTROL_H

//#include <wiringPi.h>

#include <QDialog>
#include<QtSql/QtSql>
#include<QtSql/QSqlDatabase>
#include<QMessageBox>
#include <QTimer>


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
    void SetUsername(QString usr){username = usr;}

private slots:
    void on__cmdSt_1_clicked();

    void on__cmdSt_2_clicked();

    void updateTimer();

    void on__cmdSt_3_clicked();

    void on__cmdLog_out_clicked();


private:
    Ui::Control *ui;
    QString username;
    QTimer *inter;
    int counterB1 = 0;
    int counterB2 = 0;
    int counterB3 = 0;
};

#endif // CONTROL_H
