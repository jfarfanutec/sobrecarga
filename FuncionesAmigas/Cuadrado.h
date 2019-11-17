//
// Created by jfarfan on 6/11/2019.
//

#ifndef FUNCIONESAMIGAS_CUADRADO_H
#define FUNCIONESAMIGAS_CUADRADO_H

#include <iostream>
#include "Rectangulo.h"

using namespace std;
class Cuadrado {
private:
    TipoEntero m_lado;
public:
    Cuadrado() {
        m_lado=5;
    }
    void mostrar(ostream &os,Rectangulo Rect)
    {
        os <<"\nLargo : "<<Rect.m_largo;   //Puede acceder a los atributos privados de la clase Rectangulo
        os <<"\nAncho : "<<Rect.m_ancho;
        os <<"\nLado : "<<m_lado;
    }
};

#endif //FUNCIONESAMIGAS_CUADRADO_H
