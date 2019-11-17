#include <iostream>
using namespace std;

class Caja {

    double longitud;
    double anchura, altura;
public:
    void set(int l, int w, int h) {longitud = l; anchura = w; altura = h;}
    double volumen(void) {return longitud * anchura * altura;}
    Caja operator+(Caja a);
};

Caja operator+(Caja a) {
    Caja temp;
    temp.longitud = longitud + a.longitud;
    temp.anchura = anchura + a.anchura;
    temp.altura = altura + a.altura;
    return temp;
}

int main() {
    Caja pequenia, mediana, grande;
    Caja temp;
    pequenia.set(2, 4, 5);
    mediana.set(5, 6, 8);
    grande.set(8, 10, 12);
    cout << "El volumen es " << pequenia.volumen() << '\n';
    cout << "El volumen es " << mediana.volumen() << '\n';
    cout << "El volumen es " << grande.volumen() << '\n';
    temp = pequenia + mediana;
    cout << "El nuevo volumen es " << temp.volumen() << '\n';
}