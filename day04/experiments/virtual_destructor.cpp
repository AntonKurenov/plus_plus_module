#include <iostream>

class Base 
{
public:
	~Base() {std::cout << "Base destructor" << std::endl;}
};

class Derived : public Base
{
    ~Derived()
    {
		std::cout << "Derived destructor" << std::endl;
    }
};

int main()
{
	Base *b = new Derived();
	// use b
	delete b; // Here's the problem!
	return 0;
}
