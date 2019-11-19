//
// Created by jfarfan on 11/11/2019.
//

#ifndef SOBRECARGA_COMPLEJO_COMPLEJO_H
#define SOBRECARGA_COMPLEJO_COMPLEJO_H

#include <iostream>
#include "Tipos.h"

/**
 * Un número complejo.
 * Sobrecarga el operador + para poder sumar otras clases CComplejo, arrays de dos
 * doubles y doubles sueltos.
 */
using namespace std;

class CComplejo {
private:
    /** Parte real del complejo */
    TipoDoble m_x;

    /** Parte imaginaria del complejo */
    TipoDoble m_y;
public:
    /** Constructor por defecto. Rellena los atributos x e y a 0.0 */
    CComplejo ();

    /** Constructor con array de doubles. Mete el primer double del array en
     * x y el segundo en y */
    CComplejo (const TipoDoble origen[]);

    /** Constructor copia. Copia los atributos del CComplejo recibido en los internos
     * de la clase. */
    CComplejo (const CComplejo &origen);

    /** Constructor con un double. Lo pone en la parte real x */
    CComplejo (TipoDoble valor);
    CComplejo (TipoDoble valor1,TipoDoble valor2);

    /** Operador igual para array de doubles. Mete el primer double del array
     * en x y el segundo en y */
    CComplejo &operator = (const TipoDoble origen[]);

    /** Operador igual para otro CComplejo. Copia los atributos del
     * CComplejo recibido. */
    CComplejo &operator = (const CComplejo &origen);

    /** Operador suma para un double. Suma el double recibido en x */
    CComplejo operator + (TipoDoble sum) const;


    /** Operador suma para un array de doubles. Suma el primer double del array en
     * x y el segundo en y */
    CComplejo operator + (const TipoDoble sum[]);

    /** Operador suma para otro CComplejo. Suma los atributos del CComplejo recibido
     * con los internos */
    CComplejo operator + (const CComplejo &sum) const;

    /** cast a double. Devuelve el módulo */
    operator double ();

    /** Devuelve X */
    TipoDoble getX() const { return m_x; }

    /** Devuelve Y */
    TipoDoble getY() const { return m_y; }

    /** Devuelve X */
    TipoDoble setX(TipoDoble valor) { m_x = valor; }

    /** Devuelve Y */
    TipoDoble setY(TipoDoble valor) { m_y = valor; }
};


/***************************************************************************
 * FUNCIONES EXTERNAS A LA CLASE
 ***************************************************************************/

/** Sobrecarga del operador suma global para sumar un double con un CComplejo */
CComplejo operator + (TipoDoble k, const CComplejo &origen);

/** Sobrecarga del operador suma global para sumar un array de doubles y un CComplejo */
CComplejo operator + (const TipoDoble sum1[], const CComplejo &sum2);

/** Sobrecarga del operador << global para que cout "sepa" escribir un CComplejo */
ostream &operator << (ostream &salida, const CComplejo &origen);

/** Sobrecarga del operador << global para que cout "sepa" escribir un array de doubles */
ostream &operator << (ostream &salida, const TipoDoble origen[] );

#endif //SOBRECARGA_COMPLEJO_COMPLEJO_H
