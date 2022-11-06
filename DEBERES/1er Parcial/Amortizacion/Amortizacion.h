#pragma once
#include <iostream>

class Amortizacion{
    
    private:
        float prestamo;
        float interes;
        int plazo;

    public: 
        Amortizacion(float prestamo, float interes, int plazo);
        Amortizacion();
        void setPrestamo(float prestamo);
        void setInteres(float interes);
        void setPlazo(int plazo);
        float getPrestamo();
        float getInteres();
        int getPlazo();
        float calcularCuota(float prestamo, float interes, int plazo);
        float calcularMontoFinal(float prestamo, float cuota, float interes);
        void mostrarTablaAmortizacion(Amortizacion a);

 
};

