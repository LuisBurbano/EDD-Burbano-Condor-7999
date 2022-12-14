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

#include "Ingresos.h"
#include "Validacion.hpp"

Validacion validacionIngresos;

// getters y setters
int Ingresos::getTotalComisiones(void)
{
   return totalComisiones;
}

void Ingresos::setTotalComisiones(int newTotalComisiones)
{
   totalComisiones = newTotalComisiones;
}

double Ingresos::getRemuneracionUnificada(void)
{
   return remuneracionUnificada;
}

void Ingresos::setRemuneracionUnificada(double newRemuneracionUnificada)
{
   remuneracionUnificada = newRemuneracionUnificada;
}

int Ingresos::getHorasSuplementarias(void)
{
   return horasSuplementarias;
}

void Ingresos::setHorasSuplementarias(int newHorasSuplementarias)
{
   horasSuplementarias = newHorasSuplementarias;
}

int Ingresos::getHorasExtras(void)
{
   return horasExtras;
}

void Ingresos::setHorasExtras(int newHorasExtras)
{
   horasExtras = newHorasExtras;
}

double Ingresos::getTotalIngresos(void)
{
   return totalIngresos;
}

void Ingresos::setTotalIngresos(double newTotalIngresos)
{
   totalIngresos = newTotalIngresos;
}

double Ingresos::getValorHora(void)
{
   return valorHora;
}
void Ingresos::setValorHora(double newValorHora)
{
   valorHora = newValorHora;
}

double Ingresos::getValorHoraExtra(void)
{
   return valorHoraExtra;
}
void Ingresos::setValorHoraExtra(double newValorHoraExtra)
{
   valorHoraExtra = newValorHoraExtra;
}
//------------------> FIN de getters y setters

//-------------------> Inicio de metodos


int Ingresos::ingresoInputOnlyNumber(std::string mensaje)
{
   int valor;
   int opcion;
   cout << mensaje;
   valor = validacionIngresos.charToInt();
   if(valor == 0){
      do{
         cout << "\n\t\tATENCION!! Este aviso se emitira una sola vez!! \n~ El valor ingresado es 0 esto significa que el trabajador no hizo horas extras ~" << endl;
         cout << "\nDesea continuar? 1. Si 2. No";
         opcion = validacionIngresos.charToInt();
         if(opcion == 2){
            valor = ingresoInputOnlyDouble(mensaje);
         } 
      }while(opcion != 1 && opcion != 2);
   }
   return valor;
   
}

double Ingresos::ingresoInputOnlyDouble(std::string mensaje){
   double valor;
   cout << mensaje;
   valor = validacionIngresos.charToFloat();
   return valor;
}

double Ingresos::calcularTotalIngresos()
{
   double totalIngresos;
   totalIngresos = (getRemuneracionUnificada() + (getHorasExtras() * getValorHoraExtra()) + (getHorasSuplementarias() * getValorHora()));
   return totalIngresos;
}

double Ingresos::calcularHorasExtras(int horasExtras, double valorHoraExtra)
{
   return horasExtras * valorHoraExtra;
}

double Ingresos::calcularHorasSuplementarias(int horasSuplementarias, double valorHora)
{
   return horasSuplementarias * valorHora;
}

/*double Ingresos::calcularTotalComisiones()
{
   int cantidadComisiones=0;
   double totalComisiones = 0;
   cantidadComisiones = ingresoInputOnlyNumber("\nIngrese la cantidad de comisiones: ");
   for (int i = 0; i < cantidadComisiones; i++)
   {
      totalComisiones += ingresoInputOnlyDouble("\nIngrese el valor de la comision: ");
   }
   
   return totalComisiones;
}*/


void Ingresos::ingresarDatos()
{
   double valorHora;
   double valorHoraExtra;
   int horasExtras;
   int horasSuplementarias;
   int diasTrabajados;
   double remuneracionUnificada;
   double totalComisiones;
   double totalIngresos;   


   cout << "Ingresos" << endl;
   
   valorHora = ingresoInputOnlyDouble("\nIngrese el valor de la hora suplementaria: ");
   this->setValorHora(valorHora);

   valorHoraExtra = ingresoInputOnlyDouble("\nIngrese el valor de la hora extra: ");
   this->setValorHoraExtra(valorHoraExtra);
   
   horasExtras = ingresoInputOnlyNumber("\nIngrese las horas extras: ");
   this->setHorasExtras(horasExtras);

   horasSuplementarias = ingresoInputOnlyNumber("\nIngrese las horas suplementarias: ");
   this->setHorasSuplementarias(horasSuplementarias);

   remuneracionUnificada = ingresoInputOnlyDouble("\nIngrese la remuneracion unificada: ");
   this->setRemuneracionUnificada(remuneracionUnificada);

   //totalComisiones = calcularTotalComisiones();
   //this->setTotalComisiones(totalComisiones);
   totalIngresos = calcularTotalIngresos();
   this->setTotalIngresos(totalIngresos);
   cout << "\nEl total de ingresos es: " << totalIngresos << endl;
}

void Ingresos::mostrarDatos(){
   double valorHora;
   valorHora = this->getValorHora();
   double valorHoraExtra;
   valorHoraExtra = this->getValorHoraExtra();
   int horasExtras;
   horasExtras = this->getHorasExtras();
   int horasSuplementarias;
   horasSuplementarias = this->getHorasSuplementarias();
   double remuneracionUnificada;
   remuneracionUnificada = this->getRemuneracionUnificada();
   //double totalComisiones;
   //totalComisiones = this->getTotalComisiones();
   double totalIngresos;   
   totalIngresos = this->getTotalIngresos();
   
   cout<<"\nValor hora suplementaria: "<<valorHora;
   cout<<"\nValor hora extra: "<<valorHoraExtra;
   cout<<"\nHoras extras: "<<horasExtras;
   cout<<"\nHoras suplementarias: "<<horasSuplementarias;
   cout<<"\nRemuneracion unificada: "<<remuneracionUnificada;
   //cout<<"\nTotal comisiones: "<<totalComisiones;
   cout<<"\nTotal ingresos: "<<totalIngresos;
}

string Ingresos::toString(){
   return to_string(getTotalIngresos()); //Se le puede ir a??adiendo los demas atributos o lo que se desee
}


Ingresos::Ingresos(){

}


