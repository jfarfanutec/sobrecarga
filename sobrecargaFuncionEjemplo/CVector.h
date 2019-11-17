//
// Created by jfarfan on 17/11/2019.
//

#ifndef SOBRECARGAFUNCIONEJEMPLO_CVECTOR_H
#define SOBRECARGAFUNCIONEJEMPLO_CVECTOR_H

class Vector {
public:
    float x, y;
    void operator()() {  // función-operador
        cout << "Vector: (" << x << ", " << y << ") " << endl;
    }
};

#endif //SOBRECARGAFUNCIONEJEMPLO_CVECTOR_H
