//
// Created by jfarfan on 6/11/2019.
//

#ifndef SOBRECARGAV2_ENTERO_H
#define SOBRECARGAV2_ENTERO_H

#include <iostream>
#include "Tipos.h"
using namespace std;
class Entero {
private:
    TipoEntero m_dato;
public:
    Entero() { }
    Entero(TipoEntero dato) { m_dato= dato; }
    int getDato() {return m_dato;}
    friend Entero suma(Entero& x, Entero& y);
};

#endif //SOBRECARGAV2_ENTERO_H
