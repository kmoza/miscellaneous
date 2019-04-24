#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *array = malloc(10*sizeof(int));

    if(NULL == array)
    {
        fprintf(stderr,"malloc failed\n");
        return -1;
    }
    return 0;
}
