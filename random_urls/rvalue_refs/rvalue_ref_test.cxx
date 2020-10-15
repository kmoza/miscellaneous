A a;
A& a_ref1 = a; // an lvalue reference

A a;
A&& a_Ref2 = a; // an rvalue reference

template <class T>
swap(T& a, T& b)
{
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

//move operation
template <class T>
typename remove_reference<T>::type&&
move(T&& a)
{
    return a;
}
