#include "RolDePagos.h"



void RolDePagos::imprimirRol(void)
{
    string cedula;

    cedula=trabajador->ingresarCedula();    
    trabajador->setCedula(cedula);
    cedula = trabajador->getCedula();
    cout << "Cedula: " << cedula << endl;

    
}   


RolDePagos::RolDePagos()
{
   
}
