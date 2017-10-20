#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	int tub[2];
	pipe(tub);
	pid_t pid;

	pid = fork();

	switch(pid){
		case -1:
			fprintf(stderr, "Error en el fork\n");
			exit(-1);
			break;
		case 0: //Proceso hijo
			printf("El hijo escribe en el pipe...\n");
			write(tub[1], "Hola padre!", 11*sizeof(char));
			break;
		default: //Proceso padre
			wait(NULL);
			printf("El padre lee del pipe...\n");
			char mensaje_leido[20];
			read(tub[0],mensaje_leido,sizeof(mensaje_leido));
			printf("Mensaje: %s\n", mensaje_leido);
	}
	return 0;
}