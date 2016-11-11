#include<vector>

int main()
{
	const std::vector<int> v(1);
	auto a = v[0];
	decltype(v[1]) b = 1; 

	auto c = 0;
	auto d = c;

	decltype(c) e; //e has type int
	decltype((c)) f = c;
	decltype(0)g; //g has type int, because 0

	return 0;
}
