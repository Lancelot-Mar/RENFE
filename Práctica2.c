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
	float promedio = 0, suspenso = 10, aprobados = -10, naprobados = 0, nsuspensos = 0 ;
	int contador = 0, j = 1, cantidad_suspenso = 0, cantidad_aprobados = 0, nposicion_aprobado = 0, nposicion_suspenso = 0;

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
			nposicion_suspenso = suspenso
		} 
		else
		if(nota[i] > MINIMO){
			cantidad_aprobados += i;
			aprobado = nota[i];
			naprobados = i
			nposicion_aprobado = aprobado
		}
		else

	}

	promedio = promedio/cantidad_estudiantes;
	
	
	printf("Promedio de notas:%.2f\n", promedio);
	printf("Numero de Estudiantes aprobados %d\n",naprobado);
	printf("Numero de Estudiantes suspendidos %d\n",nsuspenso);
	printf("Numero de Estudiantes aprobados %d %.1f\n",nposicion_aprobado);
	printf("Numero de Estudiantes aprobados %d %.1f\n",nposicion_suspenso);

	for(int k = 0; k < DIAS; k++){
		if(nota[k]<promedio){
			printf("%: %.2f\n",, nota[k]);
		}
	}

	
	return EXIT_SUCCESS;
}
