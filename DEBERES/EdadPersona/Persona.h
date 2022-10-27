#include<iostream>
#include<cstring>

using namespace std;

class Persona{
	
	public:
		string nombre;
		string apellido;
		int cedula;
		int anioNac;
		int mesNac;
		int edad;

		
	public:
		
		Persona(string _nombre, string _apellido, int _cedula, int _edad, int _mesNac, int _anioNac){
			nombre = _nombre;
			apellido = _apellido;
			cedula = _cedula;
			mesNac = _mesNac;
			anioNac = _anioNac;
			edad = _edad;
			
		}
		
		Persona(){
		
		}
		
		int calcularEdad();
		void imprimirDatos();
	
};