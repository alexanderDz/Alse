#ifndef CONTROL_H
#define CONTROL_H

#include <QMainWindow>

namespace Ui {
class Control;
}

class Control : public QMainWindow
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = 0);
    ~Control();

private slots:
    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void maq_estados();

private:
    Ui::Control *ui;
};

#endif // CONTROL_H
