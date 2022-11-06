#pragma once
#include <iostream>
#include <math.h>
#include "Amortizacion.h"

using namespace std;

Amortizacion::Amortizacion(float prestamo, float interes, int plazo){
    this -> prestamo = prestamo;
    this -> interes = interes;
    this -> plazo = plazo;
}

Amortizacion::Amortizacion(){
    
}

void Amortizacion::setPrestamo(float prestamo){
    this -> prestamo = prestamo;
}

void Amortizacion::setInteres(float interes){
    this -> interes = interes;
}

void Amortizacion::setPlazo(int plazo){
    this -> plazo = plazo;
}

float Amortizacion::getPrestamo(){
    return prestamo;
}

float Amortizacion::getInteres(){
    return interes;
}

int Amortizacion::getPlazo(){
    return plazo;
}

//funcion para calcular la cuota
float Amortizacion::calcularCuota(float prestamo, float interes, int plazo){
    float cuota;
    interes = interes / 100;
    cuota = (prestamo * interes) / (1 - pow((1 + interes), -plazo));
    return cuota;
}

//funcion para calcular el monto final
float Amortizacion::calcularMontoFinal(float prestamo, float cuota, float interes){
    float montoFinal;
    interes = interes / 100;
    interes = prestamo * interes;
    montoFinal = prestamo - (cuota - interes);
    return montoFinal;
}

//funcion para mostrar la tabla de amortizacion
void Amortizacion::mostrarTablaAmortizacion(Amortizacion a){
    float cuota;
    cuota = a.calcularCuota(a.getPrestamo(), a.getInteres(), a.getPlazo());
    for(int i = 0; i < a.getPlazo(); i++){
        cout << "Mes: " << i+1 << " | Saldo inicial: " << a.getPrestamo() << " $" 
                " | Cuota: " << cuota << 
                " | Interes: " << a.getPrestamo() * (a.getInteres() / 100) << 
                " | Capital: " << cuota - (a.getPrestamo() * (a.getInteres() / 100)) << 
                " | Saldo final: " << a.calcularMontoFinal(a.getPrestamo(), cuota, a.getInteres()) << " $ | " << endl;
        a.setPrestamo(a.calcularMontoFinal(a.getPrestamo(), cuota, a.getInteres()));
    }
}

