
#include "RolDePagos.cpp"

int main(int argc, char* argv[])
{


    
    RolDePagos<Trabajador> rol;  

    Trabajador *trabajador;
    Ingresos *ingresos;
    Egresos *egresos;
    //trabajador=rol.generarTrabajador();
    //trabajador->mostrarDatos();
    //ingresos=rol.generarIngresos();
    //ingresos->mostrarDatos();
    //rol.imprimirRol(trabajador, ingresos);  
    egresos=rol.generarEgresos();
    cout<<"Hola: "<< egresos->getTotalEgresos();
    egresos->mostrarDatos();
    free(trabajador);
    free(ingresos);
    free(egresos);
    return 0;
}
