#include "leds.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    leds w;
    w.show();

    return a.exec();
}
