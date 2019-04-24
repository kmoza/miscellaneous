class Ancestor
{
    public:
        int a;
};

class Descendant : public Ancestor
{
    public:
        int b;

};


int main()
{
    Descendant d;
    Ancestor a(d);
    Ancestor b(d);
    a = d;
    return 0;
}
