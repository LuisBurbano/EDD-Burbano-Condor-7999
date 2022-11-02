#include <iostream>
#include "Coordinate.cpp"
#include "Fraccion.cpp"

using namespace std;

int main(){
    Coordinate  c1,c2;
    Fraccion f1,f2;
    
    int x1,x2,y1,y2;
    float numerador1, numerador2, denominador1, denominador2;
    int r1;
    float r2;

    cout << "Ingrese x1: "<<endl;
    cin >> x1;
    cout << "Ingrese y1: "<<endl;
    cin >> y1;
    cout << "Ingrese x2: "<<endl;
    cin >> x2;
    cout << "Ingrese y2: "<<endl;
    cin >> y2;
    
    c1.setX(x1);
    c1.setY(y1);
    c2.setX(x2);
    c2.setY(y2);

    r1 = c1.operator*(c2);
    cout << "El resultado de multiplicar y sumar las coordenadas ("<<c1.getX()<<","<<c1.getY()<<") y ("<<c2.getX()<<","<<c2.getY()<<")"<<endl;
    cout << "es: "<<r1<<endl;

    cout <<"Ingrese el numerador de la primera fraccion: "<<endl;
    cin >> numerador1;
    cout << "Ingrese el denominador de la primera fraccion "<<endl;
    cin >> denominador1;
    cout << "Ingrese el numerador de la segunda fraccion: "<<endl;
    cin >> numerador2;
    cout << "Ingrese el denominador de la segunda fraccion: "<<endl;
    cin >> denominador2;

    f1.setNumerador(numerador1);
    f1.setDenominador(denominador1);
    f2.setNumerador(numerador2);
    f2.setDenominador(denominador2);

    r2 = f1.operator/ (f2);
    cout << "El resultado de multiplicar y dividir las fracciones ("<<f1.getNumerador()<<"/"<<f1.getDenominador()<<") y ("<<f2.getNumerador()<<"/"<<f2.getDenominador()<<")"<<endl;
    cout << "es: "<<r2<<endl;


    return 0;
}
