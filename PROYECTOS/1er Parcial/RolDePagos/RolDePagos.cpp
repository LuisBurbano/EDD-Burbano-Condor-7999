#include "RolDePagos.h"

template <typename T>

void RolDePagos<T>::imprimirRol(T* newTrabajador, Ingresos* newIngresos, Egresos* newEgresos)
{
    string cedula;
    double sueldo;
    cedula = newTrabajador->getCedula();
    cout << "Cedula: " << cedula << endl;
    sueldo = newIngresos->getTotalIngresos();
    cout<< "Sueldo: " << sueldo << endl;
}   
template <typename T>
T* RolDePagos<T>::generarTrabajador()
{
    
    cout<<"Ingrese los datos del trabajador"<<endl;
    Trabajador *trabajador;
    trabajador = new Trabajador();
    trabajador->ingresarDatos();
    return trabajador;

}
template <typename T>
Ingresos* RolDePagos<T>::generarIngresos()
{
    cout<<"Ingrese los datos de los ingresos"<<endl;
    Ingresos *ingresos;
    ingresos = new Ingresos();
    ingresos->ingresarDatos();
    return ingresos;
}

template <typename T>
Egresos* RolDePagos<T>::generarEgresos()
{
    double totalIngresos=0;    
    Egresos *egresos;
    egresos = new Egresos();
    cout<<"Ingrese los datos de los egresos"<<endl;
    cin>>totalIngresos;
    egresos->ingresarDatos(totalIngresos);
    return egresos;
}

template <typename T>
RolDePagos<T>::RolDePagos()
{
   
}
