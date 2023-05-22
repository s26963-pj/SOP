#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/errno.h>

void my_SIGINT(int);
void my_SIGQUIT(int);
void my_SIGKILL(int);

void my_SIGUSR1(int sig)
{
	printf("#### Otrzymano SIGUSR1\n");
}

int main()
{
	int a=1;
	printf("PID procesu: %d\n\n", (int) getpid());
	printf("Progam przechwyci sygnal i wykona akcje uzytkownika \n");
	
	if(signal(SIGQUIT,my_SIGQUIT) == SIG_ERR){
		perror("Funkcja signal ma problem z SIGQUIT");
		exit(EXIT_FAILURE);
	}
	if(signal(SIGINT,my_SIGINT) == SIG_ERR){
		perror("Funkcja signal ma problem z SIGINT");
		exit(EXIT_FAILURE);
	}
	if(signal(SIGUSR1, my_SIGUSR1) == SIG_ERR){
		perror("Funkcja signal ma problem z SIGUSR1");
		exit(EXIT_FAILURE);
	}
	if(pause() < 0){
		perror("ERROR: sygnal nie powoduje zakonczenia procesu");
		exit(EXIT_FAILURE);
	}

	return 0;
}

void my_SIGINT(int sig){
	printf("#### Otrzymano SIGINT\n");
}
void my_SIGQUIT(int sig){
	printf("#### Otrzymano SIGQUIT\n");
}
void my_SIGKILL(int sig){
	printf("#### Otrzymano SIGKILL\n");
}
void my_SIGSTOP(int sig){
	printf("#### Otrzymano SIGQUIT\n");
}
