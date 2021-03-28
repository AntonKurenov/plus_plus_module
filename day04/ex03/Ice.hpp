#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>

class Ice
{
private:

protected:
public:
	Ice();
	virtual ~Ice();
	Ice& operator=(Ice const& src);
	Ice(Ice const& src);
};

#endif // ICE_HPP
