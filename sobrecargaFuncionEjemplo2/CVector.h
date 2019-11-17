//
// Created by jfarfan on 17/11/2019.
//

#ifndef SOBRECARGAFUNCIONEJEMPLO2_CVECTOR_H
#define SOBRECARGAFUNCIONEJEMPLO2_CVECTOR_H

class Vector {
public: float x, y;
    void operator()() {       // Versión-1
        cout << "Vector: (" << x << ", " << y << ") " << endl;
    }
    void operator()(int i) {  // Versión-2
        cout << "Coordenadas: (" << x << ", " << y << ") " << endl;
    }
};

#endif //SOBRECARGAFUNCIONEJEMPLO2_CVECTOR_H
