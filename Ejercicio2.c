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
    int n_palabras = 5; //Cantidad de palabras en el array
    char palabras[n_palabras][20] = {"Hola","que","tal","como","estas"};  // Array de palabras 

    //printf("¿Cuántas palabras tiene la lista?\n");
    //scanf("%d", &n_palabras); Para hacer que el tamaño del array sea dinamico
	
    //for (int i = 0; i < n_palabras; i++) {
    //    printf("Dime una palabra:\n");
    //    scanf("%s", palabras[i]);
    //}

    //Creamos un bucle que vaya palabra por palabra guardando las palabras que no contengan el valor a,A.
    printf("Palabras sin la letra 'a':\n");
    for (int j = 0; j < n_palabras; j++) {
	// saltamos las palabras que contengan lo siguiente:
        if (strcmp(palabras[j], "a") == 0 || strcmp(palabras[j], "A") == 0) { 
		continue;
        }
	// si no tiewnen ese valor procerderemos a imprimirlas poor pantalla
	else{
		printf("%s\n", palabras[j]);
    	}
    }
    return 0;
}
