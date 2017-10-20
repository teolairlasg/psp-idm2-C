#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Escribe tu nombre\n");

	char nombre[10];

	scanf("%s",nombre);

	printf("Hola %s\n", nombre);
	return 0;
}