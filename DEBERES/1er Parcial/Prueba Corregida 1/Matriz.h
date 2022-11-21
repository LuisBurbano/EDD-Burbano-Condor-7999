#include <iostream>
#include <stdlib.h>

using namespace std;

template <typename T >

class Matriz
{
public:
    T **multiplicarMatriz(T **, T **);
    T **multiplicarMatrizRecursiva(T **, T **);
    T **multiplicarMatrizRecursiva(T **, T **, T **, int);
    T **multiplicarMatrizRecursiva(T **, T **, T **, int, int);
    T **multiplicarMatrizRecursiva(T **, T **, T **, int, int, int);
    T **matrizElevada(T **, int);
    //matrizElevadaRecursiva
    T **matrizElevadaRecursiva(T **, int, int);
    T **crearMatriz(T **);
    void generarMatriz(T **);

    void imprimirMatriz(T **);
    char *integerImput(char const *msj);
    int validarInt();

    Matriz();
    // getters y setters de los atributos de la clase
    T **getMatriz1();
    T **getMatrizResultado();
    T getFilas();
    T getColumnas(); 
    void setMatriz1(T **);
    void setMatriz2(T **);
    void setMatrizResultado(T **);
    void setFilas(T);
    void setColumnas(T);

private:
    // atributos de la clase
    T filas, columnas;
    T **matrizResultado;
    
};