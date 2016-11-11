#include<signal.h>
#include<stdio.h>
#include<stdlib.h>

static void catch_function(int signo)
{
	puts("Interactive attention signal caught\n");
}

int main()
{
	if(signal(SIGINT,catch_function) == SIG_ERR)
	{
		fputs("An error occured while setting a signal\n",stderr);
		return EXIT_FAILURE;
	}


	puts("Raising the interactive attention signal\n");

	if(raise(SIGINT) != 0)
	{
		fputs("Error raising the signal.\n", stderr);
		return EXIT_FAILURE;
	}

	puts("Exiting.");
	return EXIT_SUCCESS;
}
