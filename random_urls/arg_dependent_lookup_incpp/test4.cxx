namespace A
{
    struct X;
    struct Y;

    void f(int);
    void g(X);
}

namespace B
{
    void f(int i)
    {
        f(i); //calls B::f (endless recursion)
    }

    void g(A::X x)
    {
        g(x); //Error: ambiguous between B::g and A::g
    }

    void h(A::Y y)
    {
        h(y); //endless recursion) , falls back to B::f from A::h(no definition)
    }
}
