#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define LIM 10
#define MAX 20

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main(){
	int gestion_producto, i = 1, j = 1, k, l = 1, m = 1;
	int cantidad[LIM], aumento;
	char nombre_producto[LIM][MAX], nomproreab[LIM][MAX], buspro[LIM][MAX];
	char reabastecer[4], buscar[4];
	
	printf("¿Cuantos productos quieres gestionar?\n");
	scanf(" %d", &gestion_producto);
	
	if(gestion_producto <= LIM){
		for (;i <= gestion_producto; i++){
			printf("Escriba el nombre del producto: ");
			scanf("%s", nombre_producto[i]);

			printf("Escriba la cantidad de stock del producto: ");
			scanf("%d", &cantidad[i]);
		}
		
		printf("\n");

		do{
			printf("Producto %d: %s - %d\n", j, nombre_producto[j], cantidad[j]);
			j++;
		}
		while(j <= gestion_producto);
		
		printf("\n");
		
		printf("¿Desea reabastecer algún producto (Si/No)?\n");
		scanf("%s", reabastecer);
		
		while(strcmp(reabastecer, "Si") == 0){
			printf("Ingrese el producto: ");
			scanf("%s", nomproreab[1]);

			printf("Número de stocks a añadir: ");
			scanf("%d", &aumento);

			for(k = 1; k <= gestion_producto; k++){
				if(strcmp(nomproreab[1], nombre_producto[k]) == 0){
					cantidad[k] += aumento;
					printf("Ahora el producto %s tiene un total de %d stocks.\n", nombre_producto[k], cantidad[k]);
				}
			}

			printf("¿Desea reabastecer otro producto?\n");
			scanf("%s", reabastecer);
		}
		
		printf("Productos en baja existencia\n");
		for(; l <= gestion_producto; l++){
			if(cantidad[l] < 5){
				printf("%s - %d\n", nombre_producto[l], cantidad[l]);
			}
		}

		printf("¿Desea buscar algún producto (Si/No)?\n");
		scanf("%s", buscar);

		while(strcmp(buscar, "Si") == 0){
			printf("Ingrese el nombre del producto: ");
			scanf("%s", buspro[1]);

			for(m = 1; m <= gestion_producto; m++){
				if(strcmp(buspro[1], nombre_producto[m]) == 0){
					printf("Tiene %d stock/s.\n", cantidad[m]);
				}
			}

			printf("¿Desea buscar otro producto?");
			scanf("%s", buscar);
		}
	}
	else{
		printf("Solo puedes gestionar un total del 10\n");
	}

	return EXIT_SUCCESS;
}
