/**
 * @file register.h
 * @date 09/05/2019
 * @brief Declaracion de la clase register
 *
 * Conjunto de funciones que conforman la ventana de registro
 * de la aplicación.
 */
#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = 0);
    ~Register();

private slots:

    /**
     * @brief on__txtR_name_textEdited Función para almacenar el nombre del usuario que se registra
     * @param arg1 Nombre del usuario que se esta registrando proveniente de la QlineEdit
     */
    void on__txtR_name_textEdited(const QString &arg1);

    /**
     * @brief on__txtR_LsName_textEdited Función para almacenar el apellido del usuario que se registra
     * @param arg1 Apellido del usuario que se esta registrando proveniente de la QlineEdit
     */
    void on__txtR_LsName_textEdited(const QString &arg1);

    /**
     * @brief on__txtR_national_id_textEdited Función para almacenar el documento de identidad del usuario que se registra
     * @param arg1 Documento de identidad del usuario que se esta registrando proveniente de la QlineEdit
     */
    void on__txtR_national_id_textEdited(const QString &arg1);

    /**
     * @brief on__txtR_usrnm_textEdited Función para almacenar el nombre de usuario de la persona que se registra
     * @param arg1 Nombre de usuario de la persona que se esta registrando proveniente de la QlineEdit
     */
    void on__txtR_usrnm_textEdited(const QString &arg1);

    /**
     * @brief on__txtR_psswd_textEdited Función para almacenar la contraseña del usuario
     * @param arg1 Contraseña del usuario que se esta registrando proveniente de la QlineEdit
     */
    void on__txtR_psswd_textEdited(const QString &arg1);

    /**
     * @brief on__birthdate_dateChanged Función para almacenar la fecha de nacimiento del usuario que se registra
     * @param date Fecha de nacimiento del usuario que se registra proveniente de la QlineEdit
     */
    void on__birthdate_dateChanged(const QDate &date);

    /**
     * @brief on_buttonBox_accepted Función que recopila todos los datos de usuario los almacena en la base de datos local
     */
    void on_buttonBox_accepted();

    /**
     * @brief calcular_edad Función que calcula la edad del usuario
     * @param bd Fecha de nacimiento del usuario
     * @return variable con la edad del usuario
     */
    int calcular_edad(QDate bd);

private:
    Ui::Register *ui;
    QString first_name; /**< Variable que almacena el nombre del usuario */
    QString last_name; /**< Variable que almacena el apellido del usuario */
    int national_id; /**< Variable que almacena el documento del usuario */
    int age; /**< Variable que almacena la edad del usuario */
    QString user_name; /**< Variable que almacena el username del usuario */
    QString psswd; /**< Variable que almacena el nombre del usuario */
    QDate b_date; /**< Variable que almacena la fecha de nacimiento del usuario */
};

#endif // REGISTER_H
