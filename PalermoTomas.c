#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int seguir = 1; 


	
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
		printf("Hay %d alumnos, cada uno debe pagar %.2f pesos y el costo total es %d\n", alumnos, precioalumno, precio);
	}
	void ej2() {
		int base;
		int venta1;
		int venta2;
		int venta3;
		printf("Ingrese su sueldo base y los valores de las 3 ventas: ");
		scanf("%d %d %d %d", &base, &venta1, &venta2, &venta3);
		double comision = venta1 * 0.1 + venta2 * 0.1 + venta3 * 0.1;
		double total = comision + base;
		printf("La comision del vendedor es %.2f y el total es %.2f\n", comision, total);
	}
	void ej3() {
		int parcial1, parcial2, parcial3;
		double promedioparcial;
		int examenfinal;
		int trabajofinal;
		printf("Si desea saber su calificacion final ingrese lo siguiente.\n");
		printf("Las notas de los 3 parciales: ");
		scanf("%d %d %d", &parcial1, &parcial2, &parcial3);
		printf("Calificacion del examen final: ");
		scanf("%d", &examenfinal);
		printf("Calificacion del trabajo final: ");
		scanf("%d", &trabajofinal);
		promedioparcial = (parcial1 + parcial2 + parcial3) / 3; 
		double promedio = (promedioparcial * 0.55) + (examenfinal * 0.3) + (trabajofinal * 0.15);
		printf("Su promedio es %.2f\n", promedio);
	}
	void ej4() {
		int a;
		int b;
		printf("Elija los dos numeros para buscar los pares entre ellos (siendo el primero ingresado el mayor y el segundo ingresado el menor): ");
		scanf("%d %d", &a, &b);	
		for(int i= b; i <= a; i++) {
			if(i % 2 == 0) {
				printf("%d ", i);
			}
			
		}
		printf("\n");
	}
	void ej5() {
		printf("Digite los kilometros donde se encuentran los autos\n(siendo el primero el de mas kilometros y el segundo el de menos): ");
		int auto1;
		int auto2;
		scanf("%d %d", &auto1, &auto2);
		for(int i = auto2; i <= auto1; i++) {
			auto1--;
			auto2++;
		}
		double encuentro = (auto1 + auto2) / 2.0;
			printf("Los autos se encuentran en el km %.2f\n", encuentro);

	}
	
	while(seguir == 1) {
			int decision;
			
        	printf("Los programas a elegir son estos:\n1. Alumnos, viaje de estudios\n2. Ventas y comisiones\n3. Calificacion Final\n4. Numeros Pares\n5. Encuentro de autos\n");
			printf("Elija el programa a ejecutar: ");
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
			case 5:
				ej5();
				break;
			default:
				printf("No existe ese programa\n");
				break;
			
	}
		printf("\nDesea volver a ejecutar el programa (1/2): ");
    	scanf(" %d", &seguir); 
	}
	
	return 0;
}
