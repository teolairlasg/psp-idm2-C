#include <stdio.h>
#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	pid_t pid = atoi(argv[1]);
	kill(pid,10);
	return 0;
}