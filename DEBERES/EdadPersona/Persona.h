/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  Persona.cpp
 * Created: jueves, 27 de octubre de 2022 19:00:40
 * Modified: jueves, 27 de octubre de 2022 19:21:48
 * Problem: Calcular la edad de una persona
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Persona_h)
#define __ObjectOrientedModel_1_Persona_h
#include <cstring>
#include <iostream>

using namespace std;

class Persona
{
public:
   string getNombre(void);
   void setNombre(string newNombre);
   string getApellido(void);
   void setApellido(string newApellido);
   int getCedula(void);
   void setCedula(int newCedula);
   int getAnioNac(void);
   void setAnioNac(int newAnioNac);
   int getMesNac(void);
   void setMesNac(int newMesNac);
   int getEdad(void);
   void setEdad(int newEdad);
   Persona(string Nombre, string Apellido, int Cedula, int Edad, int MesNac, int AnioNac);
   int calcularEdad(void);
   void imprimirDatos(void);

protected:
   void finalize(void);

private:
   string nombre;
   string apellido;
   int cedula;
   int anioNac;
   int mesNac;
   int edad;


};

#endif