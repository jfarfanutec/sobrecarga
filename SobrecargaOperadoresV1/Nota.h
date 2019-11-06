//
// Created by jfarfan on 6/11/2019.
//

#ifndef SOBRECARGAOPERADORESV1_NOTA_H
#define SOBRECARGAOPERADORESV1_NOTA_H

typedef double NumeroDecimal;

class Nota {
public:
    NumeroDecimal n1;
    NumeroDecimal n2;
    //constructor con parámetros
    Nota(const NumeroDecimal n1, const NumeroDecimal n2) {
        this->n1=n1;
        this->n2=n2;
    }
};
#endif //SOBRECARGAOPERADORESV1_NOTA_H
