#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LIM 20

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main(){
	int inventario[2][3][4][5][10];

	inventario[1][3][2][1][6] = 125;
	inventario[2][1][3][5][9] = 80;
	inventario[2][2][1][2][3] = 90;
	inventario[1][1][1][4][7] = 180;
	inventario[2][3][4][3][8] = 50;

	printf("Hay %d unidades.\n", inventario[1][3][2][1][6]);
	printf("Hay %d unidades.\n", inventario[2][1][3][5][9]);
	printf("Hay %d unidades.\n", inventario[2][2][1][2][3]);
	printf("Hay %d unidades.\n", inventario[1][1][1][4][7]);
	printf("Hay %d unidades.\n", inventario[2][3][4][3][8]);

	return EXIT_SUCCESS;
}
