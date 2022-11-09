/***********************************************************************
 * UFA - ESPE
 * Students:  Luis Burbano - Mateo Condor
 * Module:  FiguraGeometrica.cpp
 * Created: martes, 8 de noviembre 10:51:00
 * Modified: martes, 8 de noviembre de 2022 21:30:31
 * Problem: Areas figuras Geometricas
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <cstring>

class Numero
{
private:
    int variable{};

public:
    Numero(int variable) : variable{variable} {}

    friend Numero operator+(const Numero &p1, int variable);

    int getVariable() const { return variable; }
};

Numero operator+(const Numero &p1, int variable)
{
    return Numero(p1.variable + variable);
}
Numero operator+(int variable, const Numero &p2)
{
    return Numero(variable + p2.getVariable());
}
Numero operator+(const Numero &p1, const Numero &p2)
{
    return Numero(p1.getVariable() + p2.getVariable());
}

double convertirFloat();
char *doubleAndFloatImput(char const *msj);


using namespace std;

int main(int argc, char const *argv[])
{
    int variable1=0, variable2=0;
    cout << "Ingrese el primer numero: ";
    variable1 = convertirFloat();
    cout << "Ingrese el segundo numero: ";
    variable2 = convertirFloat();
    Numero numero1{variable1};
    Numero numero2{variable2};
    Numero numero3{numero1 + numero2};

    cout << numero1.getVariable() << endl;
    cout << numero2.getVariable() << endl;
    cout << numero3.getVariable() << endl;
    return 0;
}

char *doubleAndFloatImput(char const *msj)
{
    char *dato = new char[0];
    char c;
    int i = 0, cont = 0;
    cout << msj;
    while ((c = getch()) != 13)
    {
        if (c >= '0' && c <= '9')
        {
            cout << c;
            dato[i++] = c;
        }
        else if (c == '.' && cont < 1)
        {
            cout << c;
            dato[i++] = c;
            cont++;
        }
        else if (c == '\b')
        {
            i--;
            cout << "\b \b";
            cont = 0;
        }
    }
    dato[i] = '\0';
    return dato;
}

double convertirFloat()
{
    char dato[10];
    float valorFlotante;
    strcpy(dato, doubleAndFloatImput("> "));
    valorFlotante = atof(dato);
    return valorFlotante;
}