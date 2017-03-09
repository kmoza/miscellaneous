#include<iostream>

class A
{
private:
	int i;
public:
	A(int x=0)
	{
		std::cout << "Initialzied A\n";
	}
};

class B
{
private:
	int j;
public:
	B(int b=0)
	{
		std::cout << "Initialzied B\n";
	}
};

class Main
{
private:
	A a;
	B b;
public:
	Main(int x=10, int y=20):(a(10),b(20))
    {
	std::cout << "Initialized main\n";
    }
	
};

int main()
{
    Main obj = Main();
    return 0;
}
