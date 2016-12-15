class MyArray
{
	int* array;
	int count;

	public:
		MyArray& operator=(const MyArray& other)
		{
			if(tis != &other) //protection against self assignment
			{
				int* new_array = new int[other.count];
				std::copy(other.array, other.array+other.count, new_array);

				delete[] array;
				array = new_array;
				count = other.count;
			}

			return *this;
		}
};
