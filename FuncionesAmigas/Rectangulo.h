//
// Created by jfarfan on 6/11/2019.
//

#ifndef FUNCIONESAMIGAS_RECTANGULO_H
#define FUNCIONESAMIGAS_RECTANGULO_H

#include "tipos.h"
class Rectangulo
{
private:
    TipoEntero m_largo;
    TipoEntero m_ancho;
public:
    Rectangulo() {
        m_largo=10;
        m_ancho=20;
    }

    friend class Cuadrado;        //Se declara la clase amiga(friend)
};
#endif //FUNCIONESAMIGAS_RECTANGULO_H
