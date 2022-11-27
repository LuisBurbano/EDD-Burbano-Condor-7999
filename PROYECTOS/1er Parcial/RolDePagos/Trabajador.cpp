/***********************************************************************
 * Module:  Trabajador.cpp
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:13
 * Purpose: Implementation of the class Trabajador
 ***********************************************************************/

#include "Trabajador.h"
#include "Validacion.hpp"
#include <string.h>





Validacion validacion;

char *Trabajador::getCedula(void)
{
   return cedula;
}

void Trabajador::setCedula(char *newCedula)
{
   
   cedula = newCedula;
}

char *Trabajador::getNombre(void)
{
   return nombre;
}

void Trabajador::setNombre(char *newNombre)
{
   nombre = newNombre;
}

char *Trabajador::getApellido(void)
{
   return apellido;
}

void Trabajador::setApellido(char *newApellido)
{
   apellido = newApellido;
}

char *Trabajador::getTelefono(void)
{
   return telefono;
}

void Trabajador::setTelefono(char *newTelefono)
{
   telefono = newTelefono;
}

char *Trabajador::getDireccion(void)
{
   return direccion;
}

void Trabajador::setDireccion(char *newDireccion)
{
   direccion = newDireccion;
}

char *Trabajador::getCorreo(void)
{
   return correo;
}

void Trabajador::setCorreo(char *newCorreo)
{
   correo = newCorreo;
}

Trabajador::Trabajador()
{
   // TODO : implement
}

char* Trabajador::validarCedula(char *cedulaIngresada)
{

   char cedulaPares[5];
   char cedulaImpares[5];

   int cedulaParte1[5];
   int cedulaParte2[5];

   int sumaPares = 0;
   int sumaImpares = 0;
   int sumaTotal = 0;
   int digitoVerificador = 0;
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
      cedulaIngresada=strdup("0");
   }
   return cedulaIngresada;
   
}

void Trabajador::ingresarCedula()
{
   char *cedulaIngresada;
   char *cedulaValidada;
   char *p ="alcachofa";
   string almeja;

   almeja="holis bolis";
   

   
   
   do
   {
      cedulaIngresada = validacion.integerImput(" > ");
      cedulaValidada=validarCedula(cedulaIngresada);
   } while (cedulaIngresada != cedulaValidada);


cout<<almeja<<endl;
   setCedula(cedulaIngresada);   
     
}