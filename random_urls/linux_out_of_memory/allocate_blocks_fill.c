#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MEGABYTE 1024*1024

int main()
{
    void *myblock = NULL;

    int count = 0;

    while(1)
    {
        myblock = (void*)malloc(MEGABYTE);
        if(!myblock)
        {
            break;
        }

        memset(myblock,1,MEGABYTE);
        printf("Currently allocateing %d MB \n",++count);

    }

    exit(0);
}
