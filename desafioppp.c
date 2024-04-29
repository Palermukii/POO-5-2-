#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	char *ppp[] = {"piedra", "papel", "tijera"};
	int maquina;
	int eleccion;
	int rondaj = 0;
	int rondam = 0;
	int vueltaj = 0;
	int vueltam = 0;
	for(int i = 1; rondaj < 3 && rondam < 3;i++){
		for(int j = 1; vueltaj < 2 && vueltam < 2; j++){
			maquina = rand() % 3 + 1;
			printf("Que desea jugar?\n");
			printf("1-Piedra \t 2-Papel \t 3-Tijera\n");
			printf("\n");
			scanf("%d",&eleccion);
			printf("\n");
			printf("El jugador eligio %s\n",ppp[eleccion - 1]);
			printf("La maquina eligio %s\n",ppp[maquina - 1]);
			printf("\n");
			if(eleccion == 1 && maquina == 3 || eleccion == 2 && maquina == 1 || eleccion == 3 && maquina == 2) { // Gana jugador
            puts("GANO EL JUGADOR LA VUELTA");	
            vueltaj++;
			}
			else if(maquina == 1 && eleccion == 3 || maquina == 2 && eleccion == 1 || maquina == 3 && eleccion == 2) { // Gana maquina
            puts("GANO LA MAQUINA LA VUELTA");
            vueltam++;
			}
			else if(maquina == eleccion) { // empate
				j--;
				printf("HA SIDO EMPATE\n");
			}
			printf("\n");
		}
		if(vueltaj > vueltam){
			rondaj++;
			puts("GANO EL JUGADOR LA RONDA");
				printf("\n");
		}
		else{
			rondam++;
			puts("GANO LA MAQUINA LA RONDA");
				printf("\n");
		}
		vueltaj = 0;
		vueltam = 0;
	}
	if(rondaj > rondam){
		puts("GANO EL JUGADOR LA PARTIDA");
		puts("AGUANTE TALLEREEEEEEEEEEEEEEEEES");
	}
	else{
		puts("GANO LA MAQUINA LA PARTIDA");
		puts("MAL AHI");
	}
return 0;
}
