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
};
