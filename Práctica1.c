#include <stdio.h>
#include <stdlib.h>

#define DIAS 7

/*
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
*/ 

// Vamos a crear un programa que permita almacenar y analizar las temperaturas de una semana completa.
int main(){

	// Creamos las variables que vamos a usar para cada parte del programa.
	char dia[7][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sábado", "domingo"};
	float temperatura[7] = {1, 2, 3, 4, 5 ,6 ,7};
	float promedio = 0, mayor = -280, menor = 10000 ;
	int dma, dme, contador = 0, j = 1;

	//Creamos un bucle que vaya pasando día por día preguntando y guardando las temperaturas de todos los días, usando las variables dia y temperatura.
	for(int i = 0; i < DIAS; i++){
		printf("Escribe la temperatura del %s\n", dia[i]);
		scanf("%f", &temperatura[i]);

		// La variable promedio la usaremos en un futuro, pero necesitamos que en cada vuelta del bucle, se vaya incrementando con los valores de la temperatura de cada día.
		promedio += temperatura[i];
		
		// Creamos una condicional que determine la temperatura máxima y mínima de la semana, guardandolas en las variables mayor, menor, dma y dme.
		if(temperatura[i] > mayor){
			mayor = temperatura[i];
			dma = i;
		} 
		else
		if(temperatura[i] < menor){
			menor = temperatura[i];
			dme = i;
		}
	}

	// Con el promedio que hemos estado calculando en el bucle, lo partimos por la cantidad de días de la semana.
	promedio = promedio/DIAS;

	//Hacemos un nuevo bucle para determinar los números de días superiores al promedio anteriormente calculado.
	do{
		//Y creamos una condicional que vaya pasando día por día comparandolos con el promedio, añandiendolo a la variable contador.
		if(temperatura[j]>promedio){
			contador++;
			j++;
		}
		else{
			j++;
		}
	}
	while(j<DIAS);

	printf("Temperatura promedio de la semana:%.2fºC.\n", promedio);
	printf("Temperatura máxima: %.2f°C el día %s\n", mayor, dia[dma]);
	printf("Temperatura mínima: %.2f°C el día %s\n", menor, dia[dme]);
	printf("Número de días con temperaturas superiores al promedio: %d\n", contador);
	printf("Días con temperaturas por debajo del promedio:\n");
	
	//Por último, creamos un nuevo bucle que imprima por pantalla los días de la semana que tengan temperaturas inferiores al promedio
	for(int k = 0; k < DIAS; k++){
		// Cada día lo comparará con el promedio y si es inferior al promedio total de la semana, lo imprimirá.
		if(temperatura[k]<promedio){
			printf("%s: %.2fºC\n", dia[k], temperatura[k]);
		}
	}

	return EXIT_SUCCESS;
}
