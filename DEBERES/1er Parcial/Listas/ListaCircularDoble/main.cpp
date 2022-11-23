#include <iostream>
#include "ListaCircularD.hpp"
#include <string>

using namespace std;

int main(){
    ListaDoble<int> lista;
    lista.insertarPorFin(20);
    lista.insertarPorFin(15);
    lista.insertarPorFin(50);
    lista.insertarPorInicio(12);
    lista.insertarPorInicio(10);
    lista.insertarPorPosicion(30, 2);
    lista.mostrar();
    lista.buscar(15);
    lista.eliminarPorPosicion(0);
    lista.mostrar();


};