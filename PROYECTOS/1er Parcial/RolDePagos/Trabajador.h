/***********************************************************************
 * Module:  Trabajador.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:13
 * Purpose: Declaration of the class Trabajador
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Trabajador_h)
#define __ProyectoUnidad1_Trabajador_h


#include<iostream>

using namespace std;

class Trabajador
{
public:
   char *getCedula(void);
   void setCedula(char* newCedula);
   char *getNombre(void);
   void setNombre(char *newNombre);
   char *getApellido(void);
   void setApellido(char *newApellido);
   char *getTelefono(void);
   void setTelefono(char *newTelefono);
   char *getDireccion(void);
   void setDireccion(char *newDireccion);
   char *getCorreo(void);
   void setCorreo(char *newCorreo);
   char *validarCedula(char *);
   void ingresarCedula(void);
   Trabajador();

protected:
private:
   char *nombre;
   char *apellido;
   char *cedula;
   char *telefono;
   char *direccion;
   char *correo;


};

#endif