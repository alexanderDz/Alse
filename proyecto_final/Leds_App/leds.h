#ifndef LEDS_H
#define LEDS_H

#include <QMainWindow>

#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include<QSqlDatabase>
#include<QMessageBox>

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
    QSqlQuery *query;
};

#endif // LEDS_H
