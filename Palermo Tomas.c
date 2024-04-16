#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const double pi = 3.14; // Se declara la constante pi para el ejercicio 3
// No deja compilar en dev c++, compilar en onlinegdb

int main(int argc, char *argv[]) {
	int decision;
	printf("Elija el numero de ejercicio a ejecutar: ");
	scanf("%d", &decision);
	
//void ej1() {
//	char *tipo;
//	int tamanio;
//	int precio;
//	
//	printf("Ingrese el tipo de uva (A o B): ");
//	scanf("%s", &tipo); // Se usa %s porque es un char en este caso
//	printf("Ingrese el tamaño: ");
//	scanf("%d", &tamanio); // Aca se usa %d porque es un entero
//
//	if((char)tipo == 'A') { // Esta parte del ejercicio no deja compilarlo, en el online si
//	 	if(tamanio == 1) {
//	 		precio = 200;
//	 		printf("El productor recibira %d$ por kilo", precio);
//	 }
//		 else if(tamanio == 2) {
//	 		precio = 300;
//	 		printf("El productor recibira %d$ por kilo", precio);
//	 }
//	 	else {
//			printf("Ingreso un tamaño incorrecto");
//	}
//	}
//	else if((char)tipo == 'B') {
//	 	if(tamanio == 1) {
// 			precio = 300;
// 			printf("El productor recibira %d$ por kilo", precio);
//	 }
//		else if(tamanio == 2) {
//	 		precio = 500;
//	 		printf("El productor recibira %d$ por kilo", precio);
//	 }
//	 	else {
//			printf("Ingreso un tamaño incorrecto");
//	}
//	}
//	else {
//		printf("Ingreso un tipo y/o tamaño incorrecto");
//	}
//}
void ej2() {
	int base;
	int potencia;
	printf("Ingrese base y potencia dejando un espacio entre cada numero: ");
	scanf("%d %d", &base, &potencia);
	if(base >= 1 && potencia >= 1) {
		int numeroF = base;
	for(int i = 1	; i < potencia; i++) {
		numeroF *= base;
	}
	printf("El numero final es %d", numeroF);
	}
	else {
		printf("Ambos numeros deben ser positivos y enteros");
	}
}
void ej3() {
	double radio;
	printf("Ingrese el valor del radio: ");
	scanf("%lf", &radio); // lf se usa para leer numeros con coma en los scanf

	double longitud= 2 * pi * radio;
	double area = pi * (radio * radio);
	double volumen = ((double) 4/3) * pi * radio * radio* radio;
		if(radio <= 0) {
		printf("Ingrese un numero valido");
	}
	else {
		printf("La longitud es %.2f\n El area es %.2f\n El volumen es %.2f\n",longitud, area, volumen);
	}

}

void ej4() {
	int aportes;
	int genero;
	int edad;
	printf("Digite sus años de aportes: ");
	scanf("%d", &aportes);
	printf("Ahora, si es hombre ingrese 1 y si es mujer ingrese 2: ");
	scanf("%d", &genero);
	printf("Ahora ingrese su edad: ");
	scanf("%d", &edad);
	if(genero == 1 && edad >= 65 && aportes >= 20) { // Usamos && para que se cumplan ambas condiciones que se indican
		printf("Usted es hombre, tiene %d años y %d años en aportes y tiene derecho a jubilarse", edad, aportes);
	}
	else if(genero == 2 && edad >= 60 && aportes >= 20) {
		printf("Usted es mujer, tiene %d años y %d años en aportes y tiene derecho a jubilarse", edad, aportes);
	}
	else {
		printf("Usted no tiene derecho a jubilarse");
	}
}

void ej5() {
	int cantHijos;
	int base;
	int adicional = 0;
	int total;
	printf("Ingrese la cantidad de hijos que tiene: ");
	scanf("%d",&cantHijos);
	int edades[cantHijos];
	for(int i= 1; i< cantHijos+1; i++) {
		printf("Ingrese la edad de su hijo numero %d: ", i);
		scanf("%d", &edades[i-1]);
	}
	if(cantHijos > 0 && cantHijos < 3) {
		base = cantHijos * 700;
		for(int i = 0; i< cantHijos; i++) {
			if(edades[i] > 5 && edades[i] < 19) {
				adicional += 1000;
			}
		}
	}
	else if(cantHijos > 2 && cantHijos < 6) {
		base = cantHijos * 800;
		for(int i = 0; i< cantHijos; i++) {
			if(edades[i] > 5 && edades[i] < 19) {
				adicional += 1000;
			}
		}
	}
	else if(cantHijos > 5) {
		base = cantHijos * 1200;
		for(int i = 0; i< cantHijos; i++) {
			if(edades[i] > 5 && edades[i] < 19) {
				adicional += 1000;
			}
		}
	}
//	for(int i= 0; i<cantHijos;i++) { Esto es en caso de querer imprimir las edades de los hijos
//		printf("%d\n",edades[i]);
//	}
	total = base + adicional;
	if(cantHijos <= 0) {
		printf("Ingrese una cantidad valida de hijos");
	}
	else {
		printf("Ustede tiene %d", total);
	}
}

	switch(decision) { // Se pone un switch para poder elegir que funcino ejecutar entre las que hay en un mismo programa
//		case 1:
//			ej1();
//			break;
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
	}
}
