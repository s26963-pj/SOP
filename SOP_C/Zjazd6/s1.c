#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/errno.h>

void my_SIGUSR1(int);

int main()
{
	printf("PID procesu to: %d \n", (int) getpid());
	pid_t child_pid;
	child_pid = fork();
	printf("PID procesu potomnego: %d\n\n", (int)child_pid);
	printf("Sygnal SIGQUIT wykona sie standardowo\n");
	printf("Sygnal SIGINT zostanie zignorowany\n");
	printf("Sygnal USR1 zostanie zignorowany\n");
	if(signal(SIGQUIT,SIG_DFL) == SIG_ERR){
		printf("Funkcja signal ma problem z SIGQUIT\n");
	}
	if(signal(SIGINT,SIG_IGN) == SIG_ERR){
		printf("Funkcja signal ma problem z SIGINT\n");
	}
	if(signal(SIGUSR1,my_SIGUSR1) == SIG_ERR){
		printf("Funkcja signal ma problem z SIGUSR1\n");
	}
	if(pause() < 0){
		perror("ERROR: sygnal nie powoduje zakonczenia procesu\n");
		exit(EXIT_FAILURE);
	}
	
	return 0;
}

void my_SIGUSR1(int sig)
{
	printf("%d Otrzymal sygnal SIGUSR1\n", (int)getpid());
}
