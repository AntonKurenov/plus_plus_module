#include <iostream>

class Parent
{
public:
	virtual const char* getName() { return "Parent"; }
};

class Child: public Parent
{
public:
	virtual const char* getName() { return "Child"; }
};

int main()
{
	Child child;
	Parent &rParent = child;
	Child &ch = child;
	std::cout << "rParent is a " << rParent.getName() << '\n';
	std::cout << "rChild is a " << ch.getName() << '\n';
}
