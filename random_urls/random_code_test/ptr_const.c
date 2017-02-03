#include<stdio.h>

void main()
{
	char a[10] = "dilbert";

	char* const a_const = a;
	const char* const_a = a;
	printf("value of a_const = %u\n", a_const);
	printf("value of const_a = %u\n", const_a);

	//try modifying the pointers here
	//a_const++; //will generate a compiler error since it is constant
	const_a++; //will work without any error
	printf("value = %c", *const_a);
}