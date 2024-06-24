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

void ej1() {
  int lista[4];
  double media = 0;
  for (int i = 0; i < 4; i++) {
    cout << "Ingrese el numero " << i + 1 << " ";
    cin >> lista[i];
    media += lista[i];
  }

  cout << "El promedio es " << media / 4 << endl;
}
void ej2() {
  int lista[5];
  for (int i = 0; i < 5; i++) {
    cout << "Ingrese el numero " << i + 1 << " ";
    cin >> lista[i];
  }
  for (int i = 4; i >= 0; i--) {
    cout << lista[i] << endl;
  }
}
void ej3() {
  int dias[] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31};
  int mes;
  cout << "Elija el numero de mes del que quiere ver la cantidad de dias: ";
  cin >> mes;
  cout << "El mes " << mes << " tiene " << dias[mes - 1] << " dias" << endl;
}
void ej4() {
  int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31};
  int mes;
  int dia;
  cout << "Elija un mes: ";
  cin >> mes;
  cout << "Elija un dia de ese mes: ";
  cin >> dia;
  int diasAcumulados = 0;
  for (int i = 0; i < mes - 1; i++) {
    diasAcumulados += diasPorMes[i];
  }
  diasAcumulados += dia;
  cout << "El dia " << dia << " del mes " << mes << " es el dia numero "
       << diasAcumulados << endl;
}
void ej5() {
  int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31};
  int mes;
  int dia;
  cout << "En que mes estamos (ingrese el numero): ";
  cin >> mes;
  cout << "E que dia estamos: ";
  cin >> dia;
  int diasAcumulados = 0;
  for (int i = 0; i < mes - 1; i++) {
    diasAcumulados += diasPorMes[i];
  }
  diasAcumulados += dia;
  cout << "Vamos por el dia: " << diasAcumulados << " y faltan "
       << 365 - diasAcumulados << " dias para que terimne el año" << endl;
}
void ej6() {
  int lista[10];
  for (int i = 0; i < 10; i++) {
    cout << "Ingrese el numero " << i + 1 << " ";
    cin >> lista[i];
  }
  for (int i = 9; i >= 0; i--) {
    cout << lista[i] << endl;
  }
}
void ej7() {
  int numeros[10];
  int sumaNumeros = 0;
  cout << "A continuacion, ingrese 10 numeros reales" << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Ingrese el numero " << i + 1 << "  ";
    cin >> numeros[i];
    sumaNumeros += numeros[i];
  }
  int media = sumaNumeros / 10;
  cout << "La media de los numeros es de: " << media << endl;
  cout << "Los numeros superiores a la media son: ";
  for (int i = 0; i < 10; i++) {
    if (numeros[i] > media) {
      cout << numeros[i] << endl;
    }
  }
}
void ej8() {
  int numeros[10];
  cout << "A continuacion, ingrese 10 numeros reales" << endl;
  for (int i = 0; i < 10; i++) {
    cout << "Ingrese el numero " << i << "  ";
    cin >> numeros[i];
  }
  int numeroMayor = numeros[0];
  for (int i = 0; i < 10; i++) {
    if (numeros[i] > numeroMayor) {
      numeroMayor = numeros[i];
    }
  }
  cout << "El numero mayor es: " << numeroMayor << endl;
}
void ej9() {
  int vector1[2];
  int vector2[2];
  cout << "Ingrese las coordenadas del primer vector de esta manera: X Y: ";
  cin >> vector1[0] >> vector1[1];
  cout << "Ingrese las coordenadas del segundo vector de esta manera: X Y: ";
  cin >> vector2[0] >> vector2[1];
  int diferencia[2];
  diferencia[0] = vector1[0] - vector2[0];
  diferencia[1] = vector1[1] - vector2[1];
  cout << "La diferencia de X es: " << abs(diferencia[0])
       << " y la diferencia de Y es: " << abs(diferencia[1])
       << endl; // abs se usa para sacar el valor absoluto del numero, ya que
                // la diferencia es de dos numeros, no de menos dos.
}
void ej10() {
  int vector1[3];
  int vector2[3];
  cout << "Ingrese las coordenadas del primer vector de esta manera: X Y Z ";
  cin >> vector1[0] >> vector1[1] >> vector1[2];
  cout << "Ingrese las coordenadas del segundo vector de esta manera: X Y Z ";
  cin >> vector2[0] >> vector2[1] >> vector2[2];
  int productoEscalar = vector1[0] * vector2[0] + vector1[1] * vector2[1] +
                        vector1[2] * vector2[2];
  cout << Magenta "El producto escalar es: " << productoEscalar
       << "" RESET_COLOR << endl;
}
void ej11() {
  int vector1[3];
  int vector2[3];
  cout << "Ingrese las coordenadas del primer vector de esta manera: X Y Z ";
  cin >> vector1[0] >> vector1[1] >> vector1[2];
  cout << "Ingrese las coordenadas del segundo vector de esta manera: X Y Z ";
  cin >> vector2[0] >> vector2[1] >> vector2[2];
  int productoVectorial[3];
  productoVectorial[0] = (vector1[1] * vector2[2]) - (vector1[2] * vector2[1]);
  productoVectorial[1] = (vector1[0] * vector2[2]) - (vector1[2] * vector2[0]);
  productoVectorial[2] = (vector1[0] * vector2[1]) - (vector1[1] * vector2[0]);

  cout << Magenta "El producto vectorial es: [" << productoVectorial[0] << "] ["
       << productoVectorial[1] << "] [" << productoVectorial[2]
       << "] " RESET_COLOR;
}
void ej12() {
  int vector1[2];
  int vector2[2];
  cout << "Ingrese las coordenadas del primer vector de esta manera: X Y: ";
  cin >> vector1[0] >> vector1[1];
  cout << "Ingrese las coordenadas del segundo vector de esta manera: X Y: ";
  cin >> vector2[0] >> vector2[1];
  if (vector1[0] / vector2[0] == vector1[1] / vector2[1]) {
    cout << "Estos vectores son linealmente dependientes" << endl;
  } else {
    cout << "Estos vectores no son linealmente dependientes" << endl;
  }
}

int main() {
  int decision;
  cout << Cyan "\t \t EJERCICIOS DE VECTORES \t \t" RESET_COLOR << endl;
  char seguir = 'Y';
  while (seguir == 'Y' || seguir == 'y') {
    cout << Magenta "Elija el programa que desea ejecutar: " RESET_COLOR;
    cin >> decision;
    switch (decision) {
    case 1:
      ej1();
      break;
    case 2:
      ej2();
      break;
    case 3:
      ej3();
      break;
    case 4:
      ej4();
      break;
    case 5:
      ej5();
      break;
    case 6:
      ej6();
      break;
    case 7:
      ej7();
      break;
    case 8:
      ej8();
      break;
    case 9:
      ej9();
      break;
    case 10:
      ej10();
      break;
    case 11:
      ej11();
      break;
    case 12:
      ej12();
      break;
    default:
      cout << "Eligio un programa que no existe";
      break;
    }
    cout << "Desea ejecutar otro programa (Y/N) ";
    cin >> seguir;
  }
}
