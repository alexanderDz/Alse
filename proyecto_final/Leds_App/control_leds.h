#ifndef CONTROL_LEDS_H
#define CONTROL_LEDS_H

#include <QDialog>

namespace Ui {
class control_leds;
}

class control_leds : public QDialog
{
    Q_OBJECT

public:
    explicit control_leds(QWidget *parent = 0);
    ~control_leds();

private slots:


private:
    Ui::control_leds *ui;
};

#endif // CONTROL_LEDS_H
