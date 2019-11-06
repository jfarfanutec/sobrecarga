#include <iostream>
#include "Entero.h"

using namespace std;

int main() {
    Entero a(10);
    Entero b(40);
    Entero c;

    c = suma(a,b);
    cout << "c = " << c.getDato() << "\n";

    return 0;
}