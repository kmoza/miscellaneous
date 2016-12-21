#include<stdio.h>
int main(void)
{
	int i = 3;
	int j;

	j = ++i * ++i * ++i;
	printf("%d %d", i, j);
	return 0;
}
