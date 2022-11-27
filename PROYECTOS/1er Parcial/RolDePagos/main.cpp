
#include "RolDePagos.cpp"

int main(int argc, char* argv[])
{


    
    RolDePagos<Trabajador> rol;  

    Trabajador *trabajador;
    Ingresos *ingresos;
    trabajador=rol.generarTrabajador();
    //trabajador->mostrarDatos();
    ingresos=rol.generarIngresos();
    rol.imprimirRol(trabajador, ingresos);  
    return 0;
}
