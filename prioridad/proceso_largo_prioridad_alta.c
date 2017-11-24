#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main(int argc, char const *argv[])
{
	int prioridad = getpriority(PRIO_PROCESS,getpid());

	printf("Prioridad: %d\n",prioridad);

	setpriority(PRIO_PROCESS,getpid(),10);

	prioridad = getpriority(PRIO_PROCESS,getpid());

	printf("Prioridad: %d\n",prioridad);

	setpriority(PRIO_PROCESS,getpid(),5);

	prioridad = getpriority(PRIO_PROCESS,getpid());

	printf("Prioridad: %d\n",prioridad);

	setpriority(PRIO_PROCESS,getpid(),-1);

	prioridad = getpriority(PRIO_PROCESS,getpid());

	printf("Prioridad: %d\n",prioridad);

	return 0;
}