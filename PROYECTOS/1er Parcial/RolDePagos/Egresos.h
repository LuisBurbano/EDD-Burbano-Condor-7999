/***********************************************************************
 * Module:  Egresos.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 20:04:22
 * Purpose: Declaration of the class Egresos
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Egresos_h)
#define __ProyectoUnidad1_Egresos_h

class Egresos
{
public:


   // getters y setters
   double getIngresosTotales(void);
   void setIngresosTotales(double newIngresosTotales);
   double getAporteIESS(void);
   void setAporteIESS(double newAporteIESS);
   double getImpuestoRenta(void);
   void setImpuestoRenta(double newImpuestoRenta);
   double getMultas(void);
   void setMultas(double newMultas);
   double getAnticipoQuincena(void);
   void setAnticipoQuincena(double newAnticipoQuincena);
   double getTotalEgresos(void);
   void setTotalEgresos(double newTotalEgresos);

   //metodos
   double calcularTotalEgresos();
   double calcularAporteIESS();
   double calcularImpuestoRenta();
   double calcularMultas();
   double calcularAnticipoQuincena();
   void ingresarDatos(double);
   void mostrarDatos(void);
   Egresos();

protected:
private:
   double ingresosTotales;
   double aporteIESS;
   double impuestoRenta;
   double multas;
   double anticipoQuincena;
   double totalEgresos;

};

#endif