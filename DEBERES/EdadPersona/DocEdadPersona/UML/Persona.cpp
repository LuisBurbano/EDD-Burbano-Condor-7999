/***********************************************************************
 * Module:  Persona.cpp
 * Author:  luis1
 * Modified: jueves, 27 de octubre de 2022 19:21:48
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Persona.h"

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     String
////////////////////////////////////////////////////////////////////////

String Persona::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(String newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(String newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     String
////////////////////////////////////////////////////////////////////////

String Persona::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(String newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(String newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCedula()
// Purpose:    Implementation of Persona::getCedula()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCedula(int newCedula)
// Purpose:    Implementation of Persona::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCedula(int newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getAnioNac()
// Purpose:    Implementation of Persona::getAnioNac()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getAnioNac(void)
{
   return anioNac;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setAnioNac(int newAnioNac)
// Purpose:    Implementation of Persona::setAnioNac()
// Parameters:
// - newAnioNac
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setAnioNac(int newAnioNac)
{
   anioNac = newAnioNac;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getMesNac()
// Purpose:    Implementation of Persona::getMesNac()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getMesNac(void)
{
   return mesNac;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setMesNac(int newMesNac)
// Purpose:    Implementation of Persona::setMesNac()
// Parameters:
// - newMesNac
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setMesNac(int newMesNac)
{
   mesNac = newMesNac;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getEdad()
// Purpose:    Implementation of Persona::getEdad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Persona::getEdad(void)
{
   return edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setEdad(int newEdad)
// Purpose:    Implementation of Persona::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setEdad(int newEdad)
{
   edad = newEdad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::Persona(String Nombre, String Apellido, int Cedula, int Edad, int MesNac, int AnioNac)
// Purpose:    Implementation of Persona::Persona()
// Parameters:
// - Nombre
// - Apellido
// - Cedula
// - Edad
// - MesNac
// - AnioNac
// Return:     
////////////////////////////////////////////////////////////////////////

Persona::Persona(String Nombre, String Apellido, int Cedula, int Edad, int MesNac, int AnioNac)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::finalize()
// Purpose:    Implementation of Persona::finalize()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::finalize(void)
{
   // TODO : implement
}