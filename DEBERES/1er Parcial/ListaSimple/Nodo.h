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
