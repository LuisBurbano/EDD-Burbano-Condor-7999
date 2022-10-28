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