#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>


/*
Clase Video
Es una clase base para las clases Movie y Episodio, ya que ambos son videos, tienen synopsis propia, 
duracion del video, direccion del video, nombre del video
*/

class Video{
    private:
        std::string name;
        double duration;
        std::string classification;
        std::string synopsis;
        std::string url;
    public:
        Video();
        Video(std::string, double, std::string, std::string, std::string);

/*
Getters
*/

        std::string getName();
        double getDuration();
        std::string getClassification();
        std::string getSynopsis();
        std::string getUrl();

/*
Setters
*/

        void setName(std::string);
        void setDuration(float);
        void setClassification(std::string);
        void setSynopsis(std::string);
        void setUrl(std::string);


/*
Sobrecarga de operadores
    * Operador de flujo de salida
    * operador de flujo de entrada
*/

        friend std::ostream& operator<< (std::ostream &, const Video&);
        
        friend std::istream& operator>> (std::istream &, Video&);

};

#endif // VIDEO_H
