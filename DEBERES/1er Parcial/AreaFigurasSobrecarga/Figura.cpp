#pragma once
#include <iostream>
#include <conio.h>
#include <cstring>
#include "Figura.h"


using namespace std;

//cuadrado, circulo (radio y diametro)
double Figura::area(double dato, int opcion){
    double resultado;
    switch(opcion){
        case 1:
            //cuadrado
            resultado = dato*dato;
            break;
        case 2:
            //circulo (radio)
            resultado = 3.1416*(dato*dato);
            break;
        case 3:
            //circulo (diametro)
            resultado = 3.1416*(dato*dato)/4;
            break;
    }
    return resultado;
}

//rectangulo,triangulo, romboide o paralelogramo y rombo
double Figura::area(double dato1, double dato2, int opcion){
    double resultado;
    switch(opcion){
        case 1:
            //rectangulo y romboide
            resultado = dato1*dato2;
            break;
        case 2:
            //triangulo y rombo
            resultado = (dato1*dato2)/2;
            break;
    }
    return resultado;
}

//trapecio y poligono regular
double Figura::area(double dato1,double dato2,double dato3, int opcion){
    double resultado;
    switch(opcion){
        case 1:
            //trapecio
            resultado = ((dato1+dato2)*dato3)/2;
            break;
        case 2:
            //poligono regular
            //numero de lados, longitud de los lados, apotema
            resultado = ((dato1*dato2)*dato3)/2;
            break;
    }
    return resultado;
}


void Figura::menu(){
    int opcion;

    cout<< "Programa para calcular el area de algunas figuras geometricas" << endl;
    cout<< "1. Cuadrado" << endl;
    cout<< "2. Rectangulo" << endl;
    cout<< "3. Triangulo" << endl;
    cout<< "4. Circulo" << endl;
    cout<< "5. Trapecio" << endl;
    cout<< "6. Rombo" << endl;
    cout<< "7. Romboide o Paralelogramo" << endl;
    cout<< "8. Poligono Regular" << endl;
    cout<< "0. Salir" << endl;
    cout<< "Ingrese el numero de la figura que desea calcular: ";
    cin>> opcion;
    cout<<"\n";
   
    switch (opcion){
            case 1:
                double lado;
                cout<< "\nIngrese el valor del lado del cuadrado: ";
                lado = convertirFloat();
                cout<< "\nEl area del cuadrado es: " << area(lado,1) << endl;
                break;
            case 2:
                double lado1, lado2;
                cout<< "\nIngrese el valor del lado del rectangulo: ";
                lado1 = convertirFloat();
                cout<< "\nIngrese el valor del segundo lado del rectangulo: ";
                lado2 = convertirFloat();
                cout<< "\nEl area del rectangulo es: " << area(lado1,lado2,1) << endl;
                break;
            case 3:
                double baseT, alturaT;
                cout<< "\nIngrese el valor de la base del triangulo: ";
                baseT = convertirFloat();
                cout<< "\nIngrese el valor de la altura del triangulo: ";
                alturaT = convertirFloat();
                cout<< "\nEl area del triangulo es: " << area(baseT,alturaT,2) << endl;
                break;
            case 4:
                double radio, diametro;
                int opcion2;
                cout<< "1. Radio" << endl;
                cout<< "2. Diametro" << endl;
                cout<< "\nIngrese el numero de la opcion que desea: ";
                cin>> opcion2;
                    switch (opcion2){
                        case 1:
                            cout<< "Ingrese el valor del radio: ";
                            radio = convertirFloat();
                            cout<< "\nEl area del circulo es: " << area(radio,2) << endl;
                            break;
                        case 2:
                            cout<< "Ingrese el valor del diametro: ";
                            diametro = convertirFloat();
                            cout<< "\nEl area del circulo es: " << area(diametro,3) << endl;
                            break;
                        default:
                            cout<< "Opcion no valida" << endl;
                            break;
                    }
                break;
            case 5:
                double baseMayor, baseMenor, altura;
                cout<< "\nIngrese el valor de la base mayor del trapecio: ";
                baseMayor = convertirFloat();
                cout<< "\nIngrese el valor de la base menor del trapecio: ";
                baseMenor = convertirFloat();
                cout<< "\nIngrese el valor de la altura del trapecio: ";
                altura = convertirFloat();
                cout<< "\nEl area del trapecio es: " << area(baseMayor, baseMenor, altura,1) << endl;
                break;
            case 6:
                double diagonalMayor, diagonalMenor;
                cout<< "\nIngrese el valor de la diagonal mayor del rombo: ";
                diagonalMayor  = convertirFloat();
                cout<< "\nIngrese el valor de la diagonal menor del rombo: ";
                diagonalMenor = convertirFloat();
                cout<< "\nEl area del rombo es: " << area(diagonalMayor,diagonalMenor,2) << endl;
                break;
            case 7:
                double baseP, alturaP;
                cout<< "\nIngrese el valor de la base del romboide o paralelogramo: ";
                baseP = convertirFloat();
                cout<< "\nIngrese el valor de la altura del romboide o paralelogramo: ";
                alturaP = convertirFloat();
                cout<< "\nEl area del romboide o paralelogramo es: " << area(baseP,baseP,1) << endl;
                break;
            case 8:
                double numeroLados,longitudLado, apotema;
                cout<< "\nIngrese el valor del numero de lados del poligono regular: ";
                numeroLados = convertirFloat();
                cout<< "\nIngrese el valor de la longitud de un lado del poligono regular: ";
                longitudLado = convertirFloat();
                cout<< "\nIngrese el valor del apotema del poligono regular: ";
                apotema = convertirFloat();
                cout<< "\nEl area del poligono regular de " << numeroLados <<  " lados es: " << area(numeroLados, longitudLado, apotema,2) << endl;
                break;
            case 0:
                cout<< "Gracias por usar el programa" << endl;
                break;
            
            default:
                cout<< "Opcion no valida" << endl;
                break;
    }
}

char* Figura::doubleAndFloatImput(char const *msj){
	char *dato = new char[0];
	char c;
	int i=0,cont = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if(c >= '0' && c <= '9'){
			cout<<c;
			dato[i++] = c;
		}else if(c == '.' && cont < 1){	
			cout<<c;
			dato[i++]=c;
			cont++;				
		}else if(c == '\b'){
			i--;
			cout<<"\b \b";
			cont = 0;				
		}
	}
	dato[i] = '\0';	
	return dato;
}

double Figura::convertirFloat(){
    char dato[10];
    float valorFlotante;
    strcpy(dato, doubleAndFloatImput("> "));
    valorFlotante = atof(dato);
    return valorFlotante;
}