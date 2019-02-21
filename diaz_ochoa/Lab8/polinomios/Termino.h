/**
 * Project Untitled
 */


#ifndef _TERMINO_H
#define _TERMINO_H
#include <string>


class Termino {
  private:
    float       _coeficiente;
    int         _potencia;
    Termino*    _siguiente;
    Termino();

  public:
    //float getC(){return _coeficiente;}
    int getP(){return _potencia;}
    void setCP(float& c, int& p){_coeficiente = c; _potencia = p; _siguiente = nullptr;}
    void setSiguiente(Termino* ptr){_siguiente = ptr;}
    Termino* getSiguiente(){return _siguiente;}
};

#endif //_TERMINO_H
