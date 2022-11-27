/***********************************************************************
 * Module:  Egresos.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:22
 * Purpose: Implementation of the class Egresos
 ***********************************************************************/

#include "Egresos.h"


double Egresos::getAporteIESS(void)
{
   return aporteIESS;
}

void Egresos::setAporteIESS(double newAporteIESS)
{
   aporteIESS = newAporteIESS;
}

double Egresos::getImpuestoRenta(void)
{
   return impuestoRenta;
}


void Egresos::setImpuestoRenta(double newImpuestoRenta)
{
   impuestoRenta = newImpuestoRenta;
}


double Egresos::getMultas(void)
{
   return multas;
}


void Egresos::setMultas(double newMultas)
{
   multas = newMultas;
}


double Egresos::getAnticipoQuincena(void)
{
   return anticipoQuincena;
}

void Egresos::setAnticipoQuincena(double newAnticipoQuincena)
{
   anticipoQuincena = newAnticipoQuincena;
}


double Egresos::getTotalEgresos(void)
{
   return totalEgresos;
}


void Egresos::setTotalEgresos(double newTotalEgresos)
{
   totalEgresos = newTotalEgresos;
}

Egresos::Egresos()
{
   // TODO : implement
}