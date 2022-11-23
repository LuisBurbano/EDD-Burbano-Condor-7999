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

using namespace std;

template <typename T>
class ListaDoble{
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
       
};