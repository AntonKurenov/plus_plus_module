#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>

class Cure
{
private:

protected:
public:
	Cure();
	virtual ~Cure();
	Cure& operator=(Cure const& src);
	Cure(Cure const& src);
};

#endif // CURE_HPP
