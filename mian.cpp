#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
#include <Windows.h>
#include <shellapi.h>
#include <stdlib.h>
#include <chrono>
#include <ctime>
#include "Video.h"
#include "Episode.h"
#include "Movie.h"
#include "Serie.h"
#include "Plus.h"
#include "Platform.h"
using namespace std;

Platform calakmul;

void counterForStart(){
    system("cls");
    int counter = 10;
    Sleep(500);
    cout << "---------------BIENVENID@ A CALAKMUL + ----------------\n made by: Benjamin G, Ines M.\n";
    while (counter >= 1){
        Sleep(500);
        counter --;
    }
}


int main(){
    calakmul.loadPlatformA();
    counterForStart();
    int option;
    do{
        char opC;
        cout << "---------- CALAKMUL + MENU: -------------\n" << endl;
        cout << "1.Desplegar series\n2.Desplegar Peliculas\n3.Mostrar por...\n4.Salir\n";
        cin >> option;
        try{
            if(option < 0){
                throw "No se puede realizar esta opcion, numero negativo";
            }
    	}catch(const char* msg){
        	cerr << msg << endl;
            cout << "Ingrese un numero distinto: ";
            cin >> option;
    	}
        if (option == 1){
            cout << "----------- S E R I E S -------------\n";
            cout << "1.Stranger Things\n2.Breaking Bad\n3.Casa de Papel\n";
            cout << "Ingrese la incial de la serie: ";
            cin >> opC;
            if(opC == 's'){
                calakmul.getSerie(0);
            }else if (opC == 'b'){
                calakmul.getSerie(1);
            }else if (opC = 'c'){
                calakmul.getSerie(2);
            }else{
                cout << "Caracter incorrecto, no coincide\n";
            }
            
            

        }else if (option == 2){
            cout << "----------- P E L I C U L A S -------------\n";
            cout << "1.Garra\n2.Coraline\n3.Nemo\n";
            cout << "Ingrese la incial de la pelicula: ";
            cin >> opC;
            
            if(opC == 'g'){
                calakmul.getMovie(0);
            }else if (opC == 'c'){
                calakmul.getMovie(1);
            }else if (opC = 'n'){
                calakmul.getMovie(2);
            }else{
              cout<<"No existe esa opcion";  
            }

            
        }else if (option == 3){
            cout << "----------- M O S T R A R  P O R -------------\n";
            cout << "Nombre\n Rating\n";
            cout <<  "Ingrese la inciial de la opcion deseada: ";
            cin >> opC;
        }else if (option == 4){
            auto start = std::chrono::system_clock::now();
            auto end = std::chrono::system_clock::now();
            std::chrono::duration<double> elapsed_seconds = end-start;
            std::time_t end_time = std::chrono::system_clock::to_time_t(end);
            std::cout << "Finalizado sesion el: " << std::ctime(&end_time) << "Ejecucion del porgrama: " << elapsed_seconds.count() << "s" << std::endl;
            cout << "Hasta luego!" << endl;
        }else{
            cout << "ERROR, HAS TECLEADO UNA OPCION ICNORRECTA, POR FAVOR VERIFICA DE NUEVO\n";
        }
        
        system("Pause");
        system("cls");
        
        
        //calakmul.showMovies();
        //calakmul.showSeries();

    }while(option != 4);

    return 0;
}
