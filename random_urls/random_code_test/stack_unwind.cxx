#include<iostream>

class Inner
{
    public:
	Inner()
	{
	    std::cout << "Inner constructor" << std::endl;
	}

	~Inner()
	{
	    std::cout << "Inner destructor" << std::endl;
	}
};

class Outer
{
    public:
	Outer()
	{
	    std::cout << "Outer constructor" << std::endl;
	    throw "Exception";
	}

	~Outer()
	{
	    std::cout << "Outer destructor" << std::endl;
	}

    private:
	Inner obj;
};

int main()
{
    Outer obj;
    return 0;
}
