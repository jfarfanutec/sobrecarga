//
// Created by jfarfan on 17/11/2019.
//

#ifndef OPERADORCORCHETE_CMATRIZVECTOR_H
#define OPERADORCORCHETE_CMATRIZVECTOR_H

#include "CVector.h"
#include "Tipos.h"
using namespace std;
class mVector {    // definición de clase mVector
    TipoEntero m_dimension;
public:
    Vector* mVptr;
    mVector(TipoEntero n = 1) {             // constructor por defecto
        m_dimension = n;
        mVptr = new Vector[m_dimension];
    }
    virtual ~mVector() { delete [] mVptr; }
    Vector& operator[](TipoEntero i) { return mVptr[i]; }
    void showmem (ostream &os,TipoEntero);
};
void mVector::showmem (ostream &os,int i) {
    if((i >= 0) && (i <= m_dimension))
        mVptr[i].showV(cout);
    else
        os << "Argumento incorrecto! pruebe otra vez" << endl;
}
Vector operator* (TipoEntero i, Vector v) {
    Vector vr;
    vr.m_x = v.m_x * i;    vr.m_y = v.m_y * i;
    return vr;
}

#endif //OPERADORCORCHETE_CMATRIZVECTOR_H
