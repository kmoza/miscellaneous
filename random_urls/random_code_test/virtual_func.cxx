#include<iostream>

class Foo
{
    public:
	virtual void vMethod()
	{
	    std::cout << "Foo::vMethod was called" << std::endl;
	}
};


class Bar : public Foo
{
    public:
	virtual void vMethod()
	{
	    std::cout << "Bar::vMethod was called" << std::endl;
	    std::cout << "This is not the same as Foo::vMethod" << std::endl;
	}
};

int main()
{
    Foo* foo = new Bar;
    foo->vMethod();
    return 0;
}
