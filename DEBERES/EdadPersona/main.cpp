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