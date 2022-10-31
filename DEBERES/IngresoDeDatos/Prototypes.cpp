/***********************************************************************
 * Module:  Numero.cpp
 * Author:  Mateo Condor
 * Modified: sábado, 29 de octubre de 2022 12:43:53 PM
 * Purpose: Implementation of the class Numero
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "Prototypes.h"

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Numero::charImput()
// Purpose:    Implementation of Numero::charImput()
// Return:     char
////////////////////////////////////////////////////////////////////////

char *chaImput(char const *msj)
{
   char *a=new char [0];
	char c;
	int i=0;
	cout<<msj;
	while((c = getch()) != 13){
		if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c == ' '){
			cout<<c;
			a[i++]=c;
			
		}else if(c == '\b'){
				i--;
				cout<<"\b \b";				
		}
	}
	a[i]='\0';
	return a;
}

////////////////////////////////////////////////////////////////////////
// Name:       Numero::doubleAndFloatImput()
// Purpose:    Implementation of Numero::doubleAndFloatImput()
// Return:     char
////////////////////////////////////////////////////////////////////////

char *doublAndFloatImput(char const *msj)
{
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

////////////////////////////////////////////////////////////////////////
// Name:       Numero::integerImput()
// Purpose:    Implementation of Numero::integerImput()
// Return:     char
////////////////////////////////////////////////////////////////////////

char *integeImput(char const *msj){
	char *dato=new char[0];
	char c;
	int i = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if(c >= '0' && c <= '9'){
			cout<<c;
			dato[i++] = c;
		}
	}
	dato[i] = '\0';
	return dato;
}