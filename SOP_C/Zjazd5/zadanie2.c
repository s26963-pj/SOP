#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	pid_t child_pid;
	printf("PID glownego programu: %d\n", (int) getpid());
	child_pid = fork();
	if(child_pid != 0){
		printf("To jest proces macierzysty, a jego proces to: %d\n", (int) getpid());
		printf("PID procesu potomnego: %d\n", (int) child_pid);
	}
	else{
		printf("To jest proces potomny, a jego proces to: %d\n", (int) getpid());
	}
	return 0;
}
