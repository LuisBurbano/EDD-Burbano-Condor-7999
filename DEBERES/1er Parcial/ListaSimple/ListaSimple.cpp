#pragma once
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSimple.h"

using namespace std;

ListaSimple::ListaSimple() {
    this -> inicio = NULL;
    this -> fin = NULL;
}

void ListaSimple::insertarDatoLista(int dato) {
    Nodo *nuevo = new Nodo(dato);
    if (this -> inicio == NULL) {
        this -> inicio = nuevo;
    } else {
        this -> fin -> setSiguiente(nuevo);    
    }
    this -> fin = nuevo;
}

void ListaSimple::mostrarLista(){
    Nodo *aux = this -> inicio;
    Nodo *anterior = NULL;
    while (aux) {
        cout << aux -> getDato() << " --> ";
        aux = aux -> getSiguiente();
    }
    cout << "NULL" << endl;

}

void ListaSimple::eliminarDatoLista(int dato) {
    Nodo *aux = this -> inicio;
    Nodo *anterior = NULL;
    while (aux) {
        if (aux->getDato() == dato) {
            if (aux == this -> inicio) {
                this -> inicio = aux->getSiguiente();
            } else if (aux == this -> fin) {
                this -> fin = anterior;
                anterior->setSiguiente(NULL);
            } else {
                anterior->setSiguiente(aux->getSiguiente());
            }
            delete aux;
            break;
        }
        anterior = aux;
        aux = aux->getSiguiente();
    }
}

void ListaSimple::buscarDatoLista(int dato) {
    Nodo *aux = this -> inicio;
    bool encontrado = false;
    while (aux) {
        if (aux -> getDato() == dato) {
            encontrado = true;
        }else{
            encontrado = false;
        }
        aux = aux->getSiguiente();
    }
    if (encontrado == true) {
        cout << "El dato " << dato << " se encuentra en la lista" << endl;
    } else {
        cout << "El dato " << dato << " no se encuentra en la lista" << endl;
    }
}

void ListaSimple::modificarDatoLista(int dato, int nuevoDato) {
    Nodo *aux = this -> inicio;
    while (aux) {
        if (aux->getDato() == dato) {
            aux->setDato(nuevoDato);
            break;
        }
        aux = aux->getSiguiente();
    }
}


char *ListaSimple::integerImput(char const *msj){
	char *dato=new char[0];
	char c;
	int i = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if(c >= '0' && c <= '9'){
			cout<<c;
			dato[i++] = c;
		}else if(c == '\b'){
				i--;
				cout<<"\b \b";				
		}
	}
	dato[i] = '\0';
	return dato;
}

int ListaSimple::charToInt(){
    char dato[10];
    int valor = 0;
    strcpy(dato, integerImput("\n> "));
    valor=atoi(dato);
    return valor;
}