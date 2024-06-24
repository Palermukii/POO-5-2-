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
int determinante(int matriz[3][3]) {
  int resultado =
      matriz[0][0] *
          (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
      matriz[0][1] *
          (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
      matriz[0][2] *
          (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

  return resultado;
}
void ej1() {
  int matriz[2][2];

  // Ingresar datos de la matriz original
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "Ingrese el valor de la fila " << i << " columna " << j << " : ";
      cin >> matriz[i][j];
    }
  }

  // Mostrar matriz original
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << " " << matriz[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  int matrizTraspuesta[2][2];

  // Generacion de la matriz traspuesta
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      matrizTraspuesta[i][j] = matriz[j][i];
    }
  }

  // Mostrar matriz traspuesta
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << " " << matrizTraspuesta[i][j] << " ";
    }
    cout << endl;
  }
}
void ej2() {
  int matriz[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Ingrese el valor de la fila " << i << " columna " << j << " : ";
      cin >> matriz[i][j];
    }
  }

  // Mostrar matriz original
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "\t" << matriz[i][j] << "\t";
    }
    cout << endl;
  }
  cout << endl;
  int det = determinante(matriz);
  cout << det;
}
void ej6() {
  int matrizA[2][2];
  int matrizB[2][2];
  cout << Cyan "\t A continuacion ingresa la matriz A \t" RESET_COLOR << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "Ingrese el numero que iria en la fila " << i << " y la columna "
           << j << ": " << endl;
      cin >> matrizA[i][j];
    }
  }
  cout << Cyan "\t A continuacion ingresa la matriz B \t" RESET_COLOR << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "Ingrese el numero que iria en la fila " << i << " y la columna "
           << j << ": " << endl;
      cin >> matrizB[i][j];
    }
  }
  int producto[2][2];
  producto[0][0] =
      matrizA[0][0] * matrizB[0][0] + matrizA[0][1] * matrizB[1][0];
  producto[0][1] =
      matrizA[0][0] * matrizB[0][1] - matrizA[0][1] * matrizB[1][1];
  producto[1][0] =
      matrizA[1][0] * matrizB[0][0] + matrizA[1][1] * matrizB[1][0];
  producto[1][1] =
      matrizA[1][0] * matrizB[0][1] - matrizA[1][1] * matrizB[1][1];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "\t" << producto[i][j] << "\t";
    }
    cout << endl;
  }
}
void ej7() {
  int meses[2][12] = {
      {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
      {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
  };
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 12; j++) {
      cout << " " << meses[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < 12; i++) {
    if (meses[1][i] == 30) {
      cout << Magenta "El mes " << meses[0][i] << " tiene 30 dias" RESET_COLOR
           << endl;
    }
  }
}
int main() {
  int decision;
  printf(Cyan "hola" RESET_COLOR);
  cout << Cyan "\t \t EJERCICIOS DE MATRICES \t \t" RESET_COLOR << endl;
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
    // case 3:
    //   ej3();
    //   break;
    // case 4:
    //   ej4();
    //   break;
    // case 5:
    //   ej5();
    //   break;
    case 6:
      ej6();
      break;
    case 7:
      ej7();
      break;
    default:
      cout << "Eligio un programa que no existe";
      break;
    }
    cout << "Desea ejecutar otro programa (Y/N) ";
    cin >> seguir;
  }
}
