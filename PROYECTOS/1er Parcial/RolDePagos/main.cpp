
#include "RolDePagos.cpp"
#include "ListaDoble.hpp"

int main(int argc, char* argv[])
{

    ListaDoble<string> lista;
    RolDePagos<string> rol;  

    Trabajador *trabajador = new Trabajador();
    Ingresos *ingresos;
<<<<<<< HEAD
    Egresos *egresos;
    string rolDePagos;
    trabajador->ingresarDatos(); 
    //ingresos->ingresarDatos();
    //ingresos->mostrarDatos();
    rol.guardarArchivoTxt(trabajador->toString());
    lista.insertarPorInicio(trabajador->toString());
    lista.mostrar();  
=======
    trabajador=rol.generarTrabajador();
    trabajador->mostrarDatos();
    ingresos=rol.generarIngresos();
    ingresos->mostrarDatos();
    //rol.imprimirRol(trabajador, ingresos);  
>>>>>>> 02cbfd4d9858d1233c1fcc33e09fd2d7d5fface0
    free(trabajador);
    return 0;
}
