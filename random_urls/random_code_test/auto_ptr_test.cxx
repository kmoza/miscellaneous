#include<iostream>
#include<memory>

using namespace std;

int main()
{
	int i = 43;
	auto_ptr<int> p(&i);

	return 0;
}
