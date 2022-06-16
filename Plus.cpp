#include "Plus.h"

/*
Constructor default
*/

Plus::Plus(){
    cuenta = '0'; //Variale cuenta contiene un char que distingue entre serie, movie o episode
}

/*
Constructor sobrecargado
*/

Plus::Plus(char cuenta){
    this-> cuenta = cuenta;
}

/*
Getters y setters
*/

char Plus::getCuenta(){
    return cuenta;
}

void Plus::setCuenta(char cuenta){
    this -> cuenta = cuenta;
}

void Plus::getInfo(){
    std::cout<<"sdds"<< std::endl;
}

/*Sobrecarga operador de salida con fin de prueba*/

std::ostream &operator << (std::ostream & salida, Plus& p){
    salida << "\n" << p.getCuenta() << "\n";
    return salida;
}