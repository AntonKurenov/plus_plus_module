#include "FragTrap.hpp"

std::string melee_at[3] = {"Heyyah!", "Hyah!", "Take that!"};
std::string ranged_at[3] = {"I'm on a roll!", "Unts unts unts unts!",\
				 "Ha! Keep 'em coming!"};
std::string take_dam[4] = {"Woah! Oh! Jeez!", "Ow hohoho, that hurts! Yipes!",\
 "Why do I even feel pain?!", "Why did they build me out of galvanized flesh?!"};

FragTrap::FragTrap(std::string const & t_name) : name(t_name)
{
	std::cout << "< " + t_name + "> : Hey everybody! Check out my package!" << std::endl;
};

FragTrap::~FragTrap()
{
	std::cout << "<" + name + "> I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP <" + name + "> attacks <" + target + "> at range, " +\
		"causing <40> points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "-* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -*" << std::endl; 
	std::cout << melee_at[rand() % 3] << std::endl;
	std::cout << "FR4G-TP <" + name + "> attacks <" + target + "> at close distance, " +\
		"causing <40> points of damage!" << std::endl;
	std::cout << "-* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -*" << std::endl; 
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << take_dam[rand() % 3] << std::endl;
	std::cout << "FR4G-TP <" + name + "> takes <" << amount << "> of damage" << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
	std::cout << "Health over here!" << std::endl;
	std::cout << "FR4G-TP <" + name + "> has been repaired by <" << amount << "> of health points" << std::endl;
	std::cout << "+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
}
