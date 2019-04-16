#include "leds.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Leds w;
    w.show();

    return a.exec();
}
