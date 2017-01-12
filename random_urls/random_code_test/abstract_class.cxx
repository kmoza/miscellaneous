#include<iostream>

class Base
{
	public:
		virtual void show() = 0;
};

class Derived : public Base
{
	public:
		void show()
		{
			std::cout << "Implementation of virtual function in derived class" << std::endl;
		}
};

int main()
{
	//Base obj; //gives compile time error
	Base *b;
	Derived d;
	b = &d;
	b->show();
	return 0;
}
