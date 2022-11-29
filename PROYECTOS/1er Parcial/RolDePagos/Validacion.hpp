
#pragma once
#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;

class Validacion {
public:
    
    char *integerImput(char const *msj)
    {
        char *dato = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= '0' && c <= '9')
            {
                cout << c;
                dato[i++] = c;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
            }
        }
        dato[i] = '\0';
        return dato;
    }

    char *charImput(char const *msj)
    {

        char *a = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c == ' ')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
            }
        }
        a[i] = '\0';
        return a;
    }

    char *doubleAndFloatImput(char const *msj) {
	   	char *a = new char[0];
		char c;
		int i = 0, cont = 0;
		cout<<msj;
		while((c = getch()) != 13){
			if(c >= '0' && c <= '9'){
				cout<<c;
				a[i++] = c;
			}else if(c == '.' && cont < 1){	
				cout<<c;
				a[i++] = c;
				cont++;				
			}else if(c == '\b'){
				i--;
				cout<<"\b \b";
				cont = 0;				
			}
		}
		a[i] = '\0';	
		return a;
   	}

    char *ingresoNombreApellido(char const *msj)
    {
        char *a = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
            }
            if(a[0] >= 'a' && a[0] <= 'z'){
                a[0] = a[0] - 32;
            }
        }
        a[i] = '\0';
        return a;
    }

    char *ingresoNumeroCelular(char const *msj)
    {   int i = 0;
        char *dato = new char[0];
        char c;
        cout << msj;
        do{
            i = 0;
            while ((c = getch()) != 13)
            {
                if (c >= '0' && c <= '9' && i <= 9)
                {
                    cout << c;
                    dato[i++] = c;
                }
                else if (c == '\b')
                {
                    i--;
                    cout << "\b \b";
                }
            }
            if(i < 9){
                cout << "\n\tFaltan " << 9 - i << " digitos" << endl;
            }
            if(dato[0] != '0' || dato[1] != '9'  ){
                cout << "\n\tEl numero debe empezar con 09" << endl;
            }
        }while(i < 9 || dato[0] != '0' || dato[1] != '9' );      
        dato[i] = '\0';
        return dato;
    }

    char *ingresoDireccion(char const *msj)
    {

        char *a = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9' || c == '-' ){
                cout << c;
                a[i++] = c;
            }else if (c == '\b'){
                i--;
                cout << "\b \b";
            }
        }
        a[i] = '\0';
        return a;
    }

    char *ingresoCorreo(char const *msj)
    {

        char *a = new char[0];
        char c;
        int i = 0, cont1 = 0, cont2 = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9' || c == '_'){
                cout << c;
                a[i++] = c;
            }else if(c == '.' && cont1 < 1){	
				cout<<c;
				a[i++] = c;
				cont1++;				
			}else if(c == '@' && cont2 < 1){	
				cout<<c;
				a[i++] = c;
				cont2++;				
			}else if (c == '\b'){
                i--;
                cout << "\b \b";
                cont1 = 0;
                cont2 = 0;
            }
        }
        a[i] = '\0';
        return a;
    }

    int charToInt()
    {
        char dato[10];
        int valor = 0;
        strcpy(dato, integerImput("\n> "));
        valor = atoi(dato);
        return valor;
    }

    float charToFloat()
    {
        char dato[10];
        float valor = 0;
        strcpy(dato, doubleAndFloatImput("\n> "));
        valor = atof(dato);
        return valor;
    }
};