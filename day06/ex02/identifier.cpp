#include <iostream>

class Base
{
private:
public:
	virtual ~Base() {};
};

class C: public Base
{
private:
public:
};

class B: public Base
{
private:
public:
};

class A: public Base
{
private:
public:
};

void identity_from_pointer(Base * p)
{
	std::cout << "=====IDENTITY_FROM_POINTER======" << std::endl;
	if (dynamic_cast<A*>(p))
	{
		std::cout << "The real type is A" << std::endl;
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "The real type is B" << std::endl;
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "The real type is C" << std::endl;
		return ;
	}
}

void identity_from_reference(Base & p)
{
	std::cout << "=====IDENTITY_FROM_REFERENCE======" << std::endl;
	try {
		if (&dynamic_cast<A&>(p))
		{
			std::cout << "The real type is A" << std::endl;
			return ;
		}
	}
	catch (std::bad_cast &e)
	{
	}
	try {
		if (&dynamic_cast<B&>(p))
		{
			std::cout << "The real type is B" << std::endl;
			return ;
		}
	}
	catch (std::bad_cast &e)
	{
	}
	try {
		if (&dynamic_cast<C&>(p))
		{
			std::cout << "The real type is C" << std::endl;
			return ;
		}
	}
	catch (std::bad_cast &e)
	{
	}
}

Base * generate(void)
{
	std::cout << "===============================================" << std::endl;
	int num = rand() % 3;
	if (num == 0)
	{
		std::cout << "class A has been generated" << std::endl;
		return new A;
	}
	if (num == 1)
	{
		std::cout << "class B has been generated" << std::endl;
		return new B;
	}
	std::cout << "class C has been generated" << std::endl;
	return new C;
}

int main()
{
	std::srand(time(NULL));

	Base *p  = generate();
	identity_from_pointer(p);
	identity_from_reference(*p);

	delete p;
	return 0;
}
