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

class Nodo {
    private:
        int dato;
        Nodo *siguiente;
    public:
        Nodo(int dato, Nodo *siguiente);
        Nodo();
        int getDato();
        Nodo *getSiguiente();
        void setDato(int dato);
        void setSiguiente(Nodo *siguiente);

};
