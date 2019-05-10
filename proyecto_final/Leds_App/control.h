/**
 * @file control.h
 * @date 09/05/2019
 * @brief Declaracion de la clase control
 *
 * Conjunto de funciones con el fin de registrar las
 * acciones de los usuarios registrados y enviarlas
 * a una base de datos local.
 */

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

    /**
     * @brief SetUsername Permite registrar el username del usuario
     * @param usr Username del usuario que inicia sesión en la aplicacion
     */
    void SetUsername(QString usr){username = usr;}

private slots:
    void on__cmdSt_1_clicked();

    void on__cmdSt_2_clicked();

    void on__cmdSt_3_clicked();

    /**
     * @brief on__cmdLog_out_clicked Cierra la sesion en la aplicaión y
     * envia las acciones del usuario a una base de datos local
     */
    void on__cmdLog_out_clicked();


private:
    Ui::Control *ui;
    QString username;  /**< Variable donde se almacena el username que inicio sesión en la aplicación */
    int counterB1 = 0; /**< Variable que almacena la cantidad de veces que se presiona el primer boton */
    int counterB2 = 0; /**< Variable que almacena la cantidad de veces que se presiona el segundo boton */
    int counterB3 = 0; /**< Variable que almacena la cantidad de veces que se presiona el tercer boton */
};

#endif // CONTROL_H
