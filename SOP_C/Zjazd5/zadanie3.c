#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	printf("Jestes w katalogu: \n");
	execl ("/bin/pwd", "pwd", (char *)0);
	perror ("Blad uruchamiania pwd");
	return 0;
}
