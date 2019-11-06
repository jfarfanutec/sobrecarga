#include <iostream>
#include <iomanip>
#include "Reloj.h"

using namespace std;
int main() {

    Reloj R(5,59,58);
    for (int i=0; i<5; i++, ++R)
        cout <<setw(4)<< R.Hora() <<setw(4)<< R.Minuto() <<setw(4)<< R.Segundo() << endl;

    return 0;
}