#include <stdio.h>
#include <signal.h>
#include <stdbool.h>

void gestor_alarm(int senyal){

	system("date");
	signal(SIGINT,SIG_DFL);

}

void gestor_sigint(int senyal){

	printf("Hola Mundo\n");

}


int main(int argc, char const *argv[])
{
	signal(SIGALRM,gestor_alarm);
	signal(SIGINT, gestor_sigint);
	sleep(1);
	signal(SIGINT, SIG_IGN);
	alarm(4);
	printf("Dentro de 4 segundos se imprimirá la hora\n");
	while(true);
	return 0;
}