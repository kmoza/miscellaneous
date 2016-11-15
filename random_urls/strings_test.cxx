#include<iostream>
#include<string>

int main()
{
	std::string foo = "fighetrs";
	std::string bar = "stool";

	if(foo!=bar)
	{
		std::cout << "The strings are different" << std::endl;
	}

	std::cout << (bar + " " + foo) << std::endl;

	return 0;
}
