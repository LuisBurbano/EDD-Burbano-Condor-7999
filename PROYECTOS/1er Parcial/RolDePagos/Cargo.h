/***********************************************************************
 * Module:  Cargo.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:26
 * Purpose: Declaration of the class Cargo
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Cargo_h)
#define __ProyectoUnidad1_Cargo_h
#include<iostream>

#include<cstring>

using namespace std;

class Cargo
{
public:
   string getEmpresa(void);
   void setEmpresa(string newEmpresa);
   string getPuesto(void);
   void setPuesto(string newPuesto);
   double getValorHora(void);
   void setValorHora(double newValorHora);
   string getDepartamento(void);
   void setDepartamento(string newDepartamento);
   Cargo();

protected:
private:
   string puesto;
   double valorHora;
   string departamento;
   string empresa;


};

#endif