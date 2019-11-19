#include <iostream>
#include "Complejo.h"
using namespace std;

int main() {
    TipoDoble c1[] = {1.0, -1.0}; // Un array de doubles.
    TipoDoble c2[] = {-1.0, 1.0}; // Otro array de doubles.
    CComplejo complejoA(c1) ;  // complejoA, copia del array c1.
    CComplejo complejoB;       // complejoB, por defecto.

    // Se realizan varios tipos de sumas, escribiendo en pantalla los resultados.

    //   CComplejo operator + (double sum);
    //   1-j + 1  da 2-j
    cout << complejoA << " + " << 1 << " = ";
    cout << complejoA + 1.0 << endl;

    //   CComplejo operator + (double sum[]);
    //   1-j + 1-j da 2-2j
    cout << complejoA << " + " << c1 << " = ";
    cout << complejoA + c1 << endl;

    //   CComplejo operator + (CComplejo sum);
    //   1-j + 0+0j da 1-j
    cout << complejoA << " + " << complejoB << " = ";
    cout << complejoA + complejoB << endl;

    // CComplejo operator + (double k, CComplejo &origen);
    // 1 + 1-j + 1-j + -1+j + 0+0j da 2-j
    cout << 1 << " + " << complejoA << " + " << c1 << " + " << c2 << " + " << complejoB \
      << " = ";
    cout << 1.0 + complejoA + c1 + c2 + complejoB << endl;

    // CComplejo operator + (double sum1[], CComplejo &sum2);
    // -1+j + 1-j da 0+0j
    cout << c2 << " + " << complejoA << " = ";
    cout << c2 + complejoA << endl;

    // CComplejo operator double
    // El módulo de 1-j es 1.4142 (raiz de 2)
    cout << "|" << complejoA << "| = ";
    cout << (TipoDoble)complejoA << endl;

    // cast de double a CComplejo
    // Debe dar 2.3+0j
    cout << (CComplejo)2.3 << endl;

    return 0;
}