#include <iostream>
using namespace std;
class Entero {
 public: int x;
 friend Entero& operator++(Entero&);
 friend Entero& operator--(Entero&);
};
Entero& operator++ (Entero& e) {
 e.x = e.x + e.x;
 return e;
}
Entero& operator-- (Entero& e) {
 e.x = e.x / 2;
 return e;
}

int main () {      // ==============
 Entero e1, e2, e3;
 e1.x = 5;
 e3 = ++e2 = ++e1;
 cout << " e1 = " << e1.x << "; e2 = " << e2.x << "\n";

 e3 = --e2 = --e1;
 cout << " e1 = " << e1.x << "; e2 = " << e2.x;
 return 0;
}