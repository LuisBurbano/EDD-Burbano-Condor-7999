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

#include "Matriz.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>

using namespace std;
int Matriz::getColumna(void)
{
   return columna;
}

void Matriz::setColumna(int newColumna)
{
   columna = newColumna;
}

int *Matriz::sumarMatriz(int *matriz1, int *matriz2, int filas, int columnas)
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

void Matriz::imprimirMatriz(int *matriz, int filas, int columnas)
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

char *Matriz::integerImput(char const *msj)
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

int Matriz::validarInt()
{
    char dato[10];
    float valorFlotante;
    strcpy(dato, integerImput("> "));
    valorFlotante = atoi(dato);
    return valorFlotante;
}
void Matriz::crearMatriz(int *matriz, int filas, int columnas)
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

int *Matriz::multiplicarMatriz(int *matriz1, int *matriz2, int filas, int columnas)
{
    int *matriz3 = new int[filas * columnas];
    int i, j, k;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            *(matriz3 + i * columnas + j) = 0;
            for (k = 0; k < filas; k++)
            {
                *(matriz3 + i * columnas + j) += *(matriz1 + i * columnas + k) * *(matriz2 + k * columnas + j);
            }
        }
    }
    return matriz3;
}

Matriz::Matriz()
{
}

Matriz::~Matriz()
{
   // TODO : implement
}