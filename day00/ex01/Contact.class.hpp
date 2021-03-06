#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
private:
	int index;
	std::string m_first_name;
	std::string m_last_name;
	std::string m_nickname;
	std::string m_login;
	std::string m_post_addr;
	std::string m_email;
	std::string m_phone;
	std::string m_birthday;
	std::string m_meal;
	std::string m_color;
	std::string m_secret;

public:
	void setFirstName(std::string str);
	void setLastName(std::string str);
	void setNickname(std::string str);
	void setLogin(std::string str);
	void setPostAddr(std::string str);
	void setEmail(std::string str);
	void setPhone(std::string str);
	void setBirthday(std::string str);
	void setMeal(std::string str);
	void setColor(std::string str);
	void setSecret(std::string str);
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getLogin(void) const;
	std::string getPostAddr(void) const;
	std::string getEmail(void) const;
	std::string getPhone(void) const;
	std::string getBirthday(void) const;
	std::string getMeal(void) const;
	std::string getColor(void) const;
	std::string getSecret(void) const;
};

#endif //CONTACT_CLASS_HPP
