/**
 * @file db_local.h
 * @date 09/05/2019
 * @brief Declaración de la clase db_local.
 *
 * Conjunto de funciones que manejan la conexión y
 * el manejo de los datos con la base de datos local.
 */
#ifndef DB_LOCAL_H
#define DB_LOCAL_H

#include<sqlite3.h>
#include<string>
#include<sstream>
#include<QDate>
#include<ctime>

using namespace std;

class db_local
{
public:
    db_local();

    /**
     * @brief open_database Función que abre la base de datos local.
     * @return Retorna 'true' si la conexión se realizo correctamente.
     */
    bool open_database();

    /**
     * @brief close_database Función que cierra la conexión con la base de datos local.
     */
    void close_database();

    /**
     * @brief insertUser Función que inserta datos de usuario en la base de datos local.
     * @param first_name Nombre del usuario.
     * @param last_name Apellido del usuario.
     * @param national_id Documento del usuario.
     * @param user_name Nombre de usuario en la aplicación.
     * @param password Contraseña del usario en la aplcación.
     * @param b_date Fecha de nacimiento del usuario.
     * @param age Edad del usuario.
     * @return Retorna 'true' si la operación se realizo correctamente.
     */
    bool insertUser(string first_name, string last_name,int national_id, string user_name, string password, QDate b_date, int age);

    /**
     * @brief insertData Función que guarda las acciones del usuario, en la ventana de control, en la base de datos local.
     * @param username Nombre de usuario que uso acciono los botones de la aplicación.
     * @param cb1 Número de veces que se oprimio el botón 1.
     * @param cb2 Número de veces que se oprimio el botón 2.
     * @param cb3 Número de veces que se oprimio el botón 3.
     * @return Si los datos se guardaron correctamente, retorna 'true'.
     */
    bool insertData(string username,int cb1, int cb2, int cb3);

    /**
     * @brief searchUser Función que busca dentro de la base de datos local el username y la contraseña para iniciar sesión.
     * @param user_name Nombre de usuario que se buscará en la base de datos local.
     * @param password Contrsaeña que se buscará en la base de datos local.
     * @return Si los datos buscados existen y coinciden correctamente retorna 'true'.
     */
    bool searchUser(string user_name, string password);

private:

    sqlite3 *db;/**< Variable que maneja la conexión con la base de datos. */
    string path = "../data_base/user.db";/**< Variable que almacena la dirección de la base de datos local. */
};

#endif // DB_LOCAL_H
