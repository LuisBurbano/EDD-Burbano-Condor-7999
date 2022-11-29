/***********************************************************************
 * Module:  RolDePagos.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 7:45:56
 * Purpose: Declaration of the class RolDePagos
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_RolDePagos_h)
#define __ProyectoUnidad1_RolDePagos_h

#include "Ingresos.cpp"
#include "Egresos.cpp"
#include "Trabajador.cpp"


template <typename T>
class RolDePagos
{
public:
   
   T* getIngresos(void);
   void setIngresos(T* newIngresos);
   T* getEgresos(void); 
   void setEgresos(T* newEgresos);
   T* getTrabajador(void);
   void setTrabajador(T* newTrabajador);
   
   void imprimirRol(T*,Ingresos*, Egresos*);
   T* generarTrabajador();
   Ingresos* generarIngresos();
   Egresos* generarEgresos(double);
   
   RolDePagos();
   void menuRolDePagos();
   string toString(Trabajador trabajador, Ingresos ingresos, Egresos egresos);
   void guardarArchivoTxt(string a);

protected:
private:
   T *ingresos;
   T *egresos;   
   T *trabajador;
};

#endif