#include<iostream>

struct Base final
{
};

struct Derived : Base
{
};

//just check that compiler generates an error
int main()
{
	return 0;
}
