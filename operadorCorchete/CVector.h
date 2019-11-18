//
// Created by jfarfan on 17/11/2019.
//

#ifndef OPERADORCORCHETE_CVECTOR_H
#define OPERADORCORCHETE_CVECTOR_H
#include "Tipos.h"
using namespace std;

class Vector {
public:
    TipoEntero m_x, m_y;
    Vector& operator= (const Vector& v) { // asignación V = V
        m_x = v.m_x;   m_y = v.m_y;   return *this;
    }
    Vector operator* (TipoEntero i) {       //  Producto V * int
        Vector vr;
        vr.m_x = m_x * i;   vr.m_y = m_y * i;
        return vr;
    }
    void showV(ostream &os);
    friend Vector operator* (TipoEntero, Vector); //  Producto int * V
};

void Vector::showV(ostream &os) {
    os << "X = " << m_x << "; Y = " << m_y << endl;
}

#endif //OPERADORCORCHETE_CVECTOR_H
