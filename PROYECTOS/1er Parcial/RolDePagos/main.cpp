
#include "RolDePagos.cpp"

int main(int argc, char* argv[])
{


    
    RolDePagos<Trabajador> rol;  

    Trabajador *trabajador;
    Ingresos *ingresos;
    trabajador=rol.generarTrabajador();
    trabajador->mostrarDatos();
    ingresos=rol.generarIngresos();
    ingresos->mostrarDatos();
    //rol.imprimirRol(trabajador, ingresos);  
    free(trabajador);
    return 0;
}
