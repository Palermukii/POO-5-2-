#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int filas;
	int columnas;
	printf("Ingrese la cantidad de filas: ");
	scanf("%d", &filas);
 	printf("Ingrese la cantidad de columnas: ");
	scanf("%d", &columnas);
 	int A[filas][columnas];
 	printf("Vaya ingresando los numeros: ");
 
 
 	for(int i = 0; i < filas; i++) { // Ingresar numero por numero
         for(int j = 0; j < columnas; j++) {
                 printf("Ingrese A[%d][%d]: ",i,j);
                 scanf("%d", &A[i][j]);
                 }
         
         }
  	for(int i = 0; i < filas; i++) { // Muestra los numeros en pantalla
          printf("\n");
         for(int j = 0; j < columnas; j++) {
                 printf("%d\t",A[i][j]);
                 }
         
         }

printf("\n");
system("pause");
}
