#include <iostream>
using namespace std;
#include "CVector.h"

int main() {
    Vector v1;             // Objeto
    Vector* vptr = &v1;    // definición de puntero-a-clase
    // definición de puntero-a-miembro
    void (Vector::* vmptr) (int) = &Vector::mostrar;

    int x = 2;
    // varias maneras de invocar al método
    v1.mostrar(x);
    vptr->mostrar(x);
    (v1.*vmptr)(x);

    return 0;
}