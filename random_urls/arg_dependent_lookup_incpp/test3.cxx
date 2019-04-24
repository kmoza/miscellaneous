namespace N1
{
    struct S
    {
    };

    template<int X>
    void f(S);
}

namespace N2
{
    template<class T>
    void f(T t);

}

void g(N1::S s)
{
    f<3>(s);

    N1::f<3>(s); //qualified lookup finds the template f
    N2::f<3>(s);

    using N2::f;
    f<3>(s); //Unqualified lookup now finds N2::f but then
         //Argument dependent lookup kicks in and finds N1::f
}
