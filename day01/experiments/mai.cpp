#include <string>
#include <iostream>

class Student
{
private:
	std::string m_login;

public:
	Student(std::string login) : m_login(login)
	{
		std::cout << "Student " << this->m_login << " is born" << std::endl;
	}

	~Student()
	{
		std::cout << "Student " << this->m_login << " died" << std::endl;
	}
};

int main()
{
	Student one("hello");
	Student* world = new Student("world");

	delete world;
	return 0;
}
