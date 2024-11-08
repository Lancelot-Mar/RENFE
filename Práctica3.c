#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define LIM 10	

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main(){
	int gestion_producto, i = 1, j = 1;
	int cantidad[LIM];
	char nombre_producto[LIM][20];
	// char cambio = 'S';
	// int aumento;
	
	printf("¿Cuantos productos quieres gestionar?\n");
	scanf(" %d", &gestion_producto);
	
	if(gestion_producto <= LIM){
		for (;i <= gestion_producto; i++){
			printf("Escriba el nombre del producto:");
			scanf("%s", nombre_producto[i]);

			printf("Escriba la cantidad de stock del producto:");
			scanf("%d", &cantidad[i]);
		}
		
		printf("\n");

		do{
			printf("Producto %d: %s - %d\n", j, nombre_producto[j], cantidad[j]);
			j++;
		}
		while(j <= gestion_producto);
		
		printf("\n");

/*
		while (cambio == 'S'){
			printf("¿Desea reabastecer algún producto? (S/N)\n");
			scanf("%c", &cambio);
		
			printf("Ingrese el nombre del producto:\n");
			scanf("%s", nombre_producto[i]);

			printf("Cantidad a añadir:\n");
			scanf("%d", &aumento);
			
			cantidad[i];
			//Cambiar este bucle.	
			printf("Ahora, el stock %s tiene un stock total de %d.\n", nombre_producto[i], cantidad[i]);
		}
*/

	}
	else{
		printf("Solo puedes gestionar un total del 10\n");
	}

	return EXIT_SUCCESS;
}
