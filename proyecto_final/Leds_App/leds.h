#ifndef LEDS_H
#define LEDS_H

#include <QMainWindow>

namespace Ui {
class leds;
}

class leds : public QMainWindow
{
    Q_OBJECT

public:
    explicit leds(QWidget *parent = 0);
    ~leds();

private:
    Ui::leds *ui;
};

#endif // LEDS_H
