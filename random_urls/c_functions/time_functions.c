#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    time_t current_time;
    char* c_time_string;

    //get current time
    current_time = time(NULL);

    if(current_time == ((time_t)-1))
    {
        (void)fprintf(stderr,"Failure to obtain the current time\n");
        exit(EXIT_FAILURE);
    }

    //convert to local time format
    c_time_string = ctime(&current_time);

    if(c_time_string == NULL)
    {
        (void)fprintf(stderr,"Failed to convert the time\n");
        exit(EXIT_FAILURE);
    }

    //print time
    (void)printf("Current time is %s\n", c_time_string);
    exit(EXIT_SUCCESS);
}
