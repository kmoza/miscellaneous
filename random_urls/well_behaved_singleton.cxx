#include<cstdlib>

class FooSingleton
{
	public:
		~FooSingleton(void);

		static FooSingleton& GetFooObj(void);

	private:
		int m_var;
		FooSingleton(void);
		static void DestroySingleton(void);
};


//static FooSingleton g_fooSingleton;

//ctor and dtor
FooSingleton::FooSingleton(void)
{
	atexit(FooSingleton::DestroySingleton);
}

FooSingleton::~FooSingleton(void)
{
}

FooSingleton& FooSingleton::GetFooObj(void)
{
	static FooSingleton fooObj;
	return fooObj;
}

void FooSingleton::DestroySingleton(void)
{
	delete m_pFoo;
}

int main()
{
	return 0;
}
