
#pragma once
#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;

class Validacion
{
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
	   	char *a=new char[0];
		char c;
		int i=0,cont = 0;
		cout<<msj;
		while((c = getch()) != 13){
			if(c >= '0' && c <= '9'){
				cout<<c;
				a[i++] = c;
			}else if(c == '.' && cont < 1){	
				cout<<c;
				a[i++]=c;
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