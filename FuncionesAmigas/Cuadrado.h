//
// Created by jfarfan on 6/11/2019.
//

#ifndef FUNCIONESAMIGAS_CUADRADO_H
#define FUNCIONESAMIGAS_CUADRADO_H
#include <iostream>
#include "Rectangulo.h"
using namespace std;
class Cuadrado
{
private:
    int lado;
public:
    Cuadrado() {
        lado=5;
    }
    void mostrar(Rectangulo Rect)
    {
        cout<<"\nLargo : "<<Rect.largo;   //Puede acceder a los atributos privados
        cout<<"\nAncho : "<<Rect.ancho;
        cout<<"\nLado : "<<lado;
    }
};

#endif //FUNCIONESAMIGAS_CUADRADO_H
