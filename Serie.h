#ifndef SERIE_H
#define SERIE_H
#include <iostream>
#include <vector>
#include "Episode.h"
#include "Plus.h"

/*
Clase que contiene Episodios encapsuladoes en un vector
Clase derivada de Plus para poder guardar en un vector junto con objetos de clase Movie
*/

class Serie:public Plus{
    private:
    std::string name;
    std::vector<Episode> episodes;
    float rate;
    std::string gender;
    int seasons;
    public:
        Serie();
        Serie(char, std::string, int, std::string, float);

/*
Getters
*/

        std::string getName();
        int getSeasons();
        std::string getGender();
        float getRate();

/*
Setters
*/

        void setName(std::string);
        void setSeasons(int);
        void setGender(std::string);
        void setRate(float);
        Episode getEpisodes();

/*
Funciones especiales de la clase
    *Agregar episodia al vector de punteros
    *Imprimir informacion general de la serie
    *Sobrecarga de operadores corchete para obtener el elemento de una posicion especifica

*/

        void agregarEpisodio(Episode);
        void getInfo() override;
        Episode &operator[](int);



/*
Sobrecarga de operadores de entrada y salida de datos
*/

        friend std::ostream& operator<< (std::ostream &, Serie&);
        
        friend std::istream& operator>> (std::istream &, Serie&);
};

#endif // SERIE_H
