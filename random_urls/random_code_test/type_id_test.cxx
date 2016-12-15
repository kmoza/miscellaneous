#include<iostream>
#include<typeinfo>

class Person
{
	public:
		virtual ~ Person() {}
};

class Employee : public Person
{
};

int main()
{
	Person person;
	Employee employee;

	Person* ptr = &employee;
	Person& ref = employee;


	std::cout << typeid(person).name() << std::endl;
	std::cout << typeid(employee).name() << std::endl;
	std::cout << typeid(ptr).name() << std::endl;
	std::cout << typeid(*ptr).name() << std::endl;

	std::cout << typeid(ref).name() << std::endl;

	Person* p = nullptr;

	try
	{
		typeid(*p); //not undefined behaviour , throws std::bad_type exception

	}
	catch(...)
	{
		std::cout << "caught exception" << std::endl;
	}

	Person& pRef = *p;
	typeid(pRef); //undefined behaviour
}

