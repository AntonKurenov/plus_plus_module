#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
	
class Sample  
{
private:

public:
	Sample();
	~Sample();
	void test(char const c) const;
	void test(int const num) const;
	void test(float const fl) const;
	void test(void) const;
};

#endif
