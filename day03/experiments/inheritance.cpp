#include <iostream>

class User
{
private:
	int m_age;

protected:
	std::string name;

public:
	int rating;
	User() : m_age() {};
	User(const int & t_age) : m_age(t_age)
	{
	};
	~User() {std::cout << "user died" << std::endl;};
	void setName(std::string const &);
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
	~Student() {std::cout << "student died" << std::endl;};
	int getGrade() const { return (m_grade);};
};

int main()
{
	// User one;
	User one(90);
	Student stud(5);

	std::cout << stud.getGrade() << std::endl;
	std::cout << stud.getAge() << std::endl;
	return (0);
}
