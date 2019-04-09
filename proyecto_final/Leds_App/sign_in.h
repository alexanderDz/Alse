#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QDialog>

namespace Ui {
class Sign_in;
}

class Sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_in(QWidget *parent = 0);
    ~Sign_in();

private:
    Ui::Sign_in *ui;
};

#endif // SIGN_IN_H
