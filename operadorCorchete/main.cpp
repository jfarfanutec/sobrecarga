#include <iostream>
#include "CVector.h"
#include "CMatrizVector.h"

int main() {
    mVector mV1(5);
    mV1[0].m_x = 2;  mV1[0].m_y = 3;
    mV1.showmem(cout,0);

    Vector v1;
    v1 = mV1[0];
    v1.showV(cout);
    mV1[4] = mV1[0] * 5;
    mV1.showmem(cout, 4);

    mV1[2] = 5 * mV1[0];
    mV1.showmem(cout,2);

    return 0;
}