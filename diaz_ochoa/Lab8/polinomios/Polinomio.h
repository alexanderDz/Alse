/**
 * Project Untitled
 */


#ifndef _POLINOMIO_H
#define _POLINOMIO_H
#include <string>
#include <vector>
#include "Termino.h"

using namespace std;

class Polinomio {
public: 
	
Polinomio();
	
/**
 * @param pol
 */
Polinomio(string pol);
	
/**
 * @param pol
 */
Polinomio(Polinomio& pol);
	
/**
 * @param c
 * @param p
 */
void nuevoTermino(float c, int p);
	
void simplificar();
	
bool ordenar();
	
/**
 * @param p
 */
Polinomio operator +(Polinomio& p);
	
/**
 * @param p
 */
Polinomio operator -(Polinomio& p);
	
/**
 * @param p
 */
Polinomio operator  *(Polinomio& p);
	
/**
 * @param f
 */
Polinomio operator /(float f);
	
bool borrar();
	
/**
 * @param pol
 */
bool redefinir(string pol);
	
int getOrden();
	
	
char getVariable();
	
/**
 * @param value
 */
void setVariable(char value);
private: 
    int         _orden;
    char        _variable;
    Termino*    _polCabeza;
};

#endif //_POLINOMIO_H
