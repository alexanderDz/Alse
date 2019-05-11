#include <iostream>
#include<QApplication>
#include"leds.h"

using namespace std;

int main(int argc, char** argv)
{
    QApplication a(argc, argv);
    Leds w;
    w.show();

    return a.exec();
}
