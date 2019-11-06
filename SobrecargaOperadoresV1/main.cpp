#include <iostream>
#include "Nota.h"
using namespace std;
// Sobrecarga del operador +
Nota operator +(const Nota &p1,const Nota &p2)
{
    //sobrecargamos el operador + y le decimos que realice una suma (p1.n1 + p2.n1)
    Nota res( p1.n1 + p2.n1, p1.n2 + p2.n2 );
    return res;
}

int main() {
    Nota nota1(10,13);
    Nota nota2(10,13);
    Nota prom = nota1 + nota2;
    //El compilador no puede procesar
    // el tipo Nota es una clase y no un tipo primitivo
    // Se debe indicar al compilador que hacer con este tipo de operacion
    cout << "Nota 1= " << nota1.n1 << "," << nota1.n2 << "\n";
    cout << "Nota 2= " << nota2.n1 << "," << nota2.n2 << "\n";
    cout << "Nota 3= " << prom.n1 << "," << prom.n2 << "\n";

    return 0;
}