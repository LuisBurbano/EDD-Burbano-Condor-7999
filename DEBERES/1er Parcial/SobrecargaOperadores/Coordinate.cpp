#include <iostream>
#include "Coordinate.h"

using namespace std;

Coordinate::Coordinate(int x, int y){
    x = x;
    y = y;
}

Coordinate::Coordinate(){

}

int Coordinate::getX(){
    return x;
}

int Coordinate::getY(){
    return y;
}

void Coordinate::setX(int x){
    this -> x = x;
}

void Coordinate::setY(int y){
    this -> y = y;
}

int Coordinate::operator * (Coordinate c){
    return (this -> x*c.getX() + this -> y*c.getY());
}
