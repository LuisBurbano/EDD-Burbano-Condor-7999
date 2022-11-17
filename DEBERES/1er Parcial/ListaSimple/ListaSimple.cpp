#pragma once
#include <iostream>
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
        //this -> fin = nuevo;
    } else {
        this -> fin->setSiguiente(nuevo);
        
    }
   this -> fin = nuevo;
}

void ListaSimple::mostrarLista(){
    Nodo *aux = this -> inicio;
    while (aux) {
        cout << aux->getDato() << " --> ";
        aux = aux->getSiguiente();
    }

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
    while (aux) {
        if (aux->getDato() == dato) {
            cout << "El dato " << dato << " si se encuentra en la lista" << endl;
            break;
        } else {
            cout << "El dato " << dato << " no se encuentra en la lista" << endl;
            break;
        }
        aux = aux->getSiguiente();
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