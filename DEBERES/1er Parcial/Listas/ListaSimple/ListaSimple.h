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
#include "Nodo.cpp"

class ListaSimple {
    private:
        Nodo *inicio;
        Nodo *fin;
    public:
        ListaSimple();
        void insertarDatoLista(int dato);
        void mostrarLista();
        void eliminarDatoLista(int dato);
        void buscarDatoLista(int dato);
        void modificarDatoLista(int dato, int nuevoDato);
        char *integerImput(char const *msj);
        int charToInt();
};
