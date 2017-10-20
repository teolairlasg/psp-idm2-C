#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

#define N_HIJOS 10

int main(int argc, char const *argv[])
{
	int tub[2];
	pipe(tub);
	
	int i;
	for(i=0;i<N_HIJOS;i++){
		if(fork()==0){
			pid_t pid = getpid();
			write(tub[1],&pid,sizeof(pid_t));
			return 0;
		}
	}
	for(i=0;i<N_HIJOS;i++){
		pid_t pid_hijo;
		read(tub[0],&pid_hijo,sizeof(pid_t));
		fprintf(stdout, "Leyendo del hijo.. %d\n", pid_hijo);
	}
	return 0;
}