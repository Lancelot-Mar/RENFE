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
	char dia[7][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sábado", "domingo"};
	float temperatura[7] = {1, 2, 3, 4, 5 ,6 ,7};

	for(int i = 0; i < 7; i++){
			printf("Escribe la temperatura del %s\n",dia[i]);
			scanf("%f", &temperatura[i]);
	}

	return 0;
}
