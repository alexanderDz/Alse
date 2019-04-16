#ifndef CONTROL_H
#define CONTROL_H

#include <QDialog>

namespace Ui {
class Control;
}

class Control : public QDialog
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = 0);
    ~Control();

private slots:
    void on__cmdSt_1_clicked();

    void on__cmdSt_2_clicked();

    void on__cmdSt_3_clicked();

private:
    Ui::Control *ui;
};

#endif // CONTROL_H
