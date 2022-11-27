/***********************************************************************
 * Module:  Ingresos.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:04
 * Purpose: Implementation of the class Ingresos
 ***********************************************************************/

#include "Ingresos.h"
#include "Validacion.hpp"
//generar getters y setters
Validacion validacion;

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

double Ingresos::calcularTotalIngresos()
{
   return calcularHorasExtras(horasExtras, valorHoraExtra) + calcularHorasSuplementarias(horasSuplementarias, valorHora) + calcularTotalComisiones(totalComisiones, remuneracionUnificada);
}

double Ingresos::calcularHorasExtras(int horasExtras, double valorHoraExtra)
{
   return horasExtras * valorHoraExtra;
}

double Ingresos::calcularHorasSuplementarias(int horasSuplementarias, double valorHora)
{
   return horasSuplementarias * valorHora;
}


double Ingresos::ingresarValorHoraExtra(void)
{
   double valorHoraExtra;
   cout << "Ingrese el valor de la hora extra: ";
   valorHoraExtra = validacion.charToFloat();
   return valorHoraExtra;
}

double Ingresos::ingresarValorHoraSuplementaria(void)
{
   double valorHora;
   cout << "Ingrese el valor de la hora suplementaria: ";
   valorHora = validacion.charToFloat();
   return valorHora;
}

int Ingresos::ingresarHorasExtras(void)
{
   int horasExtras;
   cout << "Ingrese las horas extras: ";
   horasExtras = validacion.charToInt();
   return horasExtras;
}

int Ingresos::ingresarHorasSuplementarias(void)
{
   int horasSuplementarias;
   cout << "Ingrese las horas suplementarias: ";
   horasSuplementarias = validacion.charToInt();
   return horasSuplementarias;
}

int Ingresos::ingresarDiasTrabajados(void)
{
   int diasTrabajados;
   cout << "Ingrese los dias trabajados: ";
   diasTrabajados = validacion.charToInt();
   return diasTrabajados;
}

double Ingresos::ingresarRemuneracionUnificada(void)
{
   double remuneracionUnificada;
   cout << "Ingrese la remuneracion unificada: ";
   remuneracionUnificada = validacion.charToFloat();
   return remuneracionUnificada;
}
double Ingresos::ingresarTotalComisiones(void)
{
   double totalComisiones;
   cout << "Ingrese el total de comisiones: ";
   totalComisiones = validacion.charToFloat();
   return totalComisiones;
}

void Ingresos::ingresarDatos(){
   double valorHora;
   double valorHoraExtra;
   int horasExtras;
   int horasSuplementarias;
   int diasTrabajados;
   double remuneracionUnificada;
   double totalComisiones;
   double totalIngresos;

   cout<<"Ingresos"<<endl;
   cout<<"Ingrese el valor de la hora suplementaria: ";
   valorHora = ingresarValorHoraSuplementaria();
   cout<<"Ingrese el valor de la hora extra: ";
   valorHoraExtra = ingresarValorHoraExtra();
   cout<<"Ingrese las horas extras: ";
   horasExtras = ingresarHorasExtras();
   cout<<"Ingrese las horas suplementarias: ";
   horasSuplementarias = ingresarHorasSuplementarias();
   cout<<"Ingrese los dias trabajados: ";
   diasTrabajados = ingresarDiasTrabajados();
   cout<<"Ingrese la remuneracion unificada: ";
   remuneracionUnificada = ingresarRemuneracionUnificada();
   cout<<"Ingrese el total de comisiones: ";
   totalComisiones = ingresarTotalComisiones();
   totalIngresos = calcularTotalIngresos();
   cout<<"El total de ingresos es: "<<totalIngresos<<endl;

   

   
}

Ingresos::Ingresos()
{

}
