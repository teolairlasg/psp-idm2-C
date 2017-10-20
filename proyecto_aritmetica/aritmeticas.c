#include "aritmeticas.h"
#include <stdio.h>

float suma(float a, float b){
	return a+b;
}

float resta(float a, float b){
	return a-b;
}

float divide(float a, float b){
	if (b == 0)
		fprintf(stderr, "Error, no se puede dividir por 0\n");
	return a/b;
}

float multiplica(float a, float b){
	return a*b;
}