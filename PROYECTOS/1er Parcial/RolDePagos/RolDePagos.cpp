#include "RolDePagos.h"

template <typename T>

void RolDePagos<T>::imprimirRol(T* newTrabajador, Ingresos* newIngresos)
{
    string cedula;
    double sueldo;
    cedula = newTrabajador->getCedula();
    cout << "Cedula: " << cedula << endl;
    //sueldo = newIngresos->getTotalIngresos();
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
RolDePagos<T>::RolDePagos()
{
   

}

template <typename T>
string RolDePagos<T>::toString(Trabajador trabajador, Ingresos ingresos, Egresos egresos){
    return trabajador.toString() + egresos.toString();
}

template <typename T>
void RolDePagos<T>::guardarArchivoTxt(string a){
    ofstream archivo;
    
    archivo.open("RolDePagos.txt",ios::app);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    archivo<<a + "\n"<<endl;
}


template <typename T>
void RolDePagos<T>::menuRolDePagos(){
    int opcion;
    do{
        system("cls");
        cout<<"1. Generar Rol de Pagos (Lista simple)"<<endl;
        cout<<"2. Buscar Rol de Pagos "<<endl;
        cout<<"3. Eliminar Rol de Pagos "<<endl;
        cout<<"4. Salir "<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:

                break;
            case 2:
                int opcion2;
                do{
                system("cls");
                cout << "\nBuscar rol de pagos por:" << endl;
                cout << "1. Cedula" << endl;
                cout << "2. Nombre" << endl;
                cout << "3. Apellido" << endl;
                cout << "4. Regresar" << endl;
                cout << "Ingrese una opcion: ";
                cin >> opcion2;
                    switch(opcion2){
                        case 1:
                            cout << "\nIngrese la cedula: ";
                            
                            break;
                        case 2:
                            cout << "\nIngrese el nombre: ";
                            
                            break;
                        case 3:
                            cout << "\nIngrese el apellido: ";
                            
                            break;
                        case 4:

                            break;
                    }
                }while(opcion2 != 4);
                break;
            case 3:

                break;
            case 4:
                cout << "\n\tSaliendo..."<<endl;
                cout << "\n\tGracias por usar nuestro programa " << endl;
                break;
        }
    }while(opcion != 4);
    
}
