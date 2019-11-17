#include <iostream>
using namespace std;

class V2D {   // clase de puntos en el plano
    float x, y;
public:
    V2D(float i=0, float j=0): x(i), y(j) {}  // constructor
    bool operator!() {   // sobrecarga del operador NOT
        return ((x > 0 && y > 0) ? false : true );
    }
};

int main() {
    V2D p1(0,2);
    V2D p2(-1.1, 2);
    V2D p3 = V2D(1,2);
    V2D p4(1, -3);

    if (!!p1) cout << "p1 Ok.\n";
    if (!!p2) cout << "p2 Ok.\n";
    if (!!p3) cout << "p3 Ok.\n";
    if (!!p4) cout << "p4 Ok.\n";     // p3 Ok.

    if (!p1) cout << "p1 Not Ok.\n";  // p1 Not Ok.
    if (!p2) cout << "p2 Not Ok.\n";  // p2 Not Ok.
    if (!p3) cout << "p3 Not Ok.\n";  // p3 Not Ok.
    if (!p4) cout << "p4 Not Ok.\n";
    return 0;
}