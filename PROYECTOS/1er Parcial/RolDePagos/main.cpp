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
#include <string.h>
#include <sstream>

int main(int argc, char* argv[])
{

    ListaDoble<string> lista;
    RolDePagos<string> rol;  
    RolDePagos<Trabajador> rol2;
    Trabajador *trabajador;
    Ingresos *ingresos;
    Egresos *egresos;
    string line2;
    string line;
    string lectura;
    string lectura2;
    lectura = rol.leerArchivoTxt();
    char delimitador ='\n';                                       
    stringstream input_stringstream(lectura);                
    
    while (getline(input_stringstream, line, '\n'))
    {
        cout << line << endl;
        lectura2 += line + "\n";
    }                   
    
    cout << "Lectura 2: " << lectura2 << endl;





    
    //trabajador = rol2.generarTrabajador();
    //ingresos = rol2.generarIngresos();
    //egresos = rol.generarEgresos(ingresos->getTotalIngresos());
    //rol2.imprimirRol(trabajador,ingresos,egresos);
    //rol2.guardarArchivoTxt(rol2.toString(*trabajador, *ingresos, *egresos));
    free(trabajador);
    free(ingresos);
    free(egresos);
    return 0;
}
