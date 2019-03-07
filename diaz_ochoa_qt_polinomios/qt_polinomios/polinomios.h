#ifndef POLINOMIOS_H
#define POLINOMIOS_H

#include <QMainWindow>

namespace Ui {
class Polinomios;
}

class Polinomios : public QMainWindow
{
    Q_OBJECT

public:
    explicit Polinomios(QWidget *parent = 0);
    ~Polinomios();

private slots:
    void on__cmdSuma_clicked();

    void on__cmdResta_clicked();

    void on__cmdMulti_clicked();

private:
    Ui::Polinomios *ui;
};

#endif // POLINOMIOS_H
