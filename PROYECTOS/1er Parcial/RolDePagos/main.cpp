/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
        INGENIERA DE SOFTWARE

    AUTORES:
        Mateo Javier Condor Sosa
        Luis Ariel Burbano Pacheco
    FECHA DE CREACION:
        21/11/2022
    FECHA DE MODIFICACION:
        29/11/2022
*/
#include "RolDePagos.cpp"
#include "ListaDoble.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>



int main(int argc, char *argv[])
{
    Validacion validacion;
    ListaDoble<string> lista;
    RolDePagos<Trabajador> rol;
    Trabajador *trabajador;
    Ingresos *ingresos;
    Egresos *egresos;

    
    int opcion;
    do
    {
        system("cls");
        system("cls");
                cout<<"|----------------------------------------------------------------|"<<endl;
                cout<<"|                   .:MENU Rol De Pagos:.                        |"<<endl;
                cout<<"!----------------------------------------------------------------|"<<endl;
                cout<<"|        ~ 1. Generar Rol de Pagos ~                             |"<<endl;
                cout<<"|        ~ 2. Ver Roles de pagos ~                               |"<<endl;
                cout<<"|        ~ 3. Buscar Rol de Pagos ~                              |"<<endl;
                cout<<"|        ~ 4. Vizualizar trabajadores en la lista doble ~        |"<<endl;
                cout<<"|        ~ 5. Salir ~                                            |"<<endl;
                cout<<"|----------------------------------------------------------------|"<<endl;
        
         opcion = validacion.charToInt();
        switch (opcion)
        {
        case 1:
            system("cls");
            trabajador = rol.generarTrabajador();
            ingresos = rol.generarIngresos();
            egresos = rol.generarEgresos(ingresos->getTotalIngresos());
            rol.imprimirRol(trabajador, ingresos, egresos);
            rol.guardarArchivoTxt(rol.toString(*trabajador, *ingresos, *egresos));
            system("pause");
            break;

        case 2:
            system("cls");
            rol.verRolesDePago();
            system("pause");
            break;
        case 3:
            system("cls");
            rol.buscarRolDePagos();
            system("pause");
            break;
        case 4:
            system("cls");
            rol.verRolesDePagoEnLista();
            system("pause");
            break;
        case 5:
            cout << "\n\tSaliendo..." << endl;
            cout << "\n\tGracias por usar nuestro programa " << endl;
            break;
        }
    } while (opcion != 5);

    free(trabajador);
    free(ingresos);
    free(egresos);
    return 0;
}
