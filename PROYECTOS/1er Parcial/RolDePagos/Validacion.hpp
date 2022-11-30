/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
        INGENIERA DE SOFTWARE

    AUTORES:
        Mateo Javier Condor Sosa
        Luis Ariel Burbano Pacheco
    FECHA DE CREACION:
        21/11/2022
    FECHA DE MODIFICACION:
        29/11/2022
*/

#pragma once
#include <conio.h>
#include <cstring>
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Validacion
{
public:
    char *integerImput(char const *msj)
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

    char *charImput(char const *msj)
    {

        char *a = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c == ' ')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
            }
        }
        a[i] = '\0';
        return a;
    }

    char *doubleAndFloatImput(char const *msj)
    {
        char *a = new char[0];
        char c;
        int i = 0, cont = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= '0' && c <= '9')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '.' && cont < 1)
            {
                cout << c;
                a[i++] = c;
                cont++;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
                cont = 0;
            }
        }
        a[i] = '\0';
        return a;
    }

    char *ingresoCedula(char const *msj)
    {
        int i = 0;
        char *dato = new char[0];
        char c;
        cout << msj;
        do
        {
            i = 0;
            while ((c = getch()) != 13)
            {
                if (c >= '0' && c <= '9' && i <= 9)
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
            if (i < 9)
            {
                cout << "\n\tFaltan " << 9 - i << " digitos" << endl;
            }
        } while (i < 9 );
        dato[i] = '\0';
        return dato;
    }


    char *ingresoNombreApellido(char const *msj)
    {
        char *a = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
            }
            if (a[0] >= 'a' && a[0] <= 'z')
            {
                a[0] = a[0] - 32;
            }
        }
        a[i] = '\0';
        return a;
    }

    char *ingresoNumeroCelular(char const *msj)
    {
        int i = 0;
        char *dato = new char[0];
        char c;
        cout << msj;
        do
        {
            i = 0;
            while ((c = getch()) != 13)
            {
                if (c >= '0' && c <= '9' && i <= 9)
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
            if (i < 9)
            {
                cout << "\n\tFaltan " << 9 - i << " digitos" << endl;
            }
            if (dato[0] != '0' || dato[1] != '9')
            {
                cout << "\n\tEl numero debe empezar con 09" << endl;
            }
        } while (i < 9 || dato[0] != '0' || dato[1] != '9');
        dato[i] = '\0';
        return dato;
    }

    char *ingresoDireccion(char const *msj)
    {

        char *a = new char[0];
        char c;
        int i = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9' || c == '-' || c == ' ')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
            }
        }
        if (i < 10)
        {
            cout << "\n\tLa direccion debe tener al menos 10 caracteres" << endl;
        }
        a[i] = '\0';
        return a;
    }

    char *ingresoCorreo(char const *msj)
    {

        char *a = new char[0];
        char c;
        int i = 0, cont1 = 0, cont2 = 0;
        cout << msj;
        while ((c = getch()) != 13)
        {
            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9' || c == '_')
            {
                cout << c;
                a[i++] = c;
            }
            else if (c == '.' && cont1 < 1)
            {
                cout << c;
                a[i++] = c;
                cont1++;
            }
            else if (c == '@' && cont2 < 1)
            {
                cout << c;
                a[i++] = c;
                cont2++;
            }
            else if (c == '\b')
            {
                i--;
                cout << "\b \b";
                cont1 = 0;
                cont2 = 0;
            }
        }
        a[i] = '\0';
        return a;
    }

    vector<string> split(string str, char pattern)
    {

        int posInit = 0;
        int posFound = 0;
        string splitted;
        vector<string> results;

        while (posFound >= 0)
        {
            posFound = str.find(pattern, posInit);
            splitted = str.substr(posInit, posFound - posInit);
            posInit = posFound + 1;
            results.push_back(splitted);
        }

        return results;
    }

    bool verificarUsuario(string datoBuscar)
    {
        
        vector<string> results;
        string line;
        string lectura;
        lectura = leerArchivoTxt();
        char delimitador = '\n';
        stringstream input_stringstream(lectura);

        while (getline(input_stringstream, line, '\n'))
        {

            results = split(line, ' ');

            for (int i = 0; i < results.size(); i++)
            {
                // cout << results[i] << endl;
                if (results[i] == datoBuscar)
                {
                    return true;
                }
            }
        }
    }

    string buscarEnLista(string datoBuscar)
    {
        
        vector<string> results;
        string line;
        string lectura;
        lectura = leerArchivoTxt();
        char delimitador = '\n';
        stringstream input_stringstream(lectura);

        while (getline(input_stringstream, line, '\n'))
        {   
            results = split(line, ' ');
            for (int i = 0; i < results.size(); i++)
            {
                if (results[i] == datoBuscar)
                {  
                    return line;
                }
            }
        }
    }

    int charToInt()
    {
        char dato[10];
        int valor = 0;
        strcpy(dato, integerImput("\n> "));
        valor = atoi(dato);
        return valor;
    }

    float charToFloat()
    {
        char dato[10];
        float valor = 0;
        strcpy(dato, doubleAndFloatImput("\n> "));
        valor = atof(dato);
        return valor;
    }


    string leerArchivoTxt()
    {
        string texto;
        string lectura;
        ifstream archivo;
        archivo.open("RolDePagos.txt", ios::in);
        if (archivo.fail())
        {
            cout << "No se pudo abrir el archivo";
            exit(1);
        }
        while (!archivo.eof())
        {
            getline(archivo, texto, ' ');
            lectura += texto + " ";
        }
        archivo.close();
        return lectura;
    }
};