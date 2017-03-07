#include<stdio.h>
#include<stdlib.h>

void clrscr()
{
	printf("\x1b[2J");
}

char getch()
{
	char c;
	system("stty raw");
	system("stty -echo");
	c = getchar();
	system("stty cooked");
	system("stty echo");
	return c;
}

int main()
{
	printf("\x1b[34m");
	clrscr();
	printf("\x1b[47m");
	printf("Hello, World!\n");
	getch();
	printf("\x1b[0m");
	return 0;
}