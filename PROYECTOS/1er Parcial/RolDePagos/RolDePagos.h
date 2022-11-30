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

#if !defined(__ProyectoUnidad1_RolDePagos_h)
#define __ProyectoUnidad1_RolDePagos_h

#include "Ingresos.cpp"
#include "Egresos.cpp"
#include "Trabajador.cpp"


template <typename T>
class RolDePagos
{
public:
   
   T* getIngresos(void);
   void setIngresos(T* newIngresos);
   T* getEgresos(void); 
   void setEgresos(T* newEgresos);
   T* getTrabajador(void);
   void setTrabajador(T* newTrabajador);
   T* getRolDePagos(void);
   void setRolDePagos(T* newRolDePagos);
   double getSalario(void);
   void setSalario(double newSalario);
   
   void imprimirRol(T*,Ingresos*, Egresos*);
   T* generarTrabajador();
   Ingresos* generarIngresos();
   Egresos* generarEgresos(double);
   
   RolDePagos();
   void menuRolDePagos();
   string toString(Trabajador trabajador, Ingresos ingresos, Egresos egresos);
   void guardarArchivoTxt(string a);
   string leerArchivoTxt();
   void generarRolDePagos();
   void buscarRolDePagos();

protected:
private:
   T *ingresos;
   T *egresos;   
   T *trabajador;
   double sueldo;
};

#endif