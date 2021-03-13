#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Human attacks " + target + " whith sword" << std::endl;
}

void Human::intimidatingShout (std::string const & target)
{
	std::cout << "Human shouting at " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "Human attacks " + target + " whith bow" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*attacks[3])(std::string const &) = {\
			&Human::meleeAttack,
			&Human::rangedAttack,
			&Human::intimidatingShout,};
	std::string types[3] = {"melee", "range", "shout"};
	for (int i = 0; i < 3; i++)
	{
		if (action_name.compare(types[i]) == 0)
		{
			(this->*attacks[i])(target);
			return ;
		}
	}
	std::cout << "Error: action with name \"" + action_name + "\" is not found" << std::endl;
}
