#include <iostream>
#include "Fraccion.h"

using namespace std;

Fraccion::Fraccion(float numerador, float denominador){
    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion::Fraccion(){
	
}

void Fraccion::setNumerador(float numerador){
    this -> numerador = numerador;
}

void Fraccion::setDenominador(float denominador){
    this -> denominador = denominador;
}

float Fraccion::getNumerador(){
    return numerador;
}

float Fraccion::getDenominador(){
    return denominador;
}


float Fraccion::operator / (Fraccion f){

	return (this->numerador * f.numerador) / (this->denominador * f.denominador);

}
