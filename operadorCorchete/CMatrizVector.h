//
// Created by jfarfan on 17/11/2019.
//

#ifndef OPERADORCORCHETE_CMATRIZVECTOR_H
#define OPERADORCORCHETE_CMATRIZVECTOR_H

#include "CVector.h"
using namespace std;

class mVector {    // definición de clase mVector
    int m_dimension;
public:
    Vector* mVptr;
    mVector(int n = 1) {             // constructor por defecto
        m_dimension = n;
        mVptr = new Vector[m_dimension];
    }
    ~mVector() {
        delete [] mVptr;
    }
    Vector& operator[](int i) { return mVptr[i]; }
    void showmem (int);
};

void mVector::showmem (int i) {
    if((i >= 0) && (i <= m_dimension)) mVptr[i].showV();
    else cout << "Argumento incorrecto! pruebe otra vez" << endl;
}
Vector operator* (int i, Vector v) {
    Vector vr;
    vr.m_x = v.m_x * i;    vr.m_y = v.m_y * i;
    return vr;
}

#endif //OPERADORCORCHETE_CMATRIZVECTOR_H
