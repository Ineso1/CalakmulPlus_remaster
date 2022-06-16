#ifndef EPISODE_H
#define EPISODE_H
#include <iostream>
#include "Video.h"

/*
Clase que compone a la clase Serie
Ya que la serie contiene episodios
Es clase derivada de Video, ya que Episodio es un video
*/

class Episode:public Video{
    private:
        int season;

    public:
        Episode();
        Episode(std::string, double, std::string, std::string, std::string, int);
        
/*
Getters y Setters
*/

        int getSeason();
        void setSeason(int);

/*
Sobrecarga de operadores para entrada y salida de datos
*/

        friend std::ostream& operator<< (std::ostream &, Episode&);
        
        friend std::istream& operator>> (std::istream &, Episode&);
        
};

#endif // EPISODE_H
