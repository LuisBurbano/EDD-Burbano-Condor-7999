/***********************************************************************
 * Module:  Ingresos.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:04
 * Purpose: Implementation of the class Ingresos
 ***********************************************************************/

#include "Ingresos.h"


int Ingresos::getTotalComisiones(void)
{
   return totalComisiones;
}


void Ingresos::setTotalComisiones(int newTotalComisiones)
{
   totalComisiones = newTotalComisiones;
}


int Ingresos::getDiasTrabajados(void)
{
   return diasTrabajados;
}


void Ingresos::setDiasTrabajados(int newDiasTrabajados)
{
   diasTrabajados = newDiasTrabajados;
}


double Ingresos::getRemuneracionUnificada(void)
{
   return remuneracionUnificada;
}


void Ingresos::setRemuneracionUnificada(double newRemuneracionUnificada)
{
   remuneracionUnificada = newRemuneracionUnificada;
}


int Ingresos::getHorasSuplementarias(void)
{
   return horasSuplementarias;
}


void Ingresos::setHorasSuplementarias(int newHorasSuplementarias)
{
   horasSuplementarias = newHorasSuplementarias;
}


int Ingresos::getHorasExtras(void)
{
   return horasExtras;
}


void Ingresos::setHorasExtras(int newHorasExtras)
{
   horasExtras = newHorasExtras;
}


double Ingresos::getTotalIngresos(void)
{
   return totalIngresos;
}


void Ingresos::setTotalIngresos(double newTotalIngresos)
{
   totalIngresos = newTotalIngresos;
}

Ingresos::Ingresos()
{
   // TODO : implement
}