#include<iostream>
#include<memory>

int main()
{
	std::unique_ptr<int> p1(new int(5));
	//std::unique_ptr<int> p2 = p1; //generates compiler error
	std::unique_ptr<int> p3 = std::move(p1); //transfer ownership

	p3.reset(); //deletes memory
	p1.reset(); //does nothing

	std::shared_ptr<int> p4(new int(10));
	std::shared_ptr<int> p5 = p4;

	p4.reset(); //p5 still owns the memory
	p5.reset(); //deletes the memory

	std::shared_ptr<int> p6(new int(20));
	std::weak_ptr<int> wp1 = p6; //p6 owns the memory
	{
		std::shared_ptr<int> p2 = wp1.lock(); //now p6 and p2 owns the memory
		if(p2) // as p2 is initialized from weak pointer , check if memory is still there
		{
			//Do something with p2
		}
		//p2 is destroyed , memory is still owned by p6
	}
	p6.reset(); //deletes memory
	//std::cout << "Print shared ptr = " << *p4 << std::endl;
	std::shared_ptr<int> p7 = wp1.lock(); //memory is gone , so we get an empty shared_ptr
	if(p7)
	{
		//this is never executed
	}
	return 0;
}