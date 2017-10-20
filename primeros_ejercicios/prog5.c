#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char* saludo;
	saludo = (char*) malloc(200 * sizeof(char));
	saludo = strcat(saludo, "Hola ");
	int i=1;
	while (i<argc)
	{
		saludo = strcat(saludo, argv[i]);
		saludo = strcat(saludo, ", ");
		i++;
	}
	printf("%s\n", saludo);
	free(saludo);
	return 0;
}