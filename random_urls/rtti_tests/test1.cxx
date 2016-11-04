class Interface
{
	public:
		virtual void GenericOp() = 0; //pure virtual function
};

class SpecificClass : public Interface
{
	public:
		virtual void GenericOp();
		virtual void SpecificOp();
};

Interface* ptr_interface;
SpecificClass* ptr_specific = dynamic_cast<SpecificClass*>(ptr_interface);

if(ptr_specific)
{
	ptr_specific->SpecificOp();
}
else
{
	ptr_interface->GenericOp();
}

