#include <stdio.h>
#include <stdlib.h>

int main() {
	int decision;
	
	
	void ej1() {
	int num1 = 0;
	int num2 = num1 + 1;
	int num3 = num1 + 2;
	while(num1 + num2 + num3 != 87) {
		num1++;
		num2++;
		num3++;
	}
	printf("Los numeros para que la suma de 87 son %d, %d y %d\n", num1, num2, num3);
	system("pause");
	}
    	
	void ej2() {
		int num1, num2, num3;
		printf("Digite los 3 numeros para sacar el promedio: ");
		scanf("%d %d %d", &num1, &num2, &num3);
		double promedio = (num1 + num2 + num3) / 3;
		printf("El promedio es %.2f\n", promedio);
		system("pause");
	}
	
	void ej3() {
		int num;
		printf("Digite su numero positivo: ");
		scanf("%d", &num);
		if(num % 2 == 0) {
			printf("El numero es par");
		}
		else {
			printf("El numero es impar");
		}
		printf("\n");
		system("pause");
	}
	
	void ej4() {
		int nota1, nota2, nota3, nota4, tarea;
		printf("Digite sus notas en orden poniendo como ultimo la nota de tarea: ");
		scanf("%d %d %d %d %d", &nota1, &nota2, &nota3, &nota4, &tarea);
		double promedio = (nota1 + nota2 + nota3 + nota4 + tarea) / 5.0;
		if(promedio >= 6) {
			printf("El alumno esta aprobado con promedio de %.2f", promedio);
		}
		else {
			printf("El alumno no esta aprobado y tiene promedio de %.2f", promedio);
		}
	    printf("\n");
        system("pause");
    }
	
	void ej5() {
	int nota;
	printf("Ingrese su nota: ");
	scanf("%d", &nota);
	if(nota >= 6) {
		printf("Aprobado.");
		if(nota >= 8) {
			printf(" Felicitaciones!");
		}
	}
	else {
		printf("Desaprobado.");
		if(nota == 1) {
		 printf("Reprobado, debes esforzarte mas");
		 }
	}
	printf("\n");
    system("pause");
	}
	
	void ej6() {
		int sueldo;
		double impuesto;
		printf("Ingrese su sueldo: ");
		scanf("%d", &sueldo);
		if(sueldo <= 202) {
			impuesto = 0;
		}
		else if(sueldo <= 607) {
			impuesto = (double)sueldo * 0.05;
		}
		else if(sueldo <= 1013) {
			impuesto = sueldo * 0.1;
		}
		else if(sueldo <= 1418) {
			impuesto = sueldo * 0.15;
		}
		else {
			impuesto = sueldo * 0.25;
		}
		printf("El sueldo es de $%d y el impuesto de $%.2f\n", sueldo, impuesto);
		system("pause");
	}
	
	void ej7() {
		int horas;
		int minutos;
		printf("Ingrese la hora: ");
		scanf("%d %d", &horas, &minutos);
		
		if(horas < 13) {
			if(horas == 0) {
				printf("%d:%d AM", horas + 12, minutos);
			}
			else {
			printf("%d:%d AM", horas, minutos);
			}
		}
 		if(horas > 12) {
			if(horas == 12) {
				printf("%d:%d PM", horas, minutos);
		}
			else {
				printf("%d:%d PM ", horas - 12, minutos);
		}
		}
       	 printf("\n");
         system("pause");
	}
	
	void ej8() {
		int capital;
		double tasa_interes = 0.02;
		printf("Ingrese capital inicial: ");
		scanf("%d", &capital);
		double monto_final = capital * (1 + tasa_interes);
		printf("Su monto final es de %.2f\n", monto_final);
		system("pause");
	}
	
	printf("Elija el programa que desea ejecutar: ");
	scanf("%d", &decision);
	switch(decision) {
		default : 
			printf("Elegiste mal"); 
			break;
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
	}
	
}
