#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <vector>
#include "Episode.h"
#include "Video.h"
#include "Plus.h"


/*
Clase derivada de video y derivada de Plus
Aprovechamos la herencia de Plus con Movie y Serie para poder almacenar ambas en un mismo vector
Es derivada de video ya que la pelicula es un video
*/

class Movie:public Video, public Plus{
    private:
        float rate;
        std::string gender;
    public:
        Movie();
        Movie(char, std::string, double, std::string, std::string, std::string, float, std::string);

/*
Getters y Setters
*/

        float getRate();
        std::string getGender();
        void setRate(float);
        void setGender(std::string);
        void getInfo() override;
        
/*
Sobrecarga de operadores de entrada y salida
*/
        
        friend std::ostream& operator<< (std::ostream &, Movie&);
        
        friend std::istream& operator>> (std::istream &, Movie&);

};

#endif // MOVIE_H
