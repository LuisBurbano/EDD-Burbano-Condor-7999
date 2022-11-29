/***********************************************************************
 * Module:  Ingresos.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:04
 * Purpose: Declaration of the class Ingresos
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Ingresos_h)
#define __ProyectoUnidad1_Ingresos_h
#include <stdlib.h>
#include <string>
#include <iostream>
#include <fstream>

class Ingresos {
public:
   int getTotalComisiones(void);
   void setTotalComisiones(int newTotalComisiones);
   int getDiasTrabajados(void);
   void setDiasTrabajados(int newDiasTrabajados);
   double getRemuneracionUnificada(void);
   void setRemuneracionUnificada(double newRemuneracionUnificada);
   int getHorasSuplementarias(void);
   void setHorasSuplementarias(int newHorasSuplementarias);
   int getHorasExtras(void);
   void setHorasExtras(int newHorasExtras);
   double getTotalIngresos(void);
   void setTotalIngresos(double newTotalIngresos);
   double getValorHora(void);
   void setValorHora(double newValorHora);
   double getValorHoraExtra(void);
   void setValorHoraExtra(double newValorHoraExtra);
   double getValorHoraSuplementaria(void);
   void setValorHoraSuplementaria(double newValorHoraSuplementaria);

   int ingresoInputOnlyNumber(std::string mensaje);
   double ingresoInputOnlyDouble(std::string mensaje);
   double calcularTotalIngresos();
   double calcularHorasExtras(int, double);
   double calcularHorasSuplementarias(int, double);
   double calcularTotalComisiones();
   void ingresarDatos(void);
   void mostrarDatos(void);
   std::string toString(void);
   Ingresos();

   //string toString();

protected:
private:
   int diasTrabajados;
   double remuneracionUnificada;
   int horasSuplementarias;
   int horasExtras;
   int totalComisiones;
   double totalIngresos;
   double valorHora;
   double valorHoraExtra;
};

#endif