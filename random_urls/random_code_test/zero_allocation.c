#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *alloc_ptr = malloc(0);
	if (alloc_ptr == NULL)
	{
		printf("Received null pointer on zero byte allocation\n");
	}
	else
	{
		printf("Memory allocated of zero byte\n");
		printf("Lets try to access the zero byte allocated memory\n");
		char temp = *alloc_ptr;
	}
}