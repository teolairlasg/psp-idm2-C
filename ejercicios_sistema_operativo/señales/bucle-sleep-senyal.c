#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
	if(argc != 2){
		fprintf(stderr, "Error! hay que poner el pid\n");
		exit(-1);
	}
	pid_t pid = atoi(argv[1]);
	while(true){
		sleep(5);
		printf("Enviando señal...\n");
		kill(pid,SIGUSR1);
	}
	
	return 0;
}