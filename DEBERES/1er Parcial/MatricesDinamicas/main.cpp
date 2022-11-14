/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  Matriz.h
 * Created: Jueves, 13 de noviembre de 2022 19:51:00
 * Modified: Jueves, 14 de noviembre de 2022 00:11:31
 * Problem: Suma y multiplicacion de matrices con arreglos estaticos
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#include "Matriz.cpp"
#define FILAS 3
#define COLUMNAS 3

int main(int argc, char const *argv[])
{
    int *matriz1 = new int[FILAS*COLUMNAS];
    int *matriz2 = new int[FILAS*COLUMNAS];
    int *matriz3 = new int[FILAS*COLUMNAS];
    int *matriz4 = new int[FILAS*COLUMNAS];
    Matriz matriz;
    cout << "Ingrese los valores de la primera matriz" << endl;
    matriz.crearMatriz(matriz1, FILAS, COLUMNAS);
    cout << "Ingrese los valores de la segunda matriz" << endl;
    matriz.crearMatriz(matriz2, FILAS, COLUMNAS);
    cout << "La suma de las matrices es: " << endl;
    matriz3 = matriz.sumarMatriz(matriz1, matriz2, FILAS, COLUMNAS);
    matriz.imprimirMatriz(matriz3, FILAS, COLUMNAS);
    cout << "La multiplicacion de las matrices es: " << endl;
    matriz4 = matriz.multiplicarMatriz(matriz1, matriz2, FILAS, COLUMNAS);
    matriz.imprimirMatriz(matriz4, FILAS, COLUMNAS);

    return 0;
}

