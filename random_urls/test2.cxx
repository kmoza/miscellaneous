#include<iostream>

using namespace std;

class Base
{
	public:
		virtual void foo()
		{
			cout << "foo - base" << endl;
		}

};

class Derived : public Base
{
	public:
		virtual void foo()
		{
			cout << "foo - derived" << endl;
		}
};

void callFoo(Base* b)
{
	Base *c = new Base(*b);
	c->foo();
}

int main()
{
	Derived d;
	callFoo(&d);

	return 0;
}
