#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i=1;
	while (i < argc){
		printf("Hola %s\n",argv[i]);
		i++;
	}
	return 0;
}