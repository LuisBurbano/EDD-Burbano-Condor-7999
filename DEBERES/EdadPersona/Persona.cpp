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
#include "Persona.h"

using namespace std;

int Persona::calcularEdad(){
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

void Persona::imprimirDatos(){
	
	cout<<"\nLos datos ingresados y la edad calculada son los siguientes";
	cout<<"\nNombre y apellido "<<nombre<<" "<<apellido<<endl;
	cout<<"\nCedula "<<cedula<<endl;
	cout<<"\nLa edad calculada es "<<edad<<endl;
	
}