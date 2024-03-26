#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int decision;
	printf("Elija el programa a ejecutar: ");
	scanf("%d", &decision);
	void ej1() {
		int alumnos;
		int precio;
		double precioalumno;
		printf("Digite la cantidad de alumnos: ");
		scanf("%d", &alumnos);
		if(alumnos > 99) {
			precioalumno = 500;
			precio = alumnos * precioalumno;
		}
		else if(alumnos > 49 && alumnos < 100) {
			precioalumno = 400;
			precio = alumnos * precioalumno;
		}
		else if(alumnos > 29 && alumnos < 50) {
			precioalumno = 300;
			precio = alumnos * precioalumno;
		}
		else {
			precio = 6000;
			precioalumno = 6000.00 / alumnos;
			}
		printf("Hay %d alumnos, cada uno debe pagar %.2f pesos y el costo total es %d", alumnos, precioalumno, precio);
	}
	void ej2() {
		
	}
	void ej3() {
		int promedioparcial;
		int examenfinal;
		int trabajofinal;
		printf("Si desea saber su calificacion final ingrese lo siguiente.\n");
		printf("Promedio de las notas de los 3 parciales: ");
		scanf("%d", &promedioparcial);
		printf("Calificacion del examen final: ");
		scanf("%d", &examenfinal);
		printf("Calificacion del trabajo final: ");
		scanf("%d", &trabajofinal);
		double promedio = (promedioparcial * 0.55) + (examenfinal * 0.3) + (trabajofinal * 0.15);
		printf("Su promedio es %.2f", promedio);
	}
	
	
	
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
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
