#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num_test_cases;
    cin >> num_test_cases;
    
    for(int i =0; i < num_test_cases; i++)
    {
    	int num_elements;
    	cin >> num_elements;
    	vector<int> array_elem;
    	
    	//calculate contiguous subarray
    	int sum1 = 0;
    	int sum2 = 0;
    		
    	for(int j = 0 ;j < num_elements; j++)
    	{
    		int arr_element;
    		cin >> arr_element;
    		array_elem.push_back(arr_element);
    		
    		for(int k = 0; k < num_elements; k++)
    		{
    			//maximum sum non contiguous array elements
    			if(array_elem[k]>0)
    			{
    				sum2 = sum2 + array_elem[k];
    			}
    			
    			//maximum sum of contiguous subarray
    			sum1 = sum1 + array_element[k];
    			if(sum1>0)
    			{
    				sum1 = sum1;
    			}
    			else
    			{
    				sum1 = 0;
    			}
    		}
    	}
    	cout << sum1 << " " << sum2 << endl;
    }
    return 0;
}

