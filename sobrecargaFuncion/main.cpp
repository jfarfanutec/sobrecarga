#include <iostream>
using namespace std;

class Vector {     // una clase cualquiera
    float x, y;
public: void getm(int i) {   // función-miembro (método)
        cout << "Vector: (" << x * i << ", " << y * i << ") " << endl;
    }
};

int main() {
    Vector v1;                     // Objeto
    Vector* vptr = &v1;            // definición de puntero-a-clase
    void (Vector::* vmptr) (int)   // definición de puntero-a-miembro
    = &Vector::getm;
    int x = 2;
    v1.getm(x);                    // Ok. invocación del método
    vptr->getm(x);                 // Ok. Ídem.
    (v1.*vmptr)(x);                // Ok. Ídem.

    return 0;
}