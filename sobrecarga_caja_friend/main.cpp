#include <iostream>
using namespace std;

class Caja {
    double longitud;
    double anchura, altura;
public:
    void set(int l, int w, int h) {longitud = l; anchura = w; altura = h;}
    int volumen(void) {return longitud * anchura * altura;}
    friend Caja operator+(Caja a, Caja b); // Add two Cajas
    friend Caja operator+(int a, Caja b); // Add a constant to a Caja
    friend Caja operator*(int a, Caja b); // Multiply a Caja by a constant
};

Caja operator+(Caja a, Caja b) {
    Caja temp;
    temp.longitud = a.longitud + b.longitud;
    temp.anchura = a.anchura + b.anchura;
    temp.altura = a.altura + b.altura;
    return temp;
}

Caja operator+(int a, Caja b) { // Add a constant to a Caja
    Caja temp;
    temp.longitud = a + b.longitud;
    temp.anchura = a + b.anchura;
    temp.altura = a + b.altura;
    return temp;
}

Caja operator*(int a, Caja b) { // Multiply a Caja by a constant
    Caja temp;
    temp.longitud = a * b.longitud;
    temp.anchura = a * b.anchura;
    temp.altura = a * b.altura;
    return temp;
}

int main() {
    Caja pequenia, mediana, grande;
    Caja temp;
    pequenia.set(2, 4, 5);
    mediana.set(5, 6, 8);
    grande.set(8, 10, 12);
    cout << "El volumen de caja pequenia " << pequenia.volumen() << '\n';
    cout << "El volumen de caja mediana " << mediana.volumen() << '\n';
    cout << "El volumen de caja grande " << grande.volumen() << '\n';
    temp = pequenia + mediana;
    cout << "El nuevo volumen es " << temp.volumen() << '\n';
    temp = 10 + pequenia;
    cout << "El nuevo volumen es " << temp.volumen() << '\n';
    temp = 4 * grande;
    cout << "El nuevo volumen es " << temp.volumen() << '\n';
}