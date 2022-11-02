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