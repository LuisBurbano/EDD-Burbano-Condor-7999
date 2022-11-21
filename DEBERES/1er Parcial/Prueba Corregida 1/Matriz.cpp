#include "Matriz.h"
//#include "Validacion.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>

template <typename T>
Matriz<T>::Matriz()
{
}

template <typename T>
T **Matriz<T>::getMatrizResultado()
{
    return matrizResultado;
}

template <typename T>
T Matriz<T>::getFilas()
{
    return filas;
}

template <typename T>
T Matriz<T>::getColumnas()
{
    return columnas;
}

template <typename T>
void Matriz<T>::setFilas(T otrafilas)
{
    filas = otrafilas;
}

template <typename T>
void Matriz<T>::setColumnas(T otraColumnas)
{
    columnas = otraColumnas;
}

template <typename T>
void Matriz<T>::setMatrizResultado(T **otroMatR)
{
    matrizResultado = otroMatR;
}

template <typename T>
char *Matriz<T>::integerImput(char const *msj)
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
template <typename T>
int Matriz<T>::validarInt()
{
    char dato[10];
    float valorFlotante;
    strcpy(dato, integerImput("> "));
    valorFlotante = atoi(dato);
    return valorFlotante;
}
template <typename T>
T **Matriz<T>::crearMatriz(T **matriz)
{
    matriz = new T *[filas];
    for (int i = 0; i < filas; i++)
    {
        matriz[i] = new T[columnas];
    }
    return matriz;
}

template <typename T>
void Matriz<T>::generarMatriz(T **matriz)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            *(*(matriz + i) + j) = validarInt();
            //*(matriz++);
        }
    }
}

template <typename T>
void Matriz<T>::imprimirMatriz(T **matriz)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            cout << *(*(matriz + i) + j) << " ";
        }
        cout << endl;
    }
}
template <typename T>
T **Matriz<T>::multiplicarMatriz(T **matrizAux1, T **matrixAux2)
{

    int **matriz3;
    int i, j, k;
    matriz3 = crearMatriz(matriz3);
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < columnas; j++)
        {
            *(*(matriz3 + i) + j) = 0;
            for (k = 0; k < columnas; k++)
            {
                *(*(matriz3 + i) + j) += *(*(matrizAux1 + i) + k) * *(*(matrixAux2 + k) + j);
            }
        }
    }
    return matriz3;
}
//principal
template <typename T>
T **Matriz<T>::multiplicarMatrizRecursiva(T **matrizAux1, T **matrixAux2)
{

    int **matriz3;
    matriz3 = crearMatriz(matriz3);
    return multiplicarMatriz(matrizAux1, matrixAux2);

     
}
//segunda funcion de multiplicacion
template <typename T>
T **Matriz<T>::multiplicarMatrizRecursiva(T **matrizAux1, T **matrixAux2, T **matrizAux3, int i)
{

    if (i<filas)
    {
        multiplicarMatrizRecursiva(matrizAux1, matrixAux2, matrizAux3, i,0);
        multiplicarMatrizRecursiva(matrizAux1, matrixAux2, matrizAux3, i+1);
    }
    

    
}
//tercera funcion de multiplicacion
template <typename T>
T **Matriz<T>::multiplicarMatrizRecursiva(T **matrizAux1, T **matrixAux2, T **matrizAux3, int i, int j)
{

    if (j<columnas)
    {
        *(*(matrizAux3 + i) + j) = 0;
        multiplicarMatrizRecursiva(matrizAux1, matrixAux2, matrizAux3, i, j, 0);
        multiplicarMatrizRecursiva(matrizAux1, matrixAux2, matrizAux3, i, j+1);
    }
    

    
}
//cuarta funcion de multiplicacion
template <typename T>
T **Matriz<T>::multiplicarMatrizRecursiva(T **matrizAux1, T **matrixAux2, T **matrizAux3, int i, int j, int k)
{
    
        if (k<columnas)
        {
            *(*(matrizAux3 + i) + j) += *(*(matrizAux1 + i) + k) * *(*(matrixAux2 + k) + j);
            multiplicarMatrizRecursiva(matrizAux1, matrixAux2, matrizAux3, i, j, k+1);
        }

    
}

template <typename T>
T **Matriz<T>::matrizElevada(T **matrizAux, int potencia)
{
    int i;
    T **matrizAux2;

    matrizAux2 = crearMatriz(matrizAux2);
    matrizAux2 = matrizAux;
    for (i = 1; i < potencia; i++)
    {
        matrizAux2 = multiplicarMatrizRecursiva(matrizAux2, matrizAux);
    }

    return matrizAux2;
}

template <typename T>
T **Matriz<T>::matrizElevadaRecursiva(T **matrizAux, int potencia, int exponente)
{
    T **matrizAux2;
    int auxExponente;
    matrizAux2 = crearMatriz(matrizAux2);

    if (exponente == potencia || potencia ==0)
    {
        return matrizAux;
    }
    else
    {
        auxExponente = exponente + 1;
        matrizAux2 = multiplicarMatrizRecursiva(matrizAux, matrizElevadaRecursiva(matrizAux, potencia, auxExponente));
    }
    
}