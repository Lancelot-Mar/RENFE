#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define LIM 35
/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenoardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main() {
	char palabras[LIM][20] = {"Hola", "que", "tal", "como", "estas", "casa", "árbol", "perro", "gato", "auto", "bicicleta", "sol", "luna", "estrella", "montaña", "río", "mar", "tierra", "agua", "aire", "metal", "bosque", "flor", "lluvia", "trueno", "viento", "tormenta", "nieve", "campo", "ciudad", "puente", "edificio", "escalera","pintura", "escultura"};  // Array de palabras 
	
	int cantidad = 0; //Examen: Lista de palabras que tienen la letra e.
	int e[LIM], eg[LIM];

    	for (int j = 0; j < LIM; j++) { // Este bucle pasa por cada candena de carácteres del Array
        	// La condional cumple que si encontramos 'a' o 'A'
        	if(strchr(palabras[j], 'a') || strchr(palabras[j], 'A')){
            		continue; // Se saltará esa palabra y reiniciará el bucle
    		}
		else
		if(strchr(palabras[j], 'e') || strchr(palabras[j], 'E')){
                	cantidad++;
                }
		else
		if(strchr(palabras[j], 'g') || strchr(palabras[j], 'G')){
			e[j] = j;
		}
		else
		if((strchr(palabras[j], 'e') || strchr(palabras[j], 'E')) && (strchr(palabras[j], 'g') || strchr(palabras[j], 'G'))){
			eg[j] = j;
		}	
	}
	
	printf("Palabras sin la letra a\n");
	for(int x = 0; x < LIM; x++){
		printf("%s ", palabras[x]);
	}
	printf("Cantida de palabras con las letra e: %d\n", cantidad);
	
	printf("Palabras con la letra g\n");
	for(int y = 0; y < LIM; y++){
		printf("%s ", palabras[e[y]]);
	}

	for(int z = 0; z < LIM; z++){
		printf("%s ", palabras[eg[z]]);
	}

	
    return 0;
}

/* Cabe recalcar que en este programa estamos usando 
 * la librería "string.h" para poder 
 * usar la funcion "strchr()", encargada de buscar 
 * un carácter dentro de una cadena de carácteres
*/
