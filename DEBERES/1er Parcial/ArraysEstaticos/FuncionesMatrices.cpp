/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  FuncionesMatrices.h
 * Created: Jueves, 10 de noviembre de 2022 19:51:00
 * Modified: Jueves, 11 de noviembre de 2022 00:11:31
 * Problem: Suma y multiplicacion de matrices con arreglos estaticos
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/

#include "FuncionesMatrices.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>

using namespace std;

int *FuncionesMatrices::sumarMatriz(int *matriz1, int *matriz2, int filas, int columnas)
{
    int *matriz3 = new int[filas * columnas];
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            *(matriz3 + i * columnas + j) = *(matriz1 + i * columnas + j) + *(matriz2 + i * columnas + j);
        }
    }
    return matriz3;
}
int *FuncionesMatrices::multiplicarMatriz(int *matriz1, int *matriz2, int filas, int columnas)
{
    int *matriz3 = new int[filas * columnas];
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {

            *(matriz3 + i * columnas + j) = *(matriz1 + i * columnas + j) * *(matriz2 + i * columnas + j);
        }
    }
    return matriz3;
}
void FuncionesMatrices::imprimirMatriz(int *matriz, int filas, int columnas)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            cout << *(matriz + i * columnas + j) << " ";
        }
        cout << endl;
    }
}

char *FuncionesMatrices::integerImput(char const *msj)
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

int FuncionesMatrices::validarInt()
{
    char dato[10];
    float valorFlotante;
    strcpy(dato, integerImput("> "));
    valorFlotante = atoi(dato);
    return valorFlotante;
}
void FuncionesMatrices::crearMatriz(int *matriz, int filas, int columnas)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            *(&(*matriz)) = validarInt();
            *(matriz++);
        }
    }
}