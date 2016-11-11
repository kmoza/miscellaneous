#include<iostream>

class SomeType
{
	int number;

	public:
		SomeType(int new_number) : number(new_number)
		{}

		SomeType() : SomeType(42){}
};

int main()
{
	SomeType obj;
	return 0;
}
