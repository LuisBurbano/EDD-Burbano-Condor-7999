/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
		INGENIERA DE SOFTWARE
                
	AUTORES:
		Mateo Javier Condor Sosa 	 
		Luis Ariel Burbano Pacheco       
	FECHA DE CREACION:
		16/11/2022         	
	FECHA DE MODIFICACION:
		21/11/2022   
*/

#include <iostream>
#include "ListaSimple.cpp"

using namespace std;

int main() {

int opcion;
int dato;
ListaSimple lista;       
do{
        system("cls");
        cout<<".:MENU Lista Simple:."<<endl;

        cout<<"1. Insertar dato a la lista"<<endl;
        cout<<"2. Mostrar lista"<<endl;
        cout<<"3. Eliminar dato"<<endl;
        cout<<"4. Buscar dato"<<endl;
        cout<<"5. Modificar dato"<<endl;
        cout<<"6. Salir"<<endl;
        opcion = lista.charToInt();

        switch (opcion){
                case 1:
                        cout<<"\nIngrese el dato: ";
                        dato = lista.charToInt();
                        lista.insertarDatoLista(dato);
                        cout<<"\n";
                        system("pause");
                        break;
                case 2:
                        cout<<"\n";
                        lista.mostrarLista();
                        cout<<"\n";
                        system("pause");
                        break;
                case 3:
                        cout<<"\nLa lista es: ";
                        lista.mostrarLista();
                        cout<<"\nIngrese el dato a eliminar: ";
                        dato = lista.charToInt();
                        lista.eliminarDatoLista(dato);
                        cout<<"\n";
                        system("pause");
                        break;
                case 4:
                        cout<<"\nIngrese el dato a buscar: ";
                        dato = lista.charToInt();
                        cout<<"\n";
                        lista.buscarDatoLista(dato);
                        cout<<"\n";
                        system("pause");
                        break;
                case 5:
                        cout<<"\nIngrese el dato a modificar: ";
                        dato = lista.charToInt();
                        int nuevoDato;
                        cout<<"\nIngrese el nuevo dato: ";
                        nuevoDato = lista.charToInt();
                        cout<<"\n";
                        lista.modificarDatoLista(dato, nuevoDato);
                        system("pause");
                        break;
                case 6:
                        cout<<"\nSaliendo..."<<endl;
                        break;
        }
}while(opcion != 6);

}
