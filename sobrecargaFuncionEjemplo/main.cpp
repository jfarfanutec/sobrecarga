#include <iostream>
using namespace std;
#include "CVector.h"

int main () {
    Vector v1 = {2, 3};
    v1();                // Ok. invocación de v1.operator()
    v1.operator()();     // Ok. invocación clásica
    return 0;
}