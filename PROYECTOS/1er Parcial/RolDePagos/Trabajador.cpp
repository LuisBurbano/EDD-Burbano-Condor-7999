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
   return *nombre;
}

void Trabajador::setNombre(std::string newNombre)
{
   this->nombre = &newNombre;
}

std::string Trabajador::getApellido(void)
{
   return *apellido;
}

void Trabajador::setApellido(std::string newApellido)
{
   this->apellido = &newApellido;
}

std::string Trabajador::getTelefono(void)
{
   return *telefono;
}

void Trabajador::setTelefono(std::string newTelefono)
{
   this->telefono = &newTelefono;
}

std::string Trabajador::getDireccion(void)
{
   return *direccion;
}

void Trabajador::setDireccion(std::string newDireccion)
{
   this->direccion = &newDireccion;
}

std::string Trabajador::getCorreo(void)
{
   return *correo;
}

void Trabajador::setCorreo(std::string newCorreo)
{
   this->correo = &newCorreo;
}

std::string Trabajador::getCargo(void)
{
   return *cargo;
}

void Trabajador::setCargo(std::string newCargo)
{
   this->cargo = &newCargo;
}
std::string Trabajador::getDepartamento(void)
{
   return *departamento;
}

void Trabajador::setDepartamento(std::string newDepartamento)
{
   this->departamento = &newDepartamento;
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

   return cedulaValidada;
}

std::string Trabajador::ingresarNombre()
{
   std::string nombreIngresado;
   nombreIngresado = validacion.charImput(" > ");
   return nombreIngresado;
}

std::string Trabajador::ingresarApellido()
{
   std::string apellidoIngresado;
   apellidoIngresado = validacion.charImput(" > ");
   return apellidoIngresado;
}

std::string Trabajador::ingresarTelefono()
{
   std::string telefonoIngresado;
   telefonoIngresado = validacion.integerImput(" > ");
   return telefonoIngresado;
}

std::string Trabajador::ingresarDireccion()
{
   std::string direccionIngresada;
   direccionIngresada = validacion.charImput(" > ");
   return direccionIngresada;
}

std::string Trabajador::ingresarCorreo()
{
   std::string correoIngresado;
   correoIngresado = validacion.charImput(" > ");
   return correoIngresado;
}
std::string Trabajador::ingresarCargo()
{
   string cargoIngresado;
   cargoIngresado = validacion.charImput(" > ");
   return cargoIngresado;
}


std::string Trabajador::ingresarDepartamento()
{
   std::string departamentoIngresado;
   departamentoIngresado = validacion.charImput(" > ");
   return departamentoIngresado;
}

void Trabajador::ingresarDatos(){
   std::string cedulaIngresada;
   std::string nombreIngresado;
   std::string apellidoIngresado;
   std::string telefonoIngresado;
   std::string direccionIngresada;
   std::string correoIngresado;
   std::string cargoIngresado;
   std::string departamentoIngresado;
   cout << " Ingrese la cedula del trabajador: " << endl;
   cedulaIngresada = ingresarCedula();
   this->setCedula(cedulaIngresada);
   cout << " Ingrese el nombre del trabajador: " << endl;
   nombreIngresado = ingresarNombre();
   this->setNombre(nombreIngresado);
   cout << " Ingrese el apellido del trabajador: " << endl;
   apellidoIngresado = ingresarApellido();
   this->setApellido(apellidoIngresado);
   cout << " Ingrese el telefono del trabajador: " << endl;
   telefonoIngresado = ingresarTelefono();\
   this->setTelefono(telefonoIngresado);
   cout << " Ingrese la direccion del trabajador: " << endl;
   direccionIngresada = ingresarDireccion();
   this->setDireccion(direccionIngresada);
   cout << " Ingrese el correo del trabajador: " << endl;
   correoIngresado = ingresarCorreo();
   this->setCorreo(correoIngresado);
   cout << " Ingrese el cargo del trabajador: " << endl;
   cargoIngresado = ingresarCargo();
   this->setCargo(cargoIngresado);
   cout << " Ingrese el departamento del trabajador: " << endl;
   departamentoIngresado = ingresarDepartamento();
   this->setDepartamento(departamentoIngresado);

   cout<< " Trabajador ingresado con exito" << endl;
   
}


void Trabajador::mostrarDatos(){
   cout << " Cedula: " << this->getCedula() << endl;
   cout << " Nombre: " << this->getNombre() << endl;
   cout << " Apellido: " << this->getApellido() << endl;
   cout << " Telefono: " << this->getTelefono() << endl;
   cout << " Direccion: " << this->getDireccion() << endl;
   cout << " Correo: " << this->getCorreo() << endl;
   cout << " Cargo: " << this->getCargo() << endl;
   cout << " Departamento: " << this->getDepartamento() << endl;
}