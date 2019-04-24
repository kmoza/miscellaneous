#include <iostream>
using namespace std;

int main()
{
    int number_of_test_cases;
    cin >> number_of_test_cases;
    
    for(int i = 0; i < number_of_test_cases; i++)
    {
        int input_number;
        cin >> input_number;
        
        //perform the fizzbuzz test on the input number.
        
        for(int j = 1; j <= input_number; j++)
        {
            if(((j%3) == 0) && ((j %5) == 0))
            {
                cout << "FizzBuzz" << endl;
            }
            else if((j%5)==0)
            {
                cout << "Buzz" << endl;
            }
            else if((j%3)==0)
            {
                cout << "Fizz" << endl;
            }
            else
            {
                cout << j << endl;
            }
        }
    }
    return 0;
}

