#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int status, exit_status;
	pid_t pid = fork();
	if(pid < 0)
		printf("ERROR! Nie mozna utworzyc nowego procesu\n");
	if(pid == 0){
		printf("Potomek (PID: %d) uspiony...\n", getpid());
		sleep(5);
		exit(0);
	}
	while(waitpid(pid, &status, WNOHANG) == 0){
		printf("Czekam na zakonczenie potomka...\n");
		sleep(1);
	}
	exit_status = WEXITSTATUS(status);
	printf("Potomek %d zakonczyl dzialanie zwracajac %d\n", pid, exit_status);
	return 0;
}

