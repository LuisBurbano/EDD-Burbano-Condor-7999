/***********************************************************************
 * Module:  Protoypes.h
 * Author:  Mateo Condor
 * Modified: sábado, 29 de octubre de 2022 12:14:55 PM
 * Purpose: Declaration of the class Protoypes
 ***********************************************************************/

#if !defined(__ObjectOrientedModel_2_Protoypes_h)
#define __ObjectOrientedModel_2_Protoypes_h

class Prototypes
{
public:
   virtual char *charImput(char const *)=0;
   virtual char *doubleAndFloatImput(char const *)=0;
   virtual char *integerImput(char const *);

protected:
private:

};

#endif