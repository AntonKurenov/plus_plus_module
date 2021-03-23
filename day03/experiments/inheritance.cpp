#include <iostream>

class Human
{
private:
	std::string pr;
public:
	int age;
	Human(/* args */);
	~Human();
	void hello();
};

void Human::hello()
{
	std::cout << "Hello from human" << std::endl;
}

Human::Human(/* args */)
{
}

Human::~Human()
{
}

class User : public Human
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
	void hello();
};

void User::hello()
{
	std::cout << "Go fuck yourself, bitch" << std::endl;
}

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
	Human hum;
	hum.hello();
	User one(90);
	Student stud(5);
	User& two = hum;
	one.hello();

	// std::cout << stud.getGrade() << std::endl;
	// std::cout << stud.getAge() << std::endl;
	return (0);
}
