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
	// Creamos las variables que estarán dentro del Array "Inventario".
	int continente = 2;
	int sede = 3;
	int categoría = 4;
	int modelo = 5;
	int lote = 10;
	
	//El array inentario contendrá las variables asiganadas con anterioridad.
	int inventario[continente][sede][categoría][modelo][lote];

	// AL tener el array con las variables, establecemos combinaciones con resultados determinados.
	inventario[1][3][2][1][6] = 125;
	inventario[2][1][3][5][9] = 80;
	inventario[2][2][1][2][3] = 90;
	inventario[1][1][1][4][7] = 180;
	inventario[2][3][4][3][8] = 50;
	
	//Los imprimimos por pantalla
	printf("Hay %d unidades.\n", inventario[1][3][2][1][6]);
	printf("Hay %d unidades.\n", inventario[2][1][3][5][9]);
	printf("Hay %d unidades.\n", inventario[2][2][1][2][3]);
	printf("Hay %d unidades.\n", inventario[1][1][1][4][7]);
	printf("Hay %d unidades.\n", inventario[2][3][4][3][8]);

	return EXIT_SUCCESS;
}
