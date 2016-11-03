#include<iostream>

//using namespace std;

int main()
{
	std::cout << "Test" << std::endl;

	operator<<(std::cout, "Hello, This is Arg Dependent Lookup\n");

	endl(std::cout);

}
