template<class T>
class RefCount
{
	protected:
		int refVal;
		T* p;

	public:
		RefCount()
		{
			refVal = 0;
			p = (T*) this;
		}

		void AddRef()
		{
			refVal++;
		}

		void ReleaseRef()
		{
			refVal--;
			if(refVal == 0)
				delete[] this;
		}

		T* operator ->(void)
		{
			return p;
		}

};
