#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	execl("/bin/ls","ls", "-lah", "--color=auto", NULL);
	return 0;
}