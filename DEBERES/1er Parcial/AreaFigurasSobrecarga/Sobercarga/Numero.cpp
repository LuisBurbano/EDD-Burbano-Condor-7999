/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  FiguraGeometrica.cpp
 * Created: martes, 8 de noviembre 10:51:00
 * Modified: martes, 8 de noviembre de 2022 21:30:31
 * Problem: Areas figuras Geometricas
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#include "Numero.h"


Numero::Numero()
{
}

float Numero::operator+(Numero f)
{
    return variable + f.variable;
}
float Numero::operator +( Numero numero,float p2){


    return numero.variable + p2;
  
}


double Numero::getVariable(void)
{
    return variable;
}

void Numero::setVariable(double newVariable)
{
    variable = newVariable;
}
