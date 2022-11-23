/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
		INGENIERA DE SOFTWARE
                
	AUTORES:
		Mateo Javier Condor Sosa 	 
		Luis Ariel Burbano Pacheco       
	FECHA DE CREACION:
		16/11/2022         	
	FECHA DE MODIFICACION:
		21/11/2022   
*/
#pragma once
#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(int dato, Nodo *sig = NULL) {
    this->dato = dato;
    this->siguiente = sig;
}

Nodo::Nodo(){

}

int Nodo::getDato() {
    return dato;
}

Nodo *Nodo::getSiguiente() {
    return siguiente;
}

void Nodo::setDato(int dato) {
    this->dato = dato;
}

void Nodo::setSiguiente(Nodo *sig) {
    this->siguiente = sig;
}


