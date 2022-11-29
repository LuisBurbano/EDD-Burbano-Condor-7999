/***********************************************************************
 * Module:  Trabajador.h
 * Author:  luis1
 * Modified: mi�rcoles, 23 de noviembre de 2022 19:59:13
 * Purpose: Declaration of the class Trabajador
 ***********************************************************************/

#if !defined(__ProyectoUnidad1_Trabajador_h)
#define __ProyectoUnidad1_Trabajador_h

#include<string>
class Trabajador
{
public:
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getTelefono(void);
   void setTelefono(std::string newTelefono);
   std::string getDireccion(void);
   void setDireccion(std::string newDireccion);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);
   std::string getCargo(void);
   void setCargo(std::string newCargo);
   std::string getDepartamento(void);
   void setDepartamento(std::string newDepartamento);



   std::string validarCedula(char*);
   std::string ingresarCedula(void);
   std::string ingresarNombre(void);
   std::string ingresarApellido(void);
   std::string ingresarTelefono(void);
   std::string ingresarDireccion(void);
   std::string ingresarCorreo(void);
   std::string ingresarCargo(void);
   std::string ingresarDepartamento(void);
   void ingresarDatos(void);
   void mostrarDatos(void);
   Trabajador();

protected:
private:
   std::string *nombre;
   std::string *apellido;
   std::string *cedula;
   std::string *telefono;
   std::string *direccion;
   std::string *correo;
   std::string *cargo;
   std::string *departamento;
};

#endif