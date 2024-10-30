#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main(){

	float temperatura[8] = {lunes,martes,miercoles,jueves,viernes,sabado,domingo};
	
	printf("Dime la temperatura del lunes: \n");
	scanf("%f\n", &lunes);
	
	printf("Dime la temperatura del martes: \n");
	scanf("%f\n", &martes);

	printf("Dime la temperatura del miercoles: \n");
	scanf("%f\n", &miercoles);

	printf("Dime la temperatura del jueves: \n");
	scanf("%f\n", &jueves);

	printf("Dime la temperatura del viernes: \n");
	scanf("%f\n", &viernes);

	printf("Dime la temperatura del sabado: \n");
	scanf("%f\n", &sabado);

	printf("Dime la temperatura del domingo: \n");
	scanf("%f\n", &domingo);

	return 0;
}
