#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <Windows.h>
#include <shellapi.h>
#include <stdlib.h>
#include "Video.h"
#include "Episode.h"
#include "Movie.h"
#include "Serie.h"
#include "Plus.h"
#include "Platform.h"
using namespace std;

Platform calakmul;

void counterForStart(){
    int counter = 10;
    Sleep(1000);
    cout << "---------------BIENVENID@ A CALAKMUL + ----------------\n made by: Benjamin G, Ines M.\n";
    while (counter >= 1){
        Sleep(1000);
        counter --;
    }
}

void openURL(){
    char cmd[] = {"\" \"C\\Program Files {x86}" 
                  "\\Microsoft\\Edge\\Applications\\msedge.exe\""};
    system(cmd);
}


int main(){
    calakmul.loadPlatformB();

    for(int i = 0; i<calakmul.size(); i++){
    if(Movie* ptrMovie = static_cast<Movie*>(calakmul[i])){
        cout<<"Pelicula: "<< endl;
        ptrMovie->getInfo();
    }
    else if (Movie* ptrMovie = static_cast<Movie*>(calakmul[i]))
    {
        cout<<"Serie: "<< endl;
        ptrMovie->getInfo();
    }}
    
    
    counterForStart();
    int option;
    do{
        cout << "---------- CALAKMUL + MENU: -------------\n" << endl;
        cin >> option;
        openURL();
        

    }while(option != 4);

    return 0;
}
