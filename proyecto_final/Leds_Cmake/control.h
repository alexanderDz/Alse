/**
 * @file control.h
 * @date 09/05/2019
 * @brief Declaracion de la clase control.
 *
 * Conjunto de funciones con el fin de registrar las
 * acciones de los usuarios registrados y enviarlas
 * a una base de datos local.
 */

#ifndef CONTROL_H
#define CONTROL_H

#include <wiringPi.h>
#include <string>
#include <QTimer>
#include <QDialog>
#include<QMessageBox>
#include"db_local.h"

using namespace std;

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
     * @brief SetUsername Permite registrar el username del usuario.
     * @param usr Username del usuario que inicia sesión en la aplicacion.
     */
    void SetUsername(string usr){username = usr;}

private slots:
    /**
     * @brief on__cmdSt_1_clicked Función para cambiar el estado de los leds.
     */
    void on__cmdSt_1_clicked();

    /**
     * @brief on__cmdSt_2_clicked Función para cambiar el estado de los leds.
     */
    void on__cmdSt_2_clicked();

    /**
     * @brief on__cmdSt_3_clicked Función para cambiar el estado de los leds.
     */
    void on__cmdSt_3_clicked();

    /**
     * @brief on__cmdLog_out_clicked Cierra la sesion en la aplicaión y
     * envia las acciones del usuario a una base de datos local.
     */
    void on__cmdLog_out_clicked();

    void updatetimer();



private:
    Ui::Control *ui;
    string username;  /**< Variable donde se almacena el username que inicio sesión en la aplicación. */
    QTimer *inter;
};

#endif // CONTROL_H
