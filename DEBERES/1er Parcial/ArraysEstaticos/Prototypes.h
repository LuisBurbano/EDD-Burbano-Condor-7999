/***********************************************************************
 * Module:  Protoypes.h
 * Author:  Mateo Condor
 * Modified: sabado, 29 de octubre de 2022 12:14:55 PM
 * Purpose: Declaration of the class Protoypes
 ***********************************************************************/

class Prototypes
{
public:
   virtual char *chaImput(char const *msj) = 0;
   virtual char *doublAndFloatImput(char const *msj) = 0;
   virtual char *integerImput(char const *msj) = 0;

protected:
private:

};