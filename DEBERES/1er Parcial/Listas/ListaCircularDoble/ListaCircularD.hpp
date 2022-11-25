/*	UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
		INGENIERA DE SOFTWARE
                
	AUTORES:
		Mateo Javier Condor Sosa 	 
		Luis Ariel Burbano Pacheco       
	FECHA DE CREACION:
		21/11/2022         	
	FECHA DE MODIFICACION:
		22/11/2022   
*/

#pragma once
#include <iostream>
#include "Nodo.hpp"
#include "Funciones.h"

using namespace std;

template <typename T>
class ListaDoble : public Funciones {
    private:
        Nodo<T> *inicio = nullptr;
        Nodo<T> *fin = nullptr;
        int tam = 0;

    public:

        void insertarPorInicio(T dato){
            Nodo<T> *nuevo = new Nodo<T>(dato);
            if(inicio == NULL){
                inicio = nuevo;
                fin = nuevo;
                inicio -> setSiguiente(inicio);
                inicio -> setAnterior(fin);

            }else{
                inicio -> setAnterior(nuevo);
                nuevo -> setAnterior(fin);
                nuevo -> setSiguiente(inicio);
                inicio = nuevo;
                fin -> setSiguiente(inicio);
            }
            tam++;
        }

        void insertarPorFin(T dato){
            Nodo<T> *nuevo = new Nodo<T>(dato);
            if(inicio == NULL){
                inicio = nuevo;
                fin = nuevo;
                inicio -> setSiguiente(inicio);
                inicio -> setAnterior(fin);
            }else{
                fin -> setSiguiente(nuevo);
                nuevo -> setAnterior(fin);
                nuevo -> setSiguiente(inicio);
                fin = nuevo;
                inicio -> setAnterior(fin);
            }
            tam++;
        }

        void insertarPorPosicion(T dato, int pos){
            Nodo<T> *nuevo = new Nodo<T>(dato);
            Nodo<T> *aux = inicio;
            int cont = 0;
            if(inicio == NULL){
                cout << "\n\tLista vacia" << endl;
            }else if(pos == 0){
                insertarPorInicio(dato);
            }else if(pos == tam){
                insertarPorFin(dato);   
            }else{
                while(aux){
                    if(cont == pos){
                        aux -> getAnterior()->setSiguiente(nuevo);
                        nuevo -> setAnterior(aux->getAnterior());
                        aux -> setAnterior(nuevo);
                        nuevo -> setSiguiente(aux);
                        break;
                    }
                    aux = aux -> getSiguiente();
                    cont++;
                }
                tam++;
            }
            
        }
        
        void eliminarPorInicio(){
            if(inicio == NULL){
                cout << "\n\tLista vacia" << endl;
            }else{
                inicio = inicio -> getSiguiente();
                inicio -> setAnterior(fin);
                fin -> setSiguiente(inicio);
                cout << "\n\tDato eliminado" << endl;
            }
            tam--;
        }

        void eliminarPorFin(){
            if(inicio == NULL){
                cout << "\n\tLista vacia" << endl;
            }else{
                fin = fin -> getAnterior();
                fin -> setSiguiente(inicio);
                inicio -> setAnterior(fin);
                cout << "\n\tDato eliminado" << endl;
            }
            tam--;
        }

        void eliminarPorPosicion(int pos){
            Nodo<T> *aux = inicio;
            int cont = 0;
            
            if(inicio == NULL){
                cout << "\n\tLista vacia" << endl; 
            }else if(pos == 0){
                eliminarPorInicio();
            }else if(pos == tam){
                eliminarPorFin();   
            }else{
                while(aux){
                    if(cont == pos){
                        aux->getAnterior() -> setSiguiente(aux -> getSiguiente());
                        aux->getSiguiente() -> setAnterior(aux -> getAnterior());
                        break;
                    }
                    aux = aux->getSiguiente();
                    cont++;
                }
                tam--;
            }
        }

        void buscar(T dato){
            Nodo<T> *aux = inicio;
            int cont = 1;
            bool encontrado = false;
            if(inicio == NULL){
                cout << "\n\tLista vacia" << endl;
            }else{

                while(aux){
                    if(aux->getDato() == dato){
                        encontrado = true;
                        break;
                    }else{
                        encontrado = false;
                    }
                    aux = aux->getSiguiente();
                    cont++;
                }

                if (encontrado == true) {
                    cout << "El dato " << dato << " se encuentra en la posicion " << cont << endl;
                } else {
                    cout << "El dato " << dato << " no se encuentra en la lista" << endl;
                }
            }
            
        }

        bool mostrar(){
            bool vacio = false;
            Nodo<T> *aux = inicio;
            if(inicio != NULL){
                cout<< "\n("<< fin->getDato() << ") -> <- ";
                do{
                    cout << aux -> getDato() << " -> <- ";
                    aux = aux -> getSiguiente();
                }while(aux != inicio);
                cout<<"("<< inicio->getDato() << ")";

            }else{
                cout << "\n\tLista vacia" << endl;
                return vacio = true;
            }
            cout <<"\nLa lista tiene "<< tam <<" elementos "<< endl;

        }

        int calcularMCD(int a, int b){
                if (a == 0){
                    return b;
                }else if (b == 0){
                    return a;
                }else if (a == b){
                    return a;
                    //return calcularMCD(b, a%b);
                }else if (a > b){
                    return calcularMCD(a-b, b);
                }
                return calcularMCD(a, b-a);         
        }

        int calcularMCM(int a, int b){
            return (a*b)/calcularMCD(a,b);
        }

        void mcmmcdDeLista(){
            Nodo<T> *aux = inicio;
            int mcm = 0;
            int mcd = 0;
            int a = 0;
            int b = 0;
            if(inicio == NULL){
                cout << "\n\tLista vacia" << endl;
            }else if(inicio->getSiguiente() == inicio){
                cout << "\n\tSolo hay un elemento en la lista" << endl;
                cout << "\n\tSe necesitan minimo 2 elementos" << endl;
            }else if(inicio != NULL){
                a = aux -> getDato();
                b = aux -> getSiguiente() -> getDato();
                mcm = calcularMCM(a,b);
                mcd = calcularMCD(a,b);
                do{
                    aux = aux -> getSiguiente();
                    mcm = calcularMCM(mcm,aux -> getDato());
                    mcd = calcularMCD(mcd,aux -> getDato());
                }while(aux != inicio);
                cout << "\n\t~El MCM: " << mcm <<endl;
                cout << "\n\t~El MCD: " << mcd << endl;   
            }
        }   
};