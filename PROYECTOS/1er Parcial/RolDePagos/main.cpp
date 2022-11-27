
#include "RolDePagos.cpp"

int main(int argc, char const *argv[])
{

    RolDePagos *rol;

    rol->imprimirRol();
    rol->trabajador->ingresarCedula();

    free(rol);
    return 0;
}
