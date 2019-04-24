#include<iostream>

constexpr int get_five()
{
    return 5;
}

int main()
{
    int some_array[get_five()+2]; //the array has lenght 7
    for(int i = 0; i < 7; i++)
    {
        some_array[i] = i*10;
    }

    //display the array
    for(int i = 0; i < 7; i++)
    {
        std::cout << some_array[i] << std::endl;
    }

    return 0;
}
    
