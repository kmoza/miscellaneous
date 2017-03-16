#include<iostream>
using namespace std;

class Base
{
public:
	virtual void myFun() final
	{
		cout << "myfun in base" << endl;
	}
};

class Derived : public Base
{
	void myFun()
	{
		cout << "myfun in derived" << endl;
	}
};

int main()
{
	Derived d;
	Base &b = d;
	b.myFun();
	return 0;
}