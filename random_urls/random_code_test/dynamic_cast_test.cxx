#include<typeinfo>
#include<iostream>

using namespace std;

class A
{
    public:
        virtual ~A(){};
        void methodSpecificToA()
        {
            cout << "Method specific to A was invoked" << endl;
        }
};

class B : public A
{
    public:
    void methodSpecificToB()
    {
        cout << "Method specific to B was invoked" << endl;
    }

    virtual ~B(){};
};

void my_function(A& my_a)
{
    try
    {
        B& my_b = dynamic_cast<B&>(my_a); //downcast a to b
        my_b.methodSpecificToB();
    }
    catch(const std::bad_cast& e)
    {
        cerr << "Exception " << e.what() << "thrown." << endl;
        cerr << "Object id not of type B" << endl;
    }
}

int main()
{
    A *arrayofA[3];
    arrayofA[0] = new B();
    arrayofA[1] = new B();
    arrayofA[2] = new A();

    for(int i = 0; i < 3; i++)
    {
        my_function(*arrayofA[i]);
        delete arrayofA[i];
    }

    return 0;
}
