#include <iostream>
using namespace std;
class Vector {
public:
    float x, y;
    Vector operator+ (Vector v) {  // función-operador operator+
        x = x + v.x;
        y = y + v.y;
        return *this;
    }
};
int main () {     // =========
    float x = 5, y = 6;
    cout << "R = " << x + y << endl;  // M.2: versión global
    Vector v1 = {1, 2}, v2 = {3, 4};
    Vector v3 = v1 + v2;              // M.4: versión sobrecargada
    cout << "Rx = " << v3.x << endl;
    cout << "Ry = " << v3.y << endl;
}