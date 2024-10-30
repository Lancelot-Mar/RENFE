#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define DIAS 7

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main(){
	char dia[7][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sábado", "domingo"};
	float temperatura[7] = {1, 2, 3, 4, 5 ,6 ,7};
	float promedio = 0, mayor = 0, ;
	char dma[10];
	char dme[10];

	for(int i = 0; i < DIAS; i++){
		printf("Escribe la temperatura del %s\n",dia[i]);
		scanf("%f", &temperatura[i]);
		promedio += temperatura[i];
		menor += temperatura[i];

		if(temperatura[i] > mayor){
			mayor = temperatura[i];
		} 
		else
		if(temperatura[i] < menor){
			menor = temperatura[i];
		}
	}

	promedio = promedio/DIAS;

	printf("Temperatura promedio de la semana:%f\n", promedio);
	printf("Temperatura máxima: %f°C el día %s\n·", mayor, dma);
	printf("Temperatura mínima: %f°C el día %s\n.", menor, dme);

	return EXIT_SUCCESS;
}
