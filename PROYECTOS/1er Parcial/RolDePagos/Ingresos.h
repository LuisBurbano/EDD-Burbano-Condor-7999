/***********************************************************************
 * Module:  Ingresos.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:04
 * Purpose: Declaration of the class Ingresos
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Ingresos_h)
#define __ProyectoUnidad1_Ingresos_h

class Ingresos
{
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
   Ingresos();

protected:
private:
   int diasTrabajados;
   double remuneracionUnificada;
   int horasSuplementarias;
   int horasExtras;
   int totalComisiones;
   double totalIngresos;


};

#endif