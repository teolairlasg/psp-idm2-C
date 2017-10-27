#include <stdio.h>
#include <signal.h>
#include <stdbool.h>

void gestor_alarm(int senyal){

	system("date");

}


int main(int argc, char const *argv[])
{
	signal(SIGALRM,gestor_alarm);
	signal(SIGINT, gestor_alarm);
	alarm(4);
	printf("Dentro de 4 segundos se imprimirá la hora\n");
	while(true);
	return 0;
}