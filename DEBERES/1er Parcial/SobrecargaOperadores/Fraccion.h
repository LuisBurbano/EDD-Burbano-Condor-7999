#include <iostream>


class Fraccion{
    private:
        float numerador;
        float denominador;
    public:
        Fraccion(float numerador, float denominador);
        Fraccion();
        void setNumerador(float numerador);
        void setDenominador(float denominador);
        float getNumerador();
        float getDenominador();
        float operator / (Fraccion);  
};
     

        
