#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1(10, 23);
	for(int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << endl;
	}

	vector<int> v2(v1);
	
	//prinit using iterator
}
