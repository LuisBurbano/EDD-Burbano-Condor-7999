/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  FiguraGeometrica.h
 * Created: martes, 8 de noviembre 10:51:00
 * Modified: martes, 8 de noviembre de 2022 21:30:31
 * Problem: Areas figuras Geometricas
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#if !defined(_Numero_h)
#define _Numero_h



class Numero
{
public:
   double getVariable(void);
   void setVariable(double newVariable);
   Numero();
   float operator + (Numero f);
   float operator +(const Numero &p1,const Numero &p2);



protected:
private:
   double variable;
};

#endif