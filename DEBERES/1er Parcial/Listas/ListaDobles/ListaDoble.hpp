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
            }else{
                inicio->setAnterior(nuevo);
                nuevo->setSiguiente(inicio);
                inicio = nuevo;
            }
            tam++;
        }

        void insertarPorFin(T dato){
            Nodo<T> *nuevo = new Nodo<T>(dato);
            if(inicio == NULL){
                inicio = nuevo;
                fin = nuevo;
            }else{
                fin->setSiguiente(nuevo);
                nuevo->setAnterior(fin);
                fin = nuevo;
            }
            tam++;
        }

        void insertarPorPosicion(T dato, int pos){
            Nodo<T> *nuevo = new Nodo<T>(dato);
            Nodo<T> *aux = inicio;
            int cont = 1;
            if(pos == 0){
                insertarPorInicio(dato);
            }else if(pos == tam){
                insertarPorFin(dato);   
            }else{
                while(aux){
                    if(cont == pos){
                        aux->getAnterior()->setSiguiente(nuevo);
                        nuevo->setAnterior(aux->getAnterior());
                        aux->setAnterior(nuevo);
                        nuevo->setSiguiente(aux);
                        break;
                    }
                    aux = aux->getSiguiente();
                    cont++;
                }
                tam++;
            }   
        }
        
        void eliminarPorInicio(){
            if(inicio == NULL){
                cout << "\tLista vacia" << endl;
            }else{
                inicio = inicio->getSiguiente();
                inicio->setAnterior(nullptr);
            }
            tam--;
        }

        void eliminarPorFin(){
            if(inicio == NULL){
                cout << "Lista vacia" << endl;
            }else{
                fin = fin->getAnterior();
                fin->setSiguiente(nullptr);
            }
            tam--;
        }

        void eliminarPorPosicion(int pos){
            Nodo<T> *aux = inicio;
            int cont = 0;
            if(pos == 0){
                eliminarPorInicio();
            }else if(pos == tam){
                eliminarPorFin();   
            }else{
                while(aux){
                    if(cont == pos){
                        aux->getAnterior()->setSiguiente(aux->getSiguiente());
                        aux->getSiguiente()->setAnterior(aux->getAnterior());
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
            int cont = 0;
            bool encontrado = false;
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
                cout << "El dato " << dato << " se encuentra en la posicion " << cont + 1 << endl;
            } else {
                cout << "El dato " << dato << " no se encuentra en la lista" << endl;
            }
        }

        void mostrar(){
            Nodo<T> *aux = inicio;
            while(aux){
                cout << aux->getDato() << " -> <- ";
                aux = aux->getSiguiente();
            }
            cout <<"NULL"<< endl;
            cout <<"La lista tiene "<< tam <<" elementos "<< endl;
        }

    
        
};