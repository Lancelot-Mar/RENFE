#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

#define LIM 5
/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenoardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main() {
    char palabras[LIM][20] = {"Hola", "que", "tal", "como", "estas"};  // Array de palabras 

    printf("Palabras sin la letra 'a':\n");
    for (int j = 0; j < LIM; j++) {
        // Si encontramos 'a' o 'A' en la palabra, usamos continue para saltar a la siguiente
        if (strchr(palabras[j], 'a') || strchr(palabras[j], 'A')) {
            continue;
        }
        // Imprimimos la palabra solo si no contiene 'a' ni 'A'
        printf("%s\n", palabras[j]);
    }
    return 0;
}
