
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


    trabajador = rol2.generarTrabajador();
    
    ingresos= rol2.generarIngresos();
    egresos=rol.generarEgresos(ingresos->getTotalIngresos());
    rol2.imprimirRol(trabajador,ingresos,egresos);
    rol2.guardarArchivoTxt(rol2.toString(*trabajador, *ingresos, *egresos));
    
    free(trabajador);
    free(ingresos);
    free(egresos);
    return 0;
}
