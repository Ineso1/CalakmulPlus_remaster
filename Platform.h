#ifndef PLATFORM_H
#define PLATFORM_H
#include <vector>
#include <iostream>
#include "Plus.h"
#include "Movie.h"
#include "Serie.h"
#include "Episode.h"
#include <fstream>

/*
Clase que guarda las peliculas y serie de cierta plataforma
Guarda punteros de la clase Plus para poder usar de forma polimorfica a la clase Movie y Serie
*/

class Platform{
    private:
        std::vector<Plus*> vecPlatform;
    public:

        Platform();

/*
Funciones especiales para el manejo del vector
    *   Sobrecarga de operador corchetes para retornar elemento en una posicion especifica
    *   Carga de datos de un archivo txt
    *   Carga manual para uso del programa
    *   impresion de unicamente los nombres los elementos
    *   Funcion que retorna clase derivada original (upcasting para Movie)
    *   Funcion que retorna clase derivada original (upcasting para Serie)
*/
        Plus* &operator[](int);
        void loadPlatformA();
        void loadPlatformB();
        int size();

        void printNames();
        Movie upCastPlus_Movie(Plus*&);
        Serie upCastPlus_Serie(Plus*&);
};

#endif // PLATFORM_H
