#ifndef DIVISION_H
#define DIVISION_H

#include <QDialog>

namespace Ui {
class Division;
}

class Division : public QDialog
{
    Q_OBJECT

public:
    explicit Division(QWidget *parent = 0);
    ~Division();
    signals:
      void enviaDatos(bool first,float divisor);


private slots:
      void on_buttonBox_accepted();

      void on__txtDivisor_textEdited(const QString &arg1);

private:
    Ui::Division *ui;
};

#endif // DIVISION_H
