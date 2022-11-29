
#include "RolDePagos.cpp"
#include "ListaDoble.hpp"

int main(int argc, char* argv[])
{

    ListaDoble<string> lista;
    RolDePagos<string> rol;  

    Trabajador *trabajador = new Trabajador();
    Ingresos *ingresos;
    Egresos *egresos;
    string rolDePagos;
    trabajador->ingresarDatos(); 
    //ingresos->ingresarDatos();
    //ingresos->mostrarDatos();
    rol.guardarArchivoTxt(trabajador->toString());
    lista.insertarPorInicio(trabajador->toString());
    lista.mostrar();  
    free(trabajador);
    return 0;
}
