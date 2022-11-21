
#include "Matriz.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
    
    Matriz<int> matriz;
    int p,l, n;
    int **matriz1; 
    int **matriz2; 
    cout <<endl<< "Ingrese el numero de filas: "<<endl;
    p=matriz.validarInt();
    cout<<endl<<"Ingrese la n para la matriz elevada a la n: "<<endl;
    n=matriz.validarInt(); 
    matriz.setFilas(p);
    matriz.setColumnas(p);
    matriz1=matriz.crearMatriz(matriz1);
    matriz2=matriz.crearMatriz(matriz2);
    cout<<endl<<"Ingrese los valores de la matriz: "<<endl;
    matriz.generarMatriz(matriz1);
    cout<<endl;
    matriz2=matriz.multiplicarMatrizRecursiva(matriz1,matriz1);
    //matriz2=matriz.matrizElevadaRecursiva(matriz1,n,1);
    matriz.imprimirMatriz(matriz2);

    return 0;
}
