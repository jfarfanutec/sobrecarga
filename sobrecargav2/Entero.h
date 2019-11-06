//
// Created by jfarfan on 6/11/2019.
//

#ifndef SOBRECARGAV2_ENTERO_H
#define SOBRECARGAV2_ENTERO_H

#include <iostream>
using namespace std;
typedef int TipoEntero ;
class Entero {
private:
    TipoEntero dato;
public:
    Entero() { }
    Entero(TipoEntero _dato) { dato= _dato; }
    int getDato() {return dato;}

    friend Entero suma(Entero& x, Entero& y);

};

#endif //SOBRECARGAV2_ENTERO_H
