/***********************************************************************
 * Module:  Persona.h
 * Author:  luis1
 * Modified: jueves, 27 de octubre de 2022 19:52:18
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_1_Persona_h)
#define __ObjectOrientedModel_1_Persona_h

class Persona
{
public:
   String getNombre(void);
   void setNombre(String newNombre);
   String getApellido(void);
   void setApellido(String newApellido);
   int getCedula(void);
   void setCedula(int newCedula);
   int getAnioNac(void);
   void setAnioNac(int newAnioNac);
   int getMesNac(void);
   void setMesNac(int newMesNac);
   int getEdad(void);
   void setEdad(int newEdad);
   Persona(String Nombre, String Apellido, int Cedula, int Edad, int MesNac, int AnioNac);
   int calcularEdad(void);
   void imprimirDatos(void);

protected:
   void finalize(void);

private:
   String nombre;
   String apellido;
   int cedula;
   int anioNac;
   int mesNac;
   int edad;


};

#endif