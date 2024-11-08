#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

/*
 * 
 * 	Autor: Bryan Andreu Jiménez Rojas y Lenardo Marescutti Mariñas.
 * 	Curso: DAM_1
 *
*/ 

int main(){

	int n_palabras = 1;
	int n_lista = {n_palabras};
	char palabras[n_lista][20];

	printf("Cuantas palabras tiene la lista:\n");
	scanf("%d",&n_palabras);

	for(int i = 0;i < n_palabras;i++){

		printf("Dime una palabara\n");
		scanf("%s", palabras[i]);
	}
	
	for(int j = 0; j < n_palabras; j++){
		if(strcmp("a", palabras[j])){
			continue;
		}
		
		printf("%s", palabras[j]);
	}

	return 0;
}
