#include <iostream>

class User
{
private:
	int m_age;

public:
	int rating;
	User() : m_age(0) {};
	User(const int & t_age) : m_age(t_age)
	{
	};
	// ~User();
	int getAge() const { return (m_age);};
};

class Student : public User
{
private:
	int m_grade;

public:
	Student(const int & t_gr) : m_grade(t_gr)
	{
	};
	// ~Student();
	int getGrade() const { return (m_grade);};
};

int main()
{
	// User one;
	Student stud(5);

	std::cout << stud.getGrade() << std::endl;
	std::cout << stud.getAge() << std::endl;
	return (0);
}
