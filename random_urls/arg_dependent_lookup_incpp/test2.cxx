template<typename T>
struct number
{
    number(int);
    friend number gcd(number x, number y)
    {
        return 0;
    }

};

void g()
{
    number<double> a(3), b(4);
    a = gcd(a,b);

    //b = gcd(3,4);
}
