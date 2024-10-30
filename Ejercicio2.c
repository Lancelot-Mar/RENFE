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

	char dia[8][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sábado", "domingo"};

	float temperatura[8] = {1, 2, 3, 4, 5 ,6 ,7};

	for(int i = 0;i < 8; i++){
			printf("Escribe la temperatura del %s\n",dia[i]);
		
			for(int j = 0; j > 8; j++){
				scanf("%f", &temperatura[j]);
		}
	}

	return 0;
}
