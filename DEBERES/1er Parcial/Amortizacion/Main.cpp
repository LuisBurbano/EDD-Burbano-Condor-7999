#include <iostream>
#include "Amortizacion.cpp"
#include <iomanip>
#include <ctime>
#include "Fecha.cpp"

using namespace std;

int main(){
    Amortizacion a;
    Fecha f;
    float cuota, prestamo, interes, plazo, diaMes;
    cout<< "----------------------------------------------------" << endl;
    cout<< "PROGRAMA PARA CALCULAR LA AMORTIZACION DE UN PRESTAMO" << endl;
    cout<< "----------------------------------------------------\n" << endl;

    cout<< "----------------------------------------------------" << endl;
    cout<< "Ingrese el monto del prestamo: ";
    cin >> prestamo ; a.setPrestamo(prestamo);
    cout<< "Ingrese el interes: ";
    cin >> interes ; a.setInteres(interes);
    cout<< "Ingrese el plazo (periodos de 30 dias habiles): ";
    cin >> plazo ; a.setPlazo(plazo);
    cout<< "Ingrese el dia del mes que desea pagar:";
    cin>> diaMes ; 
    cout<< "----------------------------------------------------" << endl;
    
    
    cout<< "El prestamo es de: " << a.getPrestamo() << endl;
    cout<< "El interes es de: " << a.getInteres() << " %" << endl;
    cout<< "El plazo es de: " << a.getPlazo() << endl;
    cuota = a.calcularCuota(a.getPrestamo(), a.getInteres(), a.getPlazo());
    cout << "La cuota es de: " <<fixed<<setprecision(2) << cuota << "\n\n" << endl;
    
    //llamada a la funcion mostrarTablaAmortizacion
    a.mostrarTablaAmortizacion(a);
    //llamada a la funcion para mostrar las fechas de pago
    f.mostrarFechas(a.getPlazo(), diaMes);
    
  

    return 0;
     
}
