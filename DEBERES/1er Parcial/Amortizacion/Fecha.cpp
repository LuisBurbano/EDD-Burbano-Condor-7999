#include <iostream>
#include <ctime>
#include "Fecha.h"

using namespace std;

tm *Fecha::añadirDias(int dias){
    time_t t = time(0);
    tm *now = localtime(&t);
    now -> tm_mday += dias;
    mktime(now);
    return now;
}

void Fecha::mostrarFechas(){
    
    //365 es un dato quemado que luego se determinara por el usuario al ingresar los periodos de pago que se desea en meses
    for(int i = 0; i <365 ; i++){
        tm *ltm2 = añadirDias(i);
        int days = ltm2->tm_mday;
        int weeksDay = ltm2->tm_wday;
        int month = ltm2->tm_mon + 1;
        int year = ltm2->tm_year + 1900; 

        //25 es un dato quemado que luego se debe cambiar por el dia del mes que se desea
        if(ltm2->tm_mday==25){
            if(ltm2->tm_wday == 6 
            || ltm2->tm_wday == 0
            || ltm2->tm_mday == 6 && (ltm2->tm_mon + 1) == 12
            || ltm2->tm_mday == 25 && (ltm2->tm_mon + 1) == 12
            || ltm2->tm_mday == 31 && (ltm2->tm_mon + 1) == 12
            || ltm2->tm_mday == 1 && (ltm2->tm_mon + 1) == 1
            || ltm2->tm_mday == 20 && (ltm2->tm_mon + 1) == 2
            || ltm2->tm_mday == 21 && (ltm2->tm_mon + 1) == 6
            || ltm2->tm_mday == 1 && (ltm2->tm_mon + 1) == 5
            || ltm2->tm_mday == 24 && (ltm2->tm_mon + 1) == 5
            || ltm2->tm_mday == 10 && (ltm2->tm_mon + 1) == 8
            || ltm2->tm_mday == 9 && (ltm2->tm_mon + 1) == 10
            || ltm2->tm_mday == 2 && (ltm2->tm_mon + 1) == 11
            || ltm2->tm_mday == 3 && (ltm2->tm_mon + 1) == 11){
                
                if(ltm2->tm_mday == 25 && (ltm2->tm_mon + 1) == 12){
                    cout<<"25 de diciembre FELIZ NAVIDAD :) \nLa fecha de pago debera hacerse en la siguiente fecha: "<<endl;
                    ltm2 = añadirDias(i+2);
                }else{
                    if(ltm2->tm_wday == 6){
                        ltm2 = añadirDias(i+2);
                        cout<<"Dia sabado, la fecha de pago se pasara al dia lunes "<<ltm2->tm_mday<<endl;
                    }else if(ltm2->tm_wday == 0){
                        ltm2 = añadirDias(i+1);
                        cout<<"Dia domingo, la fecha de pago se pasara al dia lunes "<<ltm2->tm_mday<<endl;
                    }
                }   
            }
            
            cout<<"Fecha de pago : " << ltm2->tm_mday << "/" << ltm2->tm_mon + 1 << "/" << ltm2->tm_year + 1900 <<"\n"<< endl;
        }
    }
}





