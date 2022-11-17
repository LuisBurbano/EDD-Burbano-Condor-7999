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


