#include<iostream>
#include<ctime>
#include<algorithm>

int main()
{
	//generate data
	const unsigned arraySize = 32768;
	int data[arraySize];

	for(unsigned c = 0; c < arraySize; ++c)
		data[c] = std::rand() % 256;

	//!!! with this the next loop runs faster
	std::sort(data, data+arraySize);

	//Test
	clock_t start = clock();
	long long sum = 0;

	for(unsigned i = 0; i < 100000;++i)
	{
		//primary loop
		for(unsigned c = 0; c < arraySize; ++c)
		{
			if(data[c] >= 128)
				sum = sum + data[c];
		}
	}

	double elapsedTime = static_cast<double>(clock() - start);

	std::cout << elapsedTime << std::endl;
	std::cout << "sum = " << sum << std::endl;
}
