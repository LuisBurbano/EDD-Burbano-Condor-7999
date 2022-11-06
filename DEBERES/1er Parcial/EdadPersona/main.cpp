/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  main.cpp
 * Created: martes, 1 de noviembre 10:51:00
 * Modified: martes, 1 de noviembre 10:51:00
 * Problem: Sobrecarga de operadores
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#include <iostream>
#include "Persona.h"

using namespace std;

int main(int argc, char** argv) {
	
	Persona p1;
	
	cout<<"Porfavor ingrese su nombre ";
	cin>>p1.nombre;
	cout<<"apellido ";
	cin>>p1.apellido;
	cout<<"cedula ";
	cin>>p1.cedula;
	
	
	p1.edad = p1.calcularEdad();
	
	p1.imprimirDatos();
	
	
	return 0;
}