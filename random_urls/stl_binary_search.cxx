#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	vector<int> v(a,a+9);

	cout << "Here are the values in the vector" << endl;

	for(auto vele : v)
	{
		cout << vele << " ";
	}

	if(binary_search(v.begin(), v.end(), 3))
		cout << "The value 3 was found" << endl;
	else
		cout << "The value 3 was not found" << endl;

	return 0;
}


