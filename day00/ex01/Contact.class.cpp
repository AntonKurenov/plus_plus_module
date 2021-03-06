#include "Contact.class.hpp"

void Contact::setFirstName(std::string t_str)
{
	Contact::m_first_name = t_str;
}

void Contact::setLastName(std::string t_str)
{
	Contact::m_last_name = t_str;
}

void Contact::setNickname(std::string t_str)
{
	Contact::m_nickname = t_str;
}

void Contact::setLogin(std::string t_str)
{
	Contact::m_login = t_str;
}

void Contact::setPostAddr(std::string t_str)
{
	Contact:m_post_addr = t_str;
}

void Contact::setEmail(std::string t_str)
{
	Contact::m_email = t_str;
}

void Contact::setPhone(std::string t_str)
{
	Contact::m_phone = t_str;
}

void Contact::setBirthday(std::string t_str)
{
	Contact::m_birthday = t_str;
}

void Contact::setMeal(std::string t_str)
{
	Contact::m_meal = t_str;
}

void Contact::setColor(std::string t_str)
{
	Contact::m_color = t_str;
}

void Contact::setSecret(std::string t_str)
{
	Contact::m_secret = t_str;
}

std::string Contact::getFirstName(void) const
{
	return Contact::m_first_name;
}

std::string Contact::getLastName(void) const
{
	return Contact::m_last_name;
}

std::string Contact::getNickname(void) const
{
	return Contact::m_nickname;
}

std::string Contact::getLogin(void) const
{
	return Contact::m_login;
}

std::string Contact::getPostAddr(void) const
{
	return Contact::m_post_addr;
}

std::string Contact::getEmail(void) const
{
	return Contact::m_email;
}

std::string Contact::getPhone(void) const
{
	return Contact::m_phone;
}

std::string Contact::getBirthday(void) const
{
	return Contact::m_birthday;
}

std::string Contact::getMeal(void) const
{
	return Contact::m_meal;
}

std::string Contact::getColor(void) const
{
	return Contact::m_color;
}

std::string Contact::getSecret(void) const
{
	return Contact::m_secret;
}
