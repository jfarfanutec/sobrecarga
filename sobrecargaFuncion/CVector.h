//
// Created by jfarfan on 18/11/2019.
//

#ifndef SOBRECARGAFUNCION_CVECTOR_H
#define SOBRECARGAFUNCION_CVECTOR_H

#include "Tipos.h"

class Vector {     // una clase cualquiera
    TipoFloat m_x, m_y;
public:
    void mostrar(TipoInt i) {   // función-miembro (método)
        cout << "Vector: (" << m_x * i << ", " << m_y * i << ") " << endl;
    }
};

#endif //SOBRECARGAFUNCION_CVECTOR_H
