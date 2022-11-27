/***********************************************************************
 * Module:  Trabajador.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:13
 * Purpose: Implementation of the class Trabajador
 ***********************************************************************/

#include "Trabajador.h"
#include "Validacion.hpp"

Validacion validacion;

std::string Trabajador::getCedula(void)
{
   return *cedula;
}

void Trabajador::setCedula(std::string newCedula)
{

   this->cedula = &newCedula;
}

std::string Trabajador::getNombre(void)
{
   return nombre;
}

void Trabajador::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

std::string Trabajador::getApellido(void)
{
   return apellido;
}

void Trabajador::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

std::string Trabajador::getTelefono(void)
{
   return telefono;
}

void Trabajador::setTelefono(std::string newTelefono)
{
   telefono = newTelefono;
}

std::string Trabajador::getDireccion(void)
{
   return direccion;
}

void Trabajador::setDireccion(std::string newDireccion)
{
   direccion = newDireccion;
}

std::string Trabajador::getCorreo(void)
{
   return correo;
}

void Trabajador::setCorreo(std::string newCorreo)
{
   correo = newCorreo;
}

Trabajador::Trabajador()
{
   // TODO : implement
}

std::string Trabajador::validarCedula(char *cedulaIngresada)
{
   string cedula;
   char cedulaPares[5];
   char cedulaImpares[5];

   int cedulaParte1[5];
   int cedulaParte2[5];

   int sumaPares = 0;
   int sumaImpares = 0;
   int sumaTotal = 0;
   int digitoVerificador = 0;
   cedula = cedulaIngresada;
   for (int i = 0; i < 10; i++)
   {
      if (i % 2 == 0)
      {
         cedulaPares[i] = cedulaIngresada[i];
         cedulaParte1[i] = atoi(&cedulaPares[i]);
         cedulaParte1[i] = cedulaParte1[i] * 2;
         if (cedulaParte1[i] > 9)
         {
            cedulaParte1[i] = cedulaParte1[i] - 9;
         }
         sumaPares = sumaPares + cedulaParte1[i];
      }
      else if (i % 2 != 0)
      {
         cedulaImpares[i] = cedulaIngresada[i];
         cedulaParte2[i] = atoi(&cedulaImpares[i]);

         if (i != 9)
         {
            sumaImpares = sumaImpares + cedulaParte2[i];
         }
      }
      if (i == 9)
      {
         sumaTotal = sumaPares + sumaImpares;
         digitoVerificador = sumaTotal % 10;

         if (digitoVerificador != 0)
         {
            digitoVerificador = 10 - digitoVerificador;
         }
      }
   }

   if (digitoVerificador == atoi(&cedulaIngresada[9]))
   {
      cout << " Cedula Valida" << endl;
      
   }
   else if (digitoVerificador != atoi(&cedulaIngresada[9]))
   {
      cout << " Cedula Invalida" << endl;
      
      cedula = "0";	
   }
   return cedula;
}

std::string Trabajador::ingresarCedula()
{
   char *cedulaIngresada;
   std::string cedulaValidada;
   std::string cedulaIngresadaAux;
   do
   {
      cedulaIngresada = validacion.integerImput(" > ");
      cedulaIngresadaAux = cedulaIngresada;
      cedulaValidada = validarCedula(cedulaIngresada);

   } while (cedulaIngresada != cedulaValidada);

   setCedula(cedulaIngresada);
   return cedulaValidada;
}