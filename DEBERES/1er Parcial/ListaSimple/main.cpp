#include <iostream>
#include "ListaSimple.cpp"

using namespace std;

int main() {
        
        ListaSimple *lista = new ListaSimple();
        lista->insertarDatoLista(15);
        lista->insertarDatoLista(20);
        lista->insertarDatoLista(56);
        lista->insertarDatoLista(23);
        lista->insertarDatoLista(45);
        lista->mostrarLista();
        lista->eliminarDatoLista(56);
        lista->mostrarLista();
        lista->buscarDatoLista(23);
        lista->modificarDatoLista(23, 100);
        lista->mostrarLista();

        return 0;

}
