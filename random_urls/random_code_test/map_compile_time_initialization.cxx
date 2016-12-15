#include<iostream>
#include<map>
#include<string>

using namespace std;


int main(void)
{
	map<int,std::string> my_map = { (1,"one"),
				   (2,"two")
				 };

	//the above will not work with a c++98 compiler

	return 0;
}

