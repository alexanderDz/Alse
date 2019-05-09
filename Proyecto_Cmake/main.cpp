#include <iostream>
#include "control.h"
#include "register.h"
#include "leds.h"
#include <QApplication>

using namespace std;

int main()
{
    QApplication a(argc, argv);
    Leds w;
    w.show();

    return a.exec();
}
