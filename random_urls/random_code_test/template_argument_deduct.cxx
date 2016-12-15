#include<iostream>
#include<algorithm>
#include<string>
#include<cctype> 
#include<locale>

int f(int)
{
	return 1;
}

int f(double)
{
	return 2;
}

void g( int(&f1)(int), int(*f2)(double))
{
}

template<int(*F)(int)>
struct Templ
{
};

struct Foo
{
	int mf(int)
	{
		return 3;
	}

	int mf(double)
	{
		return 4;
	}
};

int (*(foo)(void))(int)
{
	return f;
}

int main()
{
	int (*pf)(double) = f; //selects int f(double)
	int (&rf)(int) = f; //selects int f(int)
	int (Foo::*mpf)(int) = &Foo::mf; //selects int mf(int)

	pf = nullptr;
	pf = &f;

	g(f,f);

	std::string str = "example";
	std::transform(str.begin(), str.end(), str.begin(), static_cast<int(*)(int)>(std::toupper)); //selects int toupper(int)

	std::cout << str << std::endl;

	Templ<f> t;
	return 0;
}
