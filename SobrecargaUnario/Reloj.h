//
// Created by jfarfan on 6/11/2019.
//

#ifndef SOBRECARGAUNARIO_RELOJ_H
#define SOBRECARGAUNARIO_RELOJ_H
typedef int TipoEntero;
class Reloj
{   TipoEntero hora;
    TipoEntero minuto;
    TipoEntero segundo;
public:
    Reloj(TipoEntero h=0, TipoEntero m=0, TipoEntero s=0);
    void DefineTiempo(TipoEntero, TipoEntero, TipoEntero);
    void setHora(TipoEntero);
    void setMinuto(TipoEntero);
    void setSegundo(TipoEntero);
    int Hora(void);
    int Minuto(void);
    int Segundo(void);
    void operator ++ (void);
};

#endif //SOBRECARGAUNARIO_RELOJ_H
