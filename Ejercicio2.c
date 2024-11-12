#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenoardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main() {
    int n_palabras = 8;
    char palabras[n_palabras][20] = {"Hola","que","tal"};  // Array de palabras de tamaño dinámico

    printf("¿Cuántas palabras tiene la lista?\n");
    scanf("%d", &n_palabras);

    for (int i = 0; i < n_palabras; i++) {
        printf("Dime una palabra:\n");
        scanf("%s", palabras[i]);
    }

    printf("Palabras sin la letra 'a':\n");
    for (int j = 0; j < n_palabras; j++) {
        if (strcmp(palabras[j], "a") == 0 || strcmp(palabras[j], "A") == 0) { 
		continue;
        }
	else{
		printf("%s\n", palabras[j]);
    	}
    }
    return 0;
}
