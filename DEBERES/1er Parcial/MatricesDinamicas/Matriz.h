/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  FuncionesMatrices.h
 * Created: Jueves, 13 de noviembre de 2022 19:51:00
 * Modified: Jueves, 14 de noviembre de 2022 00:11:31
 * Problem: Suma y multiplicacion de matrices con arreglos estaticos
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/

#if !defined(__Recursividad_Matriz_h)
#define __Recursividad_Matriz_h

class Matriz
{
public:
   int getColumna(void);
   void setColumna(int newColumna);
   int *sumarMatriz(int *, int *, int, int);
   int *multiplicarMatriz(int *, int *, int, int);
   void imprimirMatriz(int *, int, int);
   void crearMatriz(int *, int, int);
   int ingresarInt();
   void ingresarMatriz(int *, int, int);
   char *integerImput(char const *msj);
   int validarInt();
   Matriz();
   ~Matriz();

protected:
private:
   int fila;
   int columna;
};

#endif