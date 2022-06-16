#include "Episode.h"

/*
Constructor default
*/

Episode::Episode(){
    season = 0;
}

/*
Constructor sobrecargado
*/

Episode::Episode(std::string name, double duration, std::string classification, std::string synopsis, std::string url, int season):Video(name, duration, classification, synopsis, url){
    this -> season = season;
}

/*
Getters y Setters
*/

int Episode::getSeason(){
    return season;
}

void Episode::setSeason(int season){
    this -> season = season;
}


/*
Sobrecarga de operadores para entrada y salida de datos
*/

std::ostream &operator << (std::ostream & salida, Episode& ep){
    salida << "\n" << ep.Video::getName() << "\nDuracion:\t" << ep.Video::getDuration() << "\nClasificacion:\t" << ep.Video::getClassification() << "\nSynopsis:\t" <<  ep.Video::getSynopsis() << "\nUrl:\t" << ep.Video::getUrl() << "\nSeasons:\t" << ep.getSeason() << std::endl;
    return salida;
}

std::istream &operator >> (std::istream & entrada, Episode& ep){
    std::string name, classification, synopsis, url;
    double duration;
    int season;
    entrada >> name >> duration >> classification >>  synopsis >> url >> season;
    ep = Episode(name, duration, classification, synopsis, url, season);
    return entrada;
}
