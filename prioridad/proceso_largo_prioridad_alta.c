#include <stdio.h>
#include <sys/time.h>
#include <sys/resource.h>

int main(int argc, char const *argv[])
{

	long i = 0;
	for (i=0;i<12345678901L;i++);

	printf("Soy el proceso con prioridad alta. Ya he acabado\n");

	return 0;
}