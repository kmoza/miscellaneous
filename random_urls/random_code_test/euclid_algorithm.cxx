#include<iostream>

//algorithm to find GCD of two numbers
int euclidAlgorithm(int a, int b)
{
	while(b!=0)
	{
		if(a>b)
		{
			b = b-a;
		}
		else
			a = a-b;
	}

	return a;
}

int main()
{
	int a = 36;
	int b = 108;

	std::cout << "GCD of " << a << " and " << b <<  "is = " <<  euclidAlgorithm(a,b) << std::endl;

	return 0;
}
