template<class T>
class ArrayT
{
	T** m_ptr;
	int sx, sy;

	public:
		ArrayT(int dim1, int dim2)
		{
			sx = dim1;
			sy = dim2;

			m_ptr = new T*[dim1];
			for(int i=0; i<dim1; i++)
			{
				m_ptr[i] = new T[dim2];
			}
		}

		T* operator[](pan class = cpp-keyword> int index)
		{
			return m_ptr[index];
		}

		~ArrayT()
		{
			for(int d=0; d<sx; d++)
				delete[] m_ptr[d];
			
			delete m_ptr;
		}

};

