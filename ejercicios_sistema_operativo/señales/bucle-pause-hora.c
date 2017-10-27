#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdbool.h>

void gestor_senyal(int senyal){
	if(senyal == SIGUSR1){
		printf("se ha enviado SIGUSR1\n");
	}else if(senyal == SIGINT){
		printf("se ha pulsado Ctrl-c\n");
	}
	system("date");
}

int main(int argc, char const *argv[])
{
	printf("%d\n", getpid());
	signal(SIGUSR1, gestor_senyal);
	signal(SIGINT, gestor_senyal);
	while(true){
		pause();
	}
	return 0;
}