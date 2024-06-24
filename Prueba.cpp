// Compilado con Onlinegdb
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
#define Negro "\033[0;30m"
#define Rojo "\033[0;31m"
#define Verde "\033[0;32m"
#define Amarillo "\033[0;33m"
#define Azul "\033[0;34m"
#define Magenta "\033[0;35m"
#define Cyan "\033[0;36m"
#define Blanco "\033[0;37m"
#define RESET_COLOR "\033[0m"

// int promedio(int cant, int jugadores[cant][3]) {
    
// } 


int main() {

cout << Cyan "\t \t PRUEBA DE PROGRAMACION ORIENTADA A OBJETOS \t \t" RESET_COLOR << endl;
  
int cant;
cout << "Ingrese la cantidad de jugadores que quiere poner: ";
cin >> cant;
    
int jugadores[cant][3]; // Matriz de cantidad de jugadores x los 3 valores ingresados

cout << "Ahora lo que hara sera ingresar todos los datos de los jugadores" << endl;
    
    for(int i = 0; i< cant; i++) {
        cout << "Ingrese el numero del jugador: ";
        cin >> jugadores[i][0];
        if(jugadores[i][0] == 0) {
            cout << Rojo << "Usted eligio 0, se cerrara el programa" RESET_COLOR; // Con el 0 se cierra el programa porque anteriormente te pregunta cuantos jugadores queres ingresar
            return 0;
        }
        cout << endl << "Ingrese el numero de juego que jugo el jugador: ";
        cin >> jugadores[i][1];
        cout << endl << "Ingrese el numero de calificacion del jugador (si elige 0 contara como que no fue calificado): ";
        cin >> jugadores[i][2];
    }
            
    // for(int i = 0; i< cant; i++) { // Este ciclo for se usa para mostrar la matriz creada
    //     cout <<" " << jugadores[i][0] << " ";
    //     cout <<" " << jugadores[i][1] << " ";
    //     cout <<" " << jugadores[i][2] << " ";
    //     cout << endl;
    // }
    
    
cout << Magenta "Ahora ingrese los premios segun el numero de juego (primer premio es para el primer juego, y septimo premio es para el septimo juego: " RESET_COLOR;
int premios[7];

    // INGRESO DE PREMIOS PARA CADA JUEGO
    cout << endl;
    for(int i = 0; i < 7; i++) {
        cout << "Ingrese el premio del juego numero " << i + 1 << " ";
        cin >> premios[i];
    }
    // CALIFICACION DE CADA JUGADOR EN CADA JUEGO
    cout << endl;
    for(int i = 0; i < cant; i++) {
        cout << Azul "El jugador numero " << jugadores[i][0] << " saco calificacion " << jugadores[i][2] << " en el juego " << jugadores[i][1] << " " RESET_COLOR << endl;
    }
    
    // PROMEDIO
    cout << endl;
    int promedioAux = 0;
    for( int i = 0; i< cant; i++) { // En este ciclo se cuenta en una variable la cantidad de jugadores que tienen como calificacion 0 (sin calificar)
      if(jugadores[i][2] == 0) {
          promedioAux++;
      }
    }
    int promedioSinCalificacion = (promedioAux * 100) / cant;
    cout << "Hay " << promedioSinCalificacion << " porciento de jugadores sin calificar" << endl; 

    // ENTREGA DE PREMIOS
    cout << endl;
    for(int i = 0; i < cant; i++) {
        if(jugadores[i][2] >= 8) {
            cout << "El jugador " << jugadores[i][1] <<  " saco una calificacion de " << jugadores[i][2] << " en el juego numero " << jugadores[i][1] << " y recibe un premio de " << premios[jugadores[i][1] - 1] << " pesos";
        }
    }
}
