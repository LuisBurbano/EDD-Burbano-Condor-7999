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

#include "Persona.h"
#include<iostream>
#include <string.h>

string Persona::getNombre(void)
{
   return nombre;
}

void Persona::setNombre(string newNombre)
{
   nombre = newNombre;
}

string Persona::getApellido(void)
{
   return apellido;
}

void Persona::setApellido(string newApellido)
{
   apellido = newApellido;
}

int Persona::getCedula(void)
{
   return cedula;
}

void Persona::setCedula(int newCedula)
{
   cedula = newCedula;
}

int Persona::getAnioNac(void)
{
   return anioNac;
}

void Persona::setAnioNac(int newAnioNac)
{
   anioNac = newAnioNac;
}

int Persona::getMesNac(void)
{
   return mesNac;
}

void Persona::setMesNac(int newMesNac)
{
   mesNac = newMesNac;
}

int Persona::getEdad(void)
{
   return edad;
}

void Persona::setEdad(int newEdad)
{
   edad = newEdad;
}

Persona::Persona(string _nombre, string _apellido, int _cedula, int _edad, int _mesNac, int _anioNac)
{
   nombre = _nombre;
   apellido = _apellido;
   cedula = _cedula;
   mesNac = _mesNac;
   anioNac = _anioNac;
   edad = _edad;
}

void Persona::finalize(void)
{
   // TODO : implement
}
int Persona::calcularEdad(void)
{
   int edad = 0;
	int mesAct; 
	int anioAct;
	bool bucle = 1;
	do{
		
		cout<<"\nPara poder calcular su edad porfavor ingrese los siguientes datos\n";
		cout<<"Ingrese el anio actual ";
		cin>>anioAct;
		cout<<"Ingrese el mes actual ";
		cin>>mesAct;
		cout<<"Ingrese su anio de nacimiento ";
		cin>>anioNac;
		cout<<"Ingrese su mes de nacimiento ";
		cin>>mesNac;
		
		if(anioNac>anioAct){
			cout<<"\nPor favor ingrese un anio de nacimiento menor al anio actual !! ";
			bucle = 0;
		}else{
			edad = anioAct - anioNac;
			bucle = 1;
		}
		
	}while(bucle == 0);
	
	
	if(mesNac>mesAct){
		edad = edad - 1;
	}else{
		if(mesNac==mesAct){
			cout<<"\nFelicidades en este mes cumples anios"<<endl;
			
		} 
	}
	return edad;

}



void Persona::imprimirDatos(void)
{
   cout<<"\nLos datos ingresados y la edad calculada son los siguientes";
	cout<<"\nNombre y apellido "<<nombre<<" "<<apellido<<endl;
	cout<<"\nCedula "<<cedula<<endl;
	cout<<"\nLa edad calculada es "<<edad<<endl;
}