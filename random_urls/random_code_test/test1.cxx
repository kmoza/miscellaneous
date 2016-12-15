struct B
{
	B()
	{
		seize();
	}

	virtual ~B()
	{
		release();
	}

	protected:
	virtual void seize();
	virtual void release();
};


struct D : B
{
	virtual ~D() = default;

	protected:
	void seize() override
	{
		B::seize();
	}

	void release() override
	{
		B::release();
	}
};
