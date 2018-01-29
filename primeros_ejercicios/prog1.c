#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	char saludo[12]="Hola Mundo.";
	printf("%s\n", saludo);
	sleep(15);
	return 0;
}