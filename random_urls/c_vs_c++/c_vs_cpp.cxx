// struct element_t
// {
//     struct element_t *next, *prev;
//     void *element;
// };

template <typename T>
struct element_t
{
    element_t<T> *next, *prev;
    T element;
};

#include<set>
#include<string>
#include<iostream>

int main(int argc, char **argv)
{
    //declare and initialize some variables
    std::string word;
    std::set<std::string> wordcount;
    //read words and insert in rb-tree
    while(std::cin >>word)
    {
        wordcount.insert(word);
    }
    //print the result
    std::cout << "Words :" << wordcount.size() << std::endl;
    return 0;
}