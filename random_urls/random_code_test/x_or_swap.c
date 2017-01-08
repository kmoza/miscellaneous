#include<stdio.h>

void xorswap(int *x, int *y)
{
	if( x!= y)
	{
		*x = *x ^ *y;
		*y = *x ^ *y;
		*x = *x ^ *y;
	}
}

int main()
{
	int x = 10;
	int y = 5;

	xorswap(&x, &y);
	printf("x and y after swap x = %d and y = %d", x, y);
	return 0;
}
