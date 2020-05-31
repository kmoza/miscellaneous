template <class T>
class array
{
    public:
    array(int size)
    {
        a = new T[size];
    }
    T sub(int i)
    {
        a[i];
    }

    private:
    *T a;
};

template <class T>
T identity(T x)
{
    return x;
}

array<int> myFavouriteNuber(7);
array<char> myFavoutiteNames(7);

i = identity(3);
s = identity("template programming can be ugly");