template <class T>
class clone_ptr
{
private:
    T *ptr;

public:
    //constructor
    explicit clone_ptr(T *p = 0) : ptr(p)
    {
    }

    //destructor
    ~clone_ptr()
    {
        delete ptr;
    }

    //copy semantics
    clone_ptr(const clone_ptr &p) : ptr(p.ptr ? p.ptr->clone() : 0)
    {
    }

    clone_ptr &operator=(const clone_ptr &p)
    {
        if (this != &p)
        {
            delete ptr;
            ptr = p.ptr ? p.ptr->clone() : 0;
        }
        return *this;
    }

    //move semantics
    clone_ptr(clone_ptr &&p) : ptr(p.ptr)
    {
        p.ptr = 0;
    }

    clone_ptr &operator=(clone_ptr &&p)
    {
        std::swap(ptr, p.ptr);
        return *this;
    }

    //other operations
    T &operator*() const
    {
        return *ptr;
    }
    // ...
};

class Derived : public Base
{
    std::vector<int> vec;
    std::string name;
    // ...

public:
    //...
    //move semantics
    Derived(Derived &&x) : Base(std::move(x)), vec(std::move(x.vec)), name(std::move(x.name))
    {
    }

    Derived &operator=(Derived &&x)
    {
        Base::operator=(std::move(x));
        vec = std::move(x.vec);
        name = std::move(x.name);
        return *this;
    }
    // ...
};