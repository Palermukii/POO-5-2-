#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int A[3][3];
 printf("Vaya ingresando los numeros: ");
 for(int i = 0; i < 3; i++) {
         for(int j = 0; j < 3; j++) {
                 printf("Ingrese A[%d][%d]: ",i,j);
                 scanf("%d", &A[i][j]);
                 }
         
         }
  for(int i = 0; i < 3; i++) {
          printf("\n");
         for(int j = 0; j < 3; j++) {
                 printf("%d\t",A[i][j]);
                 }
         
         }





system("pause");
}
