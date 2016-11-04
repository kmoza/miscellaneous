#include<iostream>
#include<typeinfo>

class Person
{
	public:
		virtual ~Person()
		{
		}

};

class Employee : public Person
{
};

int main()
{
	Person person;
	Employee employee;

	Person *ptr = &employee;

	std::cout << typeid(person).name() << std::endl;
	std::cout << typeid(employee).name() << std::endl;
	std::cout << typeid(ptr).name() << std::endl;
	std::cout << typeid(*ptr).name() << std::endl;

	//find the type of the std::type_info
	std::cout << typeid(std::type_info).name() << std::endl;
	return 0;
}
