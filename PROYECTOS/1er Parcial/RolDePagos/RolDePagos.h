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
#include "Cargo.cpp"
#include "Trabajador.cpp"

class Ingresos;
class Egresos;
class Cargo;
class Trabajador;

class RolDePagos
{
public:

   void imprimirRol(void);

   Ingresos *ingresos;
   Egresos *egresos;
   Cargo *cargo;
   Trabajador *trabajador;

   RolDePagos();

protected:
private:

};

#endif