#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

void gestor_senyal(int senyal){
	printf("He recibido la señal: %d\n", senyal);
}

int main(int argc, char const *argv[])
{
	signal( SIGUSR1, gestor_senyal );
	printf("PID: %d, saludaré cuando reciba una señal\n",getpid());
	pause();
	printf("Hola Mundo\n");

	return 0;
}