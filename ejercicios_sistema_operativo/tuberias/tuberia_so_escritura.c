/*
	para que este programa funcione hay que crear en el sistema de 
	archivos una tubería de sistema operativo. Un FIFO con nombre.
	En este caso la crearemos con el comando mknod.

	comando: mknod TUBERIA p
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	int tub;

	tub=open("./TUBERIA",O_WRONLY);
	char mensaje[20];

	strcpy(mensaje, "Hola mundo!!");

	write(tub,mensaje,strlen(mensaje)*sizeof(char));

	close(tub);
	return 0;
}
