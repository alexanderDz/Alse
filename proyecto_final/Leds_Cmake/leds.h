/**
 * @file leds.h
 * @date 09/05/2019
 * @brief Declaracion de la clase leds
 *
 * Conjunto de funciones que conforman la ventana principal
 * de la aplicación.
 */

#ifndef LEDS_H
#define LEDS_H

#include <QMainWindow>
#include<sqlite3.h>
#include"register.h"
#include"control.h"



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
    /**
     * @brief on__cmdLog_in_clicked Función que verifica los datos de inicio de sesíon
     */
    void on__cmdLog_in_clicked();

    /**
     * @brief on__cmdSign_in_clicked Función para registrar nuevos usuarios
     */
    void on__cmdSign_in_clicked();

private:
    Ui::Leds *ui;
    int rc;
    sqlite3 *db;/**< Variable que maneja la conexión con la base de datos */
    Register *r;/**< Variable para generar la ventana de registro */
    Control *control; /**< Variable para generar la vetana de control de la aplicación  */
};

#endif // LEDS_H
