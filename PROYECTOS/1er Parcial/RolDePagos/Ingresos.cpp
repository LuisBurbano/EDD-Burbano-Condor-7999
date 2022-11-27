/***********************************************************************
 * Module:  Ingresos.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:04
 * Purpose: Implementation of the class Ingresos
 ***********************************************************************/

#include "Ingresos.h"
#include "Validacion.hpp"

Validacion validacionIngresos;


//getters y setters
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

double Ingresos::getValorHora(void)
{
   return valorHora;
}
void Ingresos::setValorHora(double newValorHora)
{
   valorHora = newValorHora;
}

double Ingresos::getValorHoraExtra(void)
{
   return valorHoraExtra;
}
void Ingresos::setValorHoraExtra(double newValorHoraExtra)
{
   valorHoraExtra = newValorHoraExtra;
}
//------------------> FIN de getters y setters

//-------------------> Inicio de metodos
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

double Ingresos::calcularTotalComisiones(int totalComisiones, double valorComision)
{
   return totalComisiones * valorComision;
}

double Ingresos::ingresarValorHoraExtra(void)
{
   double valorHoraExtra;
   cout << "Ingrese el valor de la hora extra: ";
   valorHoraExtra = validacionIngresos.charToFloat();
   return valorHoraExtra;
}

double Ingresos::ingresarValorHoraSuplementaria(void)
{
   double valorHora;
   cout << "Ingrese el valor de la hora suplementaria: ";
   valorHora = validacionIngresos.charToFloat();
   return valorHora;
}

int Ingresos::ingresarHorasExtras(void)
{
   int horasExtras;
   cout << "Ingrese las horas extras: ";
   horasExtras = validacionIngresos.charToInt();
   return horasExtras;
}

int Ingresos::ingresarHorasSuplementarias(void)
{
   int horasSuplementarias;
   cout << "Ingrese las horas suplementarias: ";
   horasSuplementarias = validacionIngresos.charToInt();
   return horasSuplementarias;
}

int Ingresos::ingresarDiasTrabajados(void)
{
   int diasTrabajados;
   cout << "Ingrese los dias trabajados: ";
   diasTrabajados = validacionIngresos.charToInt();
   return diasTrabajados;
}

double Ingresos::ingresarRemuneracionUnificada(void)
{
   double remuneracionUnificada;
   cout << "Ingrese la remuneracion unificada: ";
   remuneracionUnificada = validacionIngresos.charToFloat();
   return remuneracionUnificada;
}
double Ingresos::ingresarTotalComisiones(void)
{
   double totalComisiones;
   cout << "Ingrese el total de comisiones: ";
   totalComisiones = validacionIngresos.charToFloat();
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
   cout<<"Ingrese el valor de la hora suplementaria: "<<endl;
   valorHora = ingresarValorHoraSuplementaria();
   this->setValorHora(valorHora);
   cout<<"Ingrese el valor de la hora extra: "<<endl;
   valorHoraExtra = ingresarValorHoraExtra();
   this->setValorHoraExtra(valorHoraExtra);
   cout<<"Ingrese las horas extras: "<<endl;
   horasExtras = ingresarHorasExtras();
   this->setHorasExtras(horasExtras);
   cout<<"Ingrese las horas suplementarias: "<<endl;
   horasSuplementarias = ingresarHorasSuplementarias();
   this->setHorasSuplementarias(horasSuplementarias);
   cout<<"Ingrese los dias trabajados: "<<endl;
   diasTrabajados = ingresarDiasTrabajados();
   this->setDiasTrabajados(diasTrabajados);
   cout<<"Ingrese la remuneracion unificada: "<<endl;
   remuneracionUnificada = ingresarRemuneracionUnificada();
   this->setRemuneracionUnificada(remuneracionUnificada);
   cout<<"Ingrese el total de comisiones: "<<endl;
   totalComisiones = ingresarTotalComisiones();
   this->setTotalComisiones(totalComisiones);
   totalIngresos = calcularTotalIngresos();
   cout<<"El total de ingresos es: "<<totalIngresos<<endl;

}

Ingresos::Ingresos()
{

}
