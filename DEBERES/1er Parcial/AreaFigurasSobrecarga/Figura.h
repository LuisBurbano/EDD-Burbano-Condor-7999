#include <iostream>

class Figura{   
    
    public:
        
        double area(double dato, int opcion);//cuadrado, circulo (radio y diametro)
        double area(double dato1, double dato2, int opcion);//rectangulo,triangulo, romboide o paralelogramo y rombo
        double area(double dato1,double dato2,double dato3, int opcion);//trapecio y poligono regular
        char *doubleAndFloatImput(char const *msj);
        double convertirFloat();

        void menu();

        
};