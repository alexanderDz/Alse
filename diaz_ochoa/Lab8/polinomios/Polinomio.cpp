/**
 * Project Untitled
 */


#include "Polinomio.h"

/**
 * Polinomio implementation
 */


Polinomio::Polinomio() {
    _orden = -1;
    _variable ='X';
    _polCabeza = NULL;
}

/**
 * @param pol
 */
Polinomio::Polinomio(string pol) {

}

/**
 * @param pol
 */
Polinomio::Polinomio(Polinomio& pol) {
    _orden = pol._orden;
    _variable = pol._variable;
    // Falta copiar los terminos
    _polCabeza = NULL;
}

/**
 * @param c
 * @param p
 * @return void
 */
void Polinomio::nuevoTermino(float c, int p) {
    Termino* nuevo = new Termino(c,p);
    Termino* temp = _polCabeza;
    while(temp != NULL)
        temp = temp->getSiguiente();

    temp->setSiguiente( nuevo );
}

/**
 * @return void
 */
void Polinomio::simplificar() {
    return;
}

/**
 * @return bool
 */
bool Polinomio::ordenar() {
    return false;
}

/**
 * @param p
 * @return Polinomio&
 */
Polinomio Polinomio::operator +(Polinomio& p) {
    Polinomio res = Polinomio();
    return res;
}

/**
 * @param p
 * @return Polinomio&
 */
Polinomio Polinomio::operator -(Polinomio& p) {
    Polinomio res = Polinomio();
    return res;
}

/**
 * @param p
 * @return Polinomio&
 */
Polinomio Polinomio::operator  *(Polinomio& p) {
    Polinomio res = Polinomio();
    return res;
}

/**
 * @param f
 * @return Polinomio&
 */
Polinomio Polinomio::operator /(float f) {
    Polinomio res = Polinomio();
    return res;
}

/**
 * @return bool
 */
bool Polinomio::borrar() {
    return false;
}

/**
 * @param pol
 * @return bool
 */
bool Polinomio::redefinir(string pol) {
    return false;
}

/**
 * @return float
 */
int Polinomio::getOrden() {
    return 0.0;
}



/**
 * @return char
 */
char Polinomio::getVariable() {
    return '0';
}

/**
 * @param value
 */
void Polinomio::setVariable(char value) {

}
