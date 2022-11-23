#include <iostream>
#include "ListaDoble.hpp"
using namespace std;

int main(){
    ListaDoble<int> lista;
    lista.insertarPorInicio(1);
    lista.insertarPorInicio(2);
    lista.insertarPorInicio(3);
    lista.insertarPorInicio(4);
    lista.insertarPorInicio(5);
    lista.insertarPorFin(0);
    lista.insertarPorPosicion(8, 3);
    lista.insertarPorPosicion(9, 4);
    lista.insertarPorPosicion(10, 5);
    lista.mostrar();
    lista.buscar(8);
    lista.eliminarPorInicio();
    lista.eliminarPorFin();
    lista.mostrar();
    lista.buscar(8);
    lista.mostrar();
    return 0;
}





