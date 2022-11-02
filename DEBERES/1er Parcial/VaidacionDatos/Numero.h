/***********************************************************************
 * Module:  Numero.h
 * Author:  Mateo Condor
 * Modified: sabado, 29 de octubre de 2022 12:43:53 PM
 * Purpose: Declaration of the class Numero
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <conio.h>

#include "Prototypes.h"

using namespace std;

class Numero : public Prototypes
{
public:
   int getNum(void);
   void setNum(int newNum);
   float getNumF(void);
   void setNumF(float newNumF);
   double getNumD(void);
   void setNumD(double newNumD);
   char getCharacters(void);
   void setCharacters(char newCharacters);
   
   char *charImput(char const *msj){
   	
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
   	
   	char *integerImput(char const *msj) {
	   	char *dato=new char[0];
		char c;
		int i = 0;
		cout<<msj;
		while((c = getch()) != 13){
			if(c >= '0' && c <= '9'){
				cout<<c;
				dato[i++] = c;
			}else if(c == '\b'){
				i--;
				cout<<"\b \b";				
			}
		}
		dato[i] = '\0';
		return dato;
   	}

protected:
private:
   int num;
   float numF;
   double numD;
   char characters;


};