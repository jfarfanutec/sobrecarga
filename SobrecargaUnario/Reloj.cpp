//
// Created by jfarfan on 6/11/2019.
//

#include "Reloj.h"

Reloj::Reloj(TipoEntero h, TipoEntero m, TipoEntero s)
{ hora=h;
    minuto=m;
    segundo=s;
}


void Reloj::DefineTiempo(TipoEntero h, TipoEntero m, TipoEntero s)
{ hora=h;
    minuto=m;
    segundo=s;
}

void Reloj::setHora(TipoEntero h)
{ hora = h; }

void Reloj::setMinuto(TipoEntero m)
{ minuto = m; }

void Reloj::setSegundo(TipoEntero s)
{ segundo = s; }

int Reloj::Hora(void)
{ return hora; }

int Reloj::Minuto(void)
{ return minuto; }

int Reloj::Segundo(void)
{ return segundo; }

void Reloj::operator ++(void)
{ segundo++;
    if (segundo > 59)
    { segundo -= 60;
        ++minuto;
    }

    if (minuto > 59)
    { minuto -= 60;
        ++hora;
    }

    if (hora > 23)  hora -= 24;
}