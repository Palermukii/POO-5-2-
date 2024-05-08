#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


void tablero(){
	int num;
	printf("Escribi el numero del tamanio del tablero\n");
    scanf("%d",&num);
    char *tabla[num][num];
    int pirataf;
    int piratac;
    int tesorof;
    int tesoroc;
    for(int i = 0; i < num;i++){
    	for(int j = 0; j < num;j++){
    		if(i == 0 && j == num - 1 || i == num - 1 && j == 0){
    		tabla[i][j] = "|B|";	
			}else if(i == 0 || i == num - 1 || j == 0 || j == num - 1){
    		tabla[i][j] = "|A|";	
			}else{
    		tabla[i][j] = "|-|";
			}
		}
	}
	do{
    pirataf = (rand() % (num - 2)) + 1;
    piratac = (rand() % (num - 2)) + 1;
    tesorof = (rand() % (num - 2)) + 1;
	tesoroc = (rand() % (num - 2)) + 1;	
	} while(pirataf == tesorof && piratac == tesoroc);
	tabla[pirataf][piratac] = "|P|";
	buscar(num, tabla, piratac, pirataf, tesoroc, tesorof);	
    tabla[tesorof][tesoroc] = "|T|";
}

void imprimir(int num,char *tabla[num][num]){
for(int i = 0; i < num;i++){
	for(int j = 0; j < num;j++){
		printf("%s",tabla[i][j]);
	}
	printf("\n");
}	
}

void buscar(int num, char *tabla[num][num], int piratac, int pirataf, int tesoroc, int tesorof) {
	int encontrado = 0;
	for(int var = 0; var <= 50 && encontrado == 0; var++ ) {
	imprimir(num,tabla);
	printf("%d %d", tesorof + 1, tesoroc + 1);
	printf("El pirata esta en la fila %d columna %d\n", pirataf, piratac);
	tabla[pirataf][piratac] = "|-|";
	printf("Elija la fila en la que quiere posicionarse: ");
	scanf("%d",&pirataf);
	printf("Elija la columna en la que quiere posicionarse: ");
	scanf("%d",&piratac);
	tabla[pirataf][piratac] = "|P|";
		if(piratac - 1 == tesoroc && pirataf - 1 == tesorof) {
			printf("GANASTE\n");
			tabla[tesorof][tesoroc] = "|T|";
			imprimir(num, tabla);
			encontrado = 1;
		}

	}
}



int main(int argc, char *argv[]) {
	srand(time(NULL));
	tablero();
	return 0;
}
