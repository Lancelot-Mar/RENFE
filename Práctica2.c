#include <stdio.h>
#include <stdlib.h>

#define NOTA 11
#define MINIMO 5

/*
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
*/ 


int main(){
	
	int cantidad_estudiantes[];
	float nota[cantidad_estudiantes] = {};
	float promedio = 0, suspenso = -280, aprobados = 10000, naprobados = 0, nsuspensos = 0 ;
	int contador = 0, j = 1, cantidad_suspenso = 0, cantidad_aprobados = 0, nposicion = 0;

	printf("Ingrese la cantidad de estudiantes: \n");
	scanf("%d\n" cantidad_estudiantes);

	for(int i = 0; i < NOTA; i++){
		printf("Escribe la nota del estudiante\n");
		scanf("%f", &nota[i]);

		promedio += nota[i];
		
		if(nota[i] < MINIMO){
			cantidad_suspensos += i;
			suspenso = nota[i];
			nsuspenso = i;
			nposicion = suspenso
		} 
		else
		if(nota[i] > MINIMO){
			cantidad_aprobados += i;
			aprobado = nota[i];
			naprobados = i
			nposicion = aprobado
		}
		else

	}

	promedio = promedio/cantidad_estudiantes;
	
	do{
		if(temperatura[j]>promedio){
			contador++;
			j++;
		}
		else{
			j++;
		}
	}
	while(j<DIAS);

	printf("Promedio de notas:%.2f\n", promedio);
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
