#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

void ej1() {
	int a;
	printf("Ingrese un numero para ver si es positivo o negativo: ");
	scanf("%d", &a);
	if(a> 0) {
		printf("A es positivo\n");
	}
	else if (a == 0) {
		printf("A es 0\n");
	}
	else {
		printf("A es negativo\n");
	}
}	
void ej2() {
	int a;
	printf("Ingrese un numero para ver si es par o impar: ");
	scanf("%d", &a);
	if(a % 2 == 0) {
		printf("A es par\n");
	}
	else {
		printf("A es impar\n");
	}
}	
void ej3() {
	int a;
	printf("Ingrese un numero para ver si es multiplo de 2 y/o de 3: ");
	scanf("%d", &a);
	if(a % 2 == 0) {
		if(a % 3 == 0) {
			printf("A Es multiplo de 2 y 3\n");
		}
		else {
			printf("A Es multiplo de 2\n");
		}
	}
	else if(a % 3 == 0){
		printf("A es multiplo de 3\n");
	}
	else {
		printf("A No es multiplo de ninguno\n");
	}
}	
void ej4() {
	int a, b, c;
	printf("Ingrese a, b y c en ese orden: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a == b && b == c) {
		printf("Son todos iguales\n");
	}
	else if (a > b && a > c) {
		printf("A es el mayor\n");
	}
	else if (b > a && b > c) {
		printf("B es el mayor\n");
	}
	else if (c > a && c > b) {
		printf("C es el mayor\n");
	}
	else if (a == b && a > c) {
		printf("A y B son los mayores\n");
	}
	else if (a == c && a > b) {
		printf("A y C son los mayores\n");
	}
	else if (b == c && b > a) {
		printf("B y C son los mayores\n");
	}
}
	
	
	
	int decision;
	printf("Los programas a elegir son estos:\n1. Positivo o Negativo\n2. Par o Impar\n3. Multiplo de 2 y/o 3\n4. Mayor de los 3\n");
	printf("Elija el programa que desea ejecutar: ");
	scanf("%d", &decision);
	switch(decision) {
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
	}
	

	

	return 0;
}
