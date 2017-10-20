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
			printf("El hijo lee del pipe...\n");
			char mensaje_leido[20];
			read(tub[0],mensaje_leido,sizeof(mensaje_leido));
			printf("Mensaje: %s\n", mensaje_leido);
			break;
		default: //Proceso padre
			printf("El padre escribe en el pipe...\n");
			sleep(5);
			write(tub[1], "Hola hijo!", 11*sizeof(char));
			wait(NULL);
	}
	return 0;
}