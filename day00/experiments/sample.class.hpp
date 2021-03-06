#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

#include <iostream>

class Sample {

private:
	void func(void);
	static int m_counter;

public:

	Sample(void);
	~Sample(void);
	void new_func();
	void old_func(int i);
	static int getCounter(void);

};

#endif
