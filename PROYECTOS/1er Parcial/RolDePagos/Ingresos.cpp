/***********************************************************************
 * Module:  Ingresos.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:04
 * Purpose: Implementation of the class Ingresos
 ***********************************************************************/

#include "Ingresos.h"
#include "Validacion.hpp"

Validacion validacionIngresos;

// getters y setters
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


int Ingresos::ingresoInputOnlyNumber(std::string mensaje)
{
   int valor;
   cout << mensaje;
   valor = validacionIngresos.charToInt();
   return valor;
}

double Ingresos::ingresoInputOnlyDouble(std::string mensaje){
   double valor;
   cout << mensaje;
   valor = validacionIngresos.charToFloat();
   return valor;
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

double Ingresos::calcularTotalComisiones(int totalComisiones, double valorComision)
{
   return totalComisiones * valorComision;
}


void Ingresos::ingresarDatos()
{
   double valorHora;
   double valorHoraExtra;
   int horasExtras;
   int horasSuplementarias;
   int diasTrabajados;
   double remuneracionUnificada;
   double totalComisiones;
   double totalIngresos;   


   cout << "Ingresos" << endl;
   
   valorHora = ingresoInputOnlyDouble("Ingrese el valor de la hora suplementaria: ");
   this->setValorHora(valorHora);

   valorHoraExtra = ingresoInputOnlyDouble("Ingrese el valor de la hora extra: ");
   this->setValorHoraExtra(valorHoraExtra);
   
   horasExtras = ingresoInputOnlyNumber("Ingrese las horas extras: ");
   this->setHorasExtras(horasExtras);

   horasSuplementarias = ingresoInputOnlyNumber("Ingrese las horas suplementarias: ");
   this->setHorasSuplementarias(horasSuplementarias);
   
   diasTrabajados = ingresoInputOnlyNumber("Ingrese los dias trabajados: ");
   this->setDiasTrabajados(diasTrabajados);

   remuneracionUnificada = ingresoInputOnlyDouble("Ingrese la remuneracion unificada: ");
   this->setRemuneracionUnificada(remuneracionUnificada);

   totalComisiones = ingresoInputOnlyNumber("Ingrese el total de comisiones: ");
   this->setTotalComisiones(totalComisiones);
   totalIngresos = calcularTotalIngresos();
   this->setTotalIngresos(totalIngresos);
   cout << "El total de ingresos es: " << totalIngresos << endl;
}

void Ingresos::mostrarDatos(){
   double valorHora;
   valorHora = this->getValorHora();
   double valorHoraExtra;
   valorHoraExtra = this->getValorHoraExtra();
   int horasExtras;
   horasExtras = this->getHorasExtras();
   int horasSuplementarias;
   horasSuplementarias = this->getHorasSuplementarias();
   int diasTrabajados;
   diasTrabajados = this->getDiasTrabajados();
   double remuneracionUnificada;
   remuneracionUnificada = this->getRemuneracionUnificada();
   double totalComisiones;
   totalComisiones = this->getTotalComisiones();
   double totalIngresos;   
   totalIngresos = this->getTotalIngresos();
   
   cout<<endl<<"Valor hora: "<<valorHora<<endl;
   cout<<endl<<"Valor hora extra: "<<valorHoraExtra<<endl;
   cout<<endl<<"Horas extras: "<<horasExtras<<endl;
   cout<<endl<<"Horas suplementarias: "<<horasSuplementarias<<endl;
   cout<<endl<<"Dias trabajados: "<<diasTrabajados<<endl;
   cout<<endl<<"Remuneracion unificada: "<<remuneracionUnificada<<endl;
   cout<<endl<<"Total comisiones: "<<totalComisiones<<endl;
   cout<<endl<<"Total ingresos: "<<totalIngresos<<endl;
}

Ingresos::Ingresos(){
   
}

//string Ingresos::toString(){
//   return "Total ingresos: " + to_string(calcularTotalIngresos()); //Se le puede ir añadiendo los demas atributos o lo que se desee
// 
//}
