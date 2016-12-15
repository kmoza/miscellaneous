#include<cstring>
#include<iostream>

class Foo
{
	public:
		Foo():data(new char[14])
		{
			std::strcpy(data,"Hello World");
		}

		Foo(const Foo& other) : data(new char[std::strlen(other.data)+1])
		{
			std::strcpy(data,other.data);
		}

		//move constructor
		Foo(Foo&& other) : data(other.data)
		{
			other.data = nullptr;
		}

		~Foo()
		{
			delete[] data;
		}

		//copy assignment operator
		Foo& operator=(Foo other)
		{
			std::swap(data,other.data);
			return *this;
		}

		//move assignment operator
		Foo& operator=(Foo&& other)
		{
			std::swap(data, other.data);
			return *this;
		}

	private:
		friend std::ostream& operator<<(std::ostream& os, const Foo& foo)
		{
			os << foo.data;
			return os;
		}

		char* data;
};


int main()
{
	const Foo foo;
	std::cout << foo << std::endl;

	return 0;
}

