#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const & t_name) : ClapTrap(t_name)//name(t_name)
{
	max_hit_p = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	ranged = 20;
	armor = 5;
	std::string born_mes[5] = {"Let's get this party started!", "Recompiling my combat code!",\
			"This time it'll be awesome, I promise!", "Look out everybody! Things are about to get awesome!",
			"I'm a robot ninja..."};
	hit_points = max_hit_p;
	energy_live = max_energy;
	std::cout << "<" + name + "> : " + born_mes[rand() % 5] << std::endl;
};

FragTrap::FragTrap()
{
	max_hit_p = 100;
	max_energy = 100;
	level = 1;
	melee = 30;
	ranged = 20;
	armor = 5;
	hit_points = max_hit_p;
	energy_live = max_energy;
	std::cout << "FragTRap has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& t_old)
{	
	name = t_old.name;
	max_hit_p = t_old.max_hit_p;
	max_energy = t_old.max_energy;
	level = t_old.level;
	melee = t_old.melee;
	ranged = t_old.ranged;
	armor = t_old.armor;
	std::cout << "Copy has happened!!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\n<" + name + ">: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void FragTrap::operator=(const FragTrap& t_old)
{
	hit_points = t_old.hit_points;
	energy_live = t_old.energy_live;
	hit_points = t_old.hit_points;
	energy_live = t_old.energy_live;
	name = t_old.name;
	max_hit_p = t_old.max_hit_p;
	max_energy = t_old.max_energy;
	level = t_old.level;
	melee = t_old.melee;
	ranged = t_old.ranged;
	armor = t_old.armor;
	std::cout << "Hell Yeah! That is a assignment!" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string vault_mes[6] = {"It's about to get magical!", "You can't just program this level of excitement!",\
		"Push this button, flip this dongle, voila! Help me!", "Square the I, carry the 1... YES!"\
		"I have an IDEA!", "Loading combat packages!", "Defragmenting!"};
	if (energy_live < 25)
	{
		std::cout << "\nDangit, I'm out!" << std::endl;
		std::cout << "FR4G-TP <" + name + "> doesn't have enough energy for this action(" << std::endl;
		return ;
	}
	energy_live -= 25;
	std::cout << "\n*=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* " << std::endl;
	std::cout << vault_mes[rand() % 6] << std::endl;
	std::cout << "FR5G-TP <" + name + "> activate vault hunter protocol on the <" + target + "> and this cause <" <<\
		(rand() % 85 + 15) << "> point of damage" << std::endl;
	std::cout << "*=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=*" << std::endl; 
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::string ranged_at[3] = {"I'm on a roll!", "Unts unts unts unts!",\
				"Crack shot!"};
	if (energy_live < 20)
	{
		std::cout << "\nDangit, I'm out!" << std::endl;
		std::cout << "FR4G-TP <" + name + "> doesn't have enough energy for this action(" << std::endl;
		return ;
	}

	energy_live -= 20;
	std::cout << "\n-> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> ->" << std::endl; 
	std::cout << ranged_at[rand() % 3] << std::endl;
	std::cout << "FR4G-TP <" + name + "> attacks <" + target + "> at range, " +\
		"causing <" << ranged << "> points of damage!" << std::endl;
	std::cout << "-> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> ->" << std::endl; 
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::string melee_at[3] = {"Heyyah!", "Meet professor punch!", "Take that!"};
	if (energy_live < 30)
	{
		std::cout << "\nDangit, I'm out!" << std::endl;
		std::cout << "FR4G-TP <" + name + "> doesn't have enough energy for this action(" << std::endl;
		return ;
	}
	energy_live -= 30;
	std::cout << "\n-* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* " << std::endl; 
	std::cout << melee_at[rand() % 3] << std::endl;
	std::cout << "FR4G-TP <" + name + "> attacks <" + target + "> at close distance, " +\
		"causing <" << melee << "> points of damage!" << std::endl;
	std::cout << "-* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* " << std::endl; 
}
