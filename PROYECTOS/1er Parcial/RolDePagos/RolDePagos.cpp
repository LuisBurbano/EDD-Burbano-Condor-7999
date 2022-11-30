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

#include "RolDePagos.h"
#include "Validacion.hpp"
#include "ListaDoble.hpp"
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>



template <typename T>
double RolDePagos<T>::getSalario(void)
{
    return sueldo;
}

template <typename T>
void RolDePagos<T>::setSalario(double newSalario)
{
    sueldo = newSalario;
}

template <typename T>
void RolDePagos<T>::imprimirRol(T *newTrabajador, Ingresos *newIngresos, Egresos *newEgresos)
{
    newTrabajador->mostrarDatos();
    newIngresos->mostrarDatos();
    newEgresos->mostrarDatos();
    cout << "\nSueldo Neto: " << newIngresos->getTotalIngresos() - newEgresos->getTotalEgresos() << endl;
}
template <typename T>
T *RolDePagos<T>::generarTrabajador()
{

    cout << "Ingrese los datos del trabajador" << endl;
    Trabajador *trabajador;
    trabajador = new Trabajador();
    trabajador->ingresarDatos();
    return trabajador;
}
template <typename T>
Ingresos *RolDePagos<T>::generarIngresos()
{
    cout << "Ingrese los datos de los ingresos" << endl;
    Ingresos *ingresos;
    ingresos = new Ingresos();
    ingresos->ingresarDatos();
    return ingresos;
}

template <typename T>
Egresos *RolDePagos<T>::generarEgresos(double totalIngresos)
{

    Egresos *egresos;
    egresos = new Egresos();
    egresos->ingresarDatos(totalIngresos);
    return egresos;
}

template <typename T>
RolDePagos<T>::RolDePagos()
{
}

template <typename T>
string RolDePagos<T>::toString(Trabajador trabajador, Ingresos ingresos, Egresos egresos)
{

std:
    string texto = trabajador.toString() + " " + ingresos.toString() + " " + egresos.toString() + " " + to_string(ingresos.getTotalIngresos() - egresos.getTotalEgresos());
    return texto;
}

template <typename T>
void RolDePagos<T>::guardarArchivoTxt(string a)
{
    ofstream archivo;
    archivo.open("RolDePagos.txt", ios::app);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
    archivo << a + "\n";
    archivo.close();
}



template <typename T>
void RolDePagos<T>::verRolesDePago()
{   
    string line;
    string lectura;
    lectura = validacion.leerArchivoTxt();
    stringstream input_stringstream(lectura);
    cout << "Trabajador              Ingresos   Egresos   Sueldo Neto" << endl;
    cout << "===========================================================================" << endl;
    while (getline(input_stringstream, line, '\n'))
    {
        cout << line << endl;
    }
    cout << "===========================================================================" << endl;
}

template <typename T>
void RolDePagos<T>::verRolesDePagoEnLista()
{
    ListaDoble<string> lista;
    string line;
    string lectura;
    string aux[100];
    int i = 0;
    lectura = validacion.leerArchivoTxt();
    stringstream input_stringstream(lectura);
    while (getline(input_stringstream, line, '\n'))
    {
        aux[i] = line;
        lista.insertarPorFin(aux[i]);
        i++;
    }
    lista.mostrar();
}


template <typename T>
void RolDePagos<T>::buscarRolDePagos()
{
    Trabajador *trabajador;
    int opcion2;
    
    string datoBuscar;
    string rol;
    do
    {
        system("cls");
        cout << "\nBuscar rol de pagos por:" << endl;
        cout << "1. Cedula" << endl;
        cout << "2. Nombre" << endl;
        cout << "3. Apellido" << endl;
        cout << "4. Regresar" << endl;
        cout << "Ingrese una opcion: ";
        opcion2 = validacion.charToInt();
        switch (opcion2)
        {
        case 1:
            cout << "\nIngrese la cedula: ";
            datoBuscar = validacion.ingresoCedula("> ");
            cout << "\n" ;
           cout << "Trabajador              Ingresos   Egresos   Sueldo Neto" << endl;
            cout << "===========================================================================" << endl;
            rol = validacion.buscarEnLista(datoBuscar);
            cout << rol << endl;
            cout << "===========================================================================" << endl;
            system("pause");
            break;
        case 2:
            cout << "\nIngrese el nombre: ";
            datoBuscar = validacion.ingresoNombreApellido("> ");
            cout << "\n" ;
            cout << "Trabajador              Ingresos   Egresos   Sueldo Neto" << endl;
            cout << "===========================================================================" << endl;
            rol = validacion.buscarEnLista(datoBuscar);
            cout << rol << endl;
            cout << "===========================================================================" << endl;
            system("pause");
            break;
        case 3:
            cout << "\nIngrese el apellido: ";
            datoBuscar = validacion.ingresoNombreApellido("> ");
            cout << "\n" ;
            cout << "Trabajador              Ingresos   Egresos   Sueldo Neto" << endl;
            cout << "===========================================================================" << endl;
            rol = validacion.buscarEnLista(datoBuscar);
            cout << rol << endl;
            cout << "===========================================================================" << endl;
            system("pause");
            break;
        case 4:
            break;
        }

    } while (opcion2 != 4);
}
