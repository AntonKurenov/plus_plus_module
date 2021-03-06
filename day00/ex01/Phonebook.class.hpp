#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
#include <iostream>
#include <string>
#include <iomanip>

#define MAX 8

#include "Contact.class.hpp"
#include <iostream>

class Phonebook 
{ 
private:
	static const int m_size = 8;	
	Contact m_contacts[m_size];
	int			m_param;

public:
	void addContact(int t_index);
	void doSearch(int t_index) const;
	void printContact(int t_index) const;
	void printTable(int t_index) const;
	void fillColumn(std::string t_str) const;
	void showFullInfo(int t_index) const;
};

#endif //PHONEBOOK_CLASS_HPP
