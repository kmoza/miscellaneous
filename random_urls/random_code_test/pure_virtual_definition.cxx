#include<iostream>

class Base
{
	public:
		virtual void show()=0;
};

void Base::show()
{
	std::cout << "Pure virtual definition\n";
}

class Derived : public Base
{
	public:
		void show()
		{
			std::cout << "Implementation of virtual function in derived class\n";
		}
};

int main()
{
	Base *b;
	Derived d;
	//b->show();
	b = &d;
	b->show();
	return 0;
}
