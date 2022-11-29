
#include "RolDePagos.cpp"
#include "ListaDoble.hpp"

int main(int argc, char* argv[])
{

    ListaDoble<string> lista;
    RolDePagos<string> rol;  

    RolDePagos<Trabajador> rol2;
    Trabajador *trabajador;
    Ingresos *ingresos;
    Egresos *egresos;

    //trabajador = rol2.generarTrabajador();
    //trabajador->mostrarDatos();
    ingresos= rol2.generarIngresos();
    ingresos->mostrarDatos();
    //rol.imprimirRol(trabajador, ingresos);  
    egresos=rol.generarEgresos(ingresos->getTotalIngresos());

    // cout<<"Hola: "<< egresos->getTotalEgresos();
    egresos->mostrarDatos();
    free(trabajador);
    free(ingresos);
    free(egresos);
    return 0;
}
