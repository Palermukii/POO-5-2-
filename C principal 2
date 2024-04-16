#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int decision;

void ej9() {
int edadP = 50;
int edadH = 20;
while(edadP != edadH * 2) {
edadP++;
edadH++;
}
printf("El papa tendra el doble que el hijo en edad a los %d años y el hijo tendra %d años",edadP, edadH);
system("pause");
}


void ej10() {
int segundosIngresados;
int segundos;
int minutos;
int horas;
printf("Ingrese una cantidad de segundos: ");
scanf("%d", &segundosIngresados);

horas = segundosIngresados / 3600;
minutos = (segundosIngresados % 3600) / 60;
segundos = segundosIngresados % 60 ;

printf("Hay %d horas, %d minutos y %d segundos", horas, minutos, segundos);
system("pause");
}

void ej11() {
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
system("pause");
}

void ej12() {
int sueldoBase;
float venta1, venta2, venta3, sTotal;

printf("ingrese su sueldo base \n");
scanf("%d", &sueldoBase);
printf("Ingrese sus 3 ventas separadas por espacios\n");
scanf("%f %f %f", &venta1, &venta2, &venta3);
sTotal = sueldoBase + (0.10 * (venta1 + venta2 + venta3));
printf("su sueldo base es %d y su sueldo final es %2.f", sueldoBase, sTotal);
system("pause");
}

void ej13(){
     int compra;
     printf("Ingrese el valor de la compra: ");
     scanf("%d",&compra);
     float compraFinal = compra * 0.85;
     printf("El valor final de la compra es de %.2f",compraFinal);
     system("pause");
     
     
     }

void ej14(){
     int numero;
     printf("Digite su numero: ");
     scanf("%d",&numero);
     if(numero > 0) {
               printf("Su numero es %d ", numero);
               }
     else {
          numero = numero * -1;
          printf("Su numero es %d ", numero);
          }
          
          
          system("pause");
     }

void ej15() {
int mujeres;
int hombres;
printf("Ingrese la cantidad de mujeres y hombres que hay: ");
scanf("%d %d",&mujeres, &hombres);
int estudiantes = mujeres + hombres;
double porcentajeM = (mujeres * 100) / estudiantes;
double porcentajeH = (hombres * 100) / estudiantes;
printf("El porcentaje de mujeres es de %.2f",porcentajeM);
printf("El porcentaje de hombres es de %.2f",porcentajeH);
}

void ej16(){
     float pesos;
     float cambio;
     printf("Ingrese el valor del dolar: ");
     scanf("%d", &cambio);
     printf("Ahora ingrese la cantidad de pesos que desea convertir: ");
     scanf("%d", &pesos);
     float dolares = pesos / cambio;
     printf("Usted tiene %.2f dolares", dolares);
     system("pause");
     
     }

void ej17() {
     int genero;
     int edad;
     float peso;
     printf("Ingrese su genero (1 si es hombre, 2 si es mujer): ");
     scanf("%d", &genero);
     printf("Ahora ingrese su edad y peso: ");
     scanf("%d %d",&edad, &peso);
     float FCM;
                 
                 
     if(genero == 1) {
               FCM = ((210 - (0.5 * edad)) - peso * 0.01) + 4;
               printf("Su frecuencia cardiaca es %.2f", FCM);
               }
     else if(genero == 2) {
        FCM =  ((210 - (0.5 * edad)) - (peso * 0.01));
                       printf("Su frecuencia cardiaca es %.2f", FCM);
          }
     else {
          printf("Ignreso un numero equivocado");
          }
     system("pause");
     }



printf("Elija el programa que desea ejecutar: ");
scanf("%d", &decision);
switch(decision) {
default :
printf("Elegiste mal");
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
 case 13:
 ej13();
 break;
case 14:
ej14();
break;
case 15:
ej15();
break;
case 16:
ej16();
break;
case 17:
ej17();
break;
}


}

