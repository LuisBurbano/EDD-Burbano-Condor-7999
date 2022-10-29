/***********************************************************************
 * Module:  Numero.cpp
 * Author:  Mateo Condor
 * Modified: sábado, 29 de octubre de 2022 12:43:53 PM
 * Purpose: Implementation of the class Numero
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "Numero.h"

using namespace std;

int Numero::getNum(void)
{
   return num;
}

void Numero::setNum(int newNum)
{
   num = newNum;
}

float Numero::getNumF(void)
{
   return numF;
}

void Numero::setNumF(float newNumF)
{
   numF = newNumF;
}

double Numero::getNumD(void)
{
   return numD;
}

void Numero::setNumD(double newNumD)
{
   numD = newNumD;
}

char Numero::getCharacters(void)
{
   return characters;
}

void Numero::setCharacters(char newCharacters)
{
   characters = newCharacters;
}

char *charImput(char const *msj)
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

char *doubleAndFloatImput(char const *msj)
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

char *integerImput(char const *msj){
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