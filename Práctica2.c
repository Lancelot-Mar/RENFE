#include <stdio.h>
#include <stdlib.h>

#define MINIMO 5

/*
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
*/ 


int main(){
	
	int cantidad_estudiantes = 1;
	float nota[cantidad_estudiantes];
	float promedio = 0, suspenso = 10, aprobados = 0;
	int cantidad_suspensos = 0, cantidad_aprobados = 0,npromedio = 0, nsuspenso = 0, naprobados = 0;

	printf("Ingrese la cantidad de estudiantes: \n");
	scanf(" %d", &cantidad_estudiantes);

	for(int i = 1; i <= cantidad_estudiantes; i++){
		printf("Escribe la nota del estudiante:\n");
		scanf(" %f", &nota[i]); //guardamos el valor de las notas

		promedio += nota[i]; //sumamos las notas entre si
		
		if(nota[i] < MINIMO){
			cantidad_suspensos++; //si el numero es inferior a MINIMO suma 1
		} 
		else
		if(nota[i] >= MINIMO){ //Repetimos lo mismo pero para el numero mas grande
			cantidad_aprobados++;
		}

		if(nota[i] > aprobados){
			aprobados = nota[i];
			naprobados = i; 
		}
		else
		if(nota[i] < suspenso){
			suspenso = nota[i];
			nsuspenso = i; //guardamos el numero de posicion del numero mas pequeño
		}
	}

	promedio = promedio/cantidad_estudiantes; //dividimos la variable promedio por la cantidad de estudiantes
	
	printf("Promedio de notas:%.2f\n", promedio);
	printf("Número de estudiantes aprobados:%d\n", cantidad_aprobados);
	printf("Número de estudiantes suspendidos:%d\n", cantidad_suspensos);
	printf("Nota máxima: %.2f (Estudiante en la posición %d)\n", aprobados, naprobados);
	printf("Mota minima: %.2f (Estudiante en la posición %d)\n", suspenso, nsuspenso);

	for(int j = 1; j <= cantidad_estudiantes; j++){
		if(nota[j]>promedio){
			npromedio = j;
			printf("Estudiante en la posición %d: %.2f\n",npromedio, nota[j]);
		}
	}

	return EXIT_SUCCESS;
}
