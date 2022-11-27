/***********************************************************************
 * Module:  Cargo.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:26
 * Purpose: Declaration of the class Cargo
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Cargo_h)
#define __ProyectoUnidad1_Cargo_h
#include<string>


class Cargo
{
public:
   std::string getEmpresa(void);
   void setEmpresa(std::string newEmpresa);
   std::string getPuesto(void);
   void setPuesto(std::string newPuesto);
   double getValorHora(void);
   void setValorHora(double newValorHora);
   std::string getDepartamento(void);
   void setDepartamento(std::string newDepartamento);
   Cargo();

protected:
private:
   std::string puesto;
   double valorHora;
   std::string departamento;
   std::string empresa;


};

#endif