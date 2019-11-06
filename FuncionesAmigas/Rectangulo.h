//
// Created by jfarfan on 6/11/2019.
//

#ifndef FUNCIONESAMIGAS_RECTANGULO_H
#define FUNCIONESAMIGAS_RECTANGULO_H

class Rectangulo
{
private:
    int largo;
    int ancho;

public:
    Rectangulo() {
        largo=10;
        ancho=20;
    }

    friend class Cuadrado;        //Se declara la clase amiga(friend)
};
#endif //FUNCIONESAMIGAS_RECTANGULO_H
