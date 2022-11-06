#include <iostream>
#include "Amortizacion.cpp"
#include <iomanip>

using namespace std;

int main(){
    Amortizacion a;
    float cuota, prestamo, interes, plazo;
    cout<< "----------------------------------------------------" << endl;
    cout<< "PROGRAMA PARA CALCULAR LA AMORTIZACION DE UN PRESTAMO" << endl;
    cout<< "----------------------------------------------------\n" << endl;

    cout<< "----------------------------------------------------" << endl;
    cout<< "Ingrese el monto del prestamo: ";
    cin >> prestamo ; a.setPrestamo(prestamo);
    cout<< "Ingrese el interes: ";
    cin >> interes ; a.setInteres(interes);
    cout<< "Ingrese el plazo: ";
    cin >> plazo ; a.setPlazo(plazo);
    cout<< "----------------------------------------------------" << endl;
    
    
    cout<< "El prestamo es de: " << a.getPrestamo() << endl;
    cout<< "El interes es de: " << a.getInteres() << " %" << endl;
    cout<< "El plazo es de: " << a.getPlazo() << endl;
    cuota = a.calcularCuota(a.getPrestamo(), a.getInteres(), a.getPlazo());
    cout << "La cuota es de: " <<fixed<<setprecision(2) << cuota << "\n\n" << endl;
    
    //llamada a la funcion mostrarTablaAmortizacion
    a.mostrarTablaAmortizacion(a);

    
  

    return 0;
     
}
