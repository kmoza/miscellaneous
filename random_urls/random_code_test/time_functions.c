#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	time_t current_time;
	char* c_time_string;

	/*Obtain current time as seconds elapsed since the epoch*/
	current_time = time(NULL);

	if(current_time == ((time_t)-1))
	{
		(void) fprintf(stderr, "Failure to compute the current time.");
		return EXIT_FAILURE;
	}

	/*convert to local time format*/
	c_time_string = ctime(&current_time);

	if(c_time_string == NULL)
	{
		(void) fprintf(stderr, "Failure to convert the current time");
		return EXIT_FAILURE;
	}

	/* print to stdout*/

	(void) printf("current time is %s", c_time_string);
	return EXIT_SUCCESS;
}

