/***********************************************************************
 * Module:  Numero.h
 * Author:  Mateo Condor
 * Modified: sábado, 29 de octubre de 2022 12:43:53 PM
 * Purpose: Declaration of the class Numero
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_2_Numero_h)
#define __ObjectOrientedModel_2_Numero_h

#include <iostream>
#include <stdlib.h>
#include <conio.h>



class Numero
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
   char *charImput(char const *);
   char *doubleAndFloatImput(char const *);
   char *integerImput(char const *);

protected:
private:
   int num;
   float numF;
   double numD;
   char characters;


};

#endif