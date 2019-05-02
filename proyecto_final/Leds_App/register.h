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
    void on__txtR_name_textEdited(const QString &arg1);

    void on__txtR_LsName_textEdited(const QString &arg1);

    void on__txtR_national_id_textEdited(const QString &arg1);

    void on__txtR_usrnm_textEdited(const QString &arg1);

    void on__txtR_psswd_textEdited(const QString &arg1);

    void on__birthdate_dateChanged(const QDate &date);

    void on_buttonBox_accepted();

private:
    Ui::Register *ui;
    QString first_name;
    QString last_name;
    int national_id;
    QString user_name;
    QString psswd;
    QDate b_date;
};

#endif // REGISTER_H
