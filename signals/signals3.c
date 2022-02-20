#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

void handle_sigtstp(int sig)
{
	printf("stop not allowed");
}

int main(int argc, char* argv[])
{
	struct sigaction sa;
	sa.sa_handler = &handle_sigtstp;
	sa.sa_flags = SA_RESTART;
	sigaction(SIGTSTP, &sa, NULL);
	int x;
	printf("Input number: ");
	scanf("%d", &x);
	printf("Result %d * 5 = %d\n", x, x * 5);
	return 0;
}
