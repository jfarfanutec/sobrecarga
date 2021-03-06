//
// Created by jfarfan on 11/11/2019.
//

#include "Complejo.h"
#include <math.h>

/**************************************************************************
 * METODOS DE LA CLASE
 *************************************************************************/

/*************** CONSTRUCTORES ************************/

/* Constructor por defecto. Pone los atributos x e y a 0.0 */
CComplejo::CComplejo () {
    m_x=0.0;
    m_y=0.0;
}

/* Constructor por defecto. Pone los atributos x e y a 0.0 */
CComplejo::CComplejo (TipoDoble valor) {
    m_x=valor;
    m_y=0.0;
}
/* Constructor por defecto. Pone los atributos x e y a 0.0 */
CComplejo::CComplejo (TipoDoble valor1,TipoDoble valor2) {
    m_x=valor1;
    m_y=valor2;
}

/* Constructor con un array de doubles. Pone el primer elemento del array en x y el
 * segundo en y */
CComplejo::CComplejo (const TipoDoble origen[]) {
    *this = origen;
}

/** Constructor copia. Copia los atributos de origen en los internos de la clase */
CComplejo::CComplejo (const CComplejo &origen) {
    m_x = origen.m_x;
    m_y = origen.m_y;
}

/************** OPERADORES SUMA EN LA CLASE      ***************************/

/** operador suma para un double. Lo suma a la parte real y devuelve CComplejo para
 * poder concatenar sumas */
CComplejo CComplejo::operator + (TipoDoble sum) const {
    CComplejo aux(*this);
    aux.m_x = m_x + sum;
    return aux;
}

/** operador suma para array de doubles. Devuelve CComplejo para poder concatenar sumas */
CComplejo CComplejo::operator + (const TipoDoble sum[]) {
    //CComplejo aux;
    //aux.m_x = m_x + sum[0];
    //aux.m_y = m_y + sum[1];
    //return aux;
    return CComplejo(m_x + sum[0], m_y + sum[1]);
}

/** operador suma para otro CComplejo. Devuelve CComplejo para poder concatenar sumas */
CComplejo CComplejo::operator + (const CComplejo &sum) const {
    return CComplejo(m_x + sum.m_x,m_y + sum.m_y);
}

/******************* OPERADORES DE ASIGNACION EN LA CLASE ******************************/

/** operador = para arrays de doubles. Devuelve CComplejo para poder concatenar
 * operaciones de = estilo    a = b = c; */
CComplejo &CComplejo::operator = (const TipoDoble origen[]) {
    m_x = origen[0];
    m_y = origen[1];
    return *this;
}

/** operador = para otro CComplejo. Devuelve CComplejo para poder concatenar
 * operaciones de =, estilo a = b = c; */
CComplejo &CComplejo::operator = (const CComplejo &origen) {
    m_x = origen.m_x;
    m_y = origen.m_y;
    return *this;
}

/****************** OPERADORES DE CAST EN LA CLASE ********************/

/** operador cast a double. Devuelve el módulo del complejo */
CComplejo::operator TipoDoble () {
    return sqrt (m_x*m_x + m_y*m_y);
}

/***********************************************************************
 * FUNCIONES EXTERNAS A LA CLASE
 ***********************************************************************/

/************************* OPERADOR << PARA EL COUT ********************************/

/* operador global << para escribir CComplejo en pantalla. */
ostream &operator << (ostream &os, const CComplejo &origen) {
    // Se pone signo positivo por defecto
    TipoChar signo='+';

    // Si la y es negativa, no se pone signo, ya que al escribir la y ya sale un signo
    // negativo.
    if (origen.getY() < 0.0)
        signo = 0;

    // Se escriben los campos separados por el signo
    os << origen.getX() << signo << origen.getY() << "j";
}

/* operador global << para escribir array de doubles en pantalla. */
ostream &operator << (ostream &salida, const TipoDoble origen[]) {
    // Se pone signo positivo por defecto
    TipoChar signo='+';

    // Si la y es negativa, no se pone signo, ya que al escribir la y ya sale un signo
    // negativo.
    if (origen[1] < 0.0)
        signo = 0;

    // Se escriben los campos separados por el signo
    cout << origen[0] << signo << origen[1] << "j";
}

/********************* OPERADORES SUMA EXTERNOS **********************************/

/* operador global + para sumar array de doubles con CComplejo. * Devuelve un CComplejo para poder encadenar sumas a+b+c+d */
CComplejo operator + (const TipoDoble sum1[], const CComplejo &sum2) {
    return CComplejo(sum2 + sum1);
}

/* operador global + para sumar un double con un complejo. Devuelve CComplejo
 * para poder encadenar sumas */
CComplejo operator + (TipoDoble sum, const CComplejo &origen) {
    return CComplejo(origen + sum);
}
