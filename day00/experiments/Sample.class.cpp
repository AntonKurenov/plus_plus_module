#include <iostream>
#include "sample.class.hpp"

Sample::Sample(void) {
	std::cout << "constructor called" << std::endl;
	Sample::m_counter += 1;
	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructor called" << std::endl;
	Sample::m_counter -= 1;
	return ;
}

void Sample::func(void) {
	std::cout << "Func!!!" << std::endl;
}

void Sample::new_func(void) {
	std::cout << "new_func!!!!" << std::endl;
}

void Sample::old_func(int i) {
	if (i == 1)
		std::cout << "you choose 1! Nice work!!!" << std::endl;
	if (i == 2)
		std::cout << "you choose 2! Well done!!!" << std::endl;
	else
		std::cout << "Ok, very well!" << std::endl;
}

int Sample::getCounter(void)
{
	return Sample::m_counter;
}

int Sample::m_counter = 0;
