#include <stdio.h>
#include <signal.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>	
#include <stdlib.h>

void gestor(int senyal){

	printf("He recibido una señal\n");

}


int main(int argc, char const *argv[])
{
	pid_t pid;


	pid = fork();
	switch(pid){
		case -1:  //Erro en el fork
			perror("Error en el fork");
			exit(-1);

			break;
		case 0: //Hijo, asocia la señal a la función gestor 
				//y espera la recepción de una señal.
			signal(SIGUSR1,gestor);
			pause();
			break;
		default: //Padre envía la señal y espera la finalización del hijo
			sleep(1);
			kill(pid, SIGUSR1);
			wait(NULL);
			break;
	}
	return 0;
}