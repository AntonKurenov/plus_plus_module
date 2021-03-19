#include "ScavTrap.hpp"

std::string mel_at[2] = {"Punching time!", "Hyperiooooon Punch!"};
std::string dam_take[2] = {"Yikes! Ohhoho!", "My robotic flesh! AAHH!"};
std::string rang_at[2] = {"I expect you to die!", "I'm a tornado of death and bullets!"};

 std::string mes_born[2] = {"Hey everybody! Check out my package!", \
	"Glitching weirdness is a term of endearment, right?"};

std::string challenges[3] = {"Tell a short poem", "Sing a song", "Commit suicide"};

std::string second_life[2] = {"Holy crap, that worked?", "Back for more!"};

std::string mes_dead[3] = {"No fair! I wasn't ready.", "NOOO!", "Crap happens."};

ScavTrap::ScavTrap(std::string const & t_name) : name(t_name)
{
	hit_points = max_hit_p;
	energy_live = max_energy;
	std::cout << "<" + name + "> : " + mes_born[rand() % 2] << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& t_old) : hit_points(t_old.hit_points),\
				energy_live(t_old.energy_live)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << "\n<" + name + ">: Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
}

void ScavTrap::operator=(const ScavTrap& t_inst)
{
	hit_points = t_inst.hit_points;
	energy_live = t_inst.energy_live;
	name = t_inst.name;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	if (energy_live < 20)
	{
		std::cout << "\nCrap, no more shots left!" << std::endl;
		std::cout << "FR4G-TP <" + name + "> doesn't have enough energy for this action(" << std::endl;
		return ;
	}

	energy_live -= 20;
	std::cout << "\n-> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> ->" << std::endl; 
	std::cout << rang_at[rand() % 2] << std::endl;
	std::cout << "FR4G-TP <" + name + "> attacks <" + target + "> at range, " +\
		"causing <" << ranged << "> points of damage!" << std::endl;
	std::cout << "-> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> -> ->" << std::endl; 
}

void ScavTrap::meleeAttack(std::string const & target)
{
	if (energy_live < 30)
	{
		std::cout << "\nDangit, I'm out!" << std::endl;
		std::cout << "FR4G-TP <" + name + "> doesn't have enough energy for this action(" << std::endl;
		return ;
	}
	energy_live -= 30;
	std::cout << "\n-* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* " << std::endl; 
	std::cout << mel_at[rand() % 2] << std::endl;
	std::cout << "FR4G-TP <" + name + "> attacks <" + target + "> at close distance, " +\
		"causing <" << melee << "> points of damage!" << std::endl;
	std::cout << "-* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* -* " << std::endl; 
}

void ScavTrap::challengeNewcomer()
{
	if (energy_live < 25)
	{
		std::cout << "\nDangit, I'm out!" << std::endl;
		std::cout << "FR4G-TP <" + name + "> doesn't have enough energy for this action(" << std::endl;
		return ;
	}
	energy_live -= 25;
	std::cout << "\n*=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* " << std::endl;
	std::cout << "FR5G-TP <" + name + "> trying to persuade newcomer to " + challenges[rand() % 3] << std::endl;
	std::cout << "*=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=* *=*" << std::endl; 
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "\nHey, I'm FR4G-TP whith a name <" + name + "> and I have already died. Stop bother me!" << std::endl;
		return ;
	}
	std::cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << dam_take[rand() % 4] << std::endl;
	amount = amount - (int)(amount - (amount * armor / 10));
	if (amount >= hit_points)
	{
		amount = hit_points;
		hit_points = 0;
		std::cout << "FR4G-TP <" + name + "> takes <" << amount << "> of damage" << std::endl;
		std::cout << mes_dead[rand() % 3] << std::endl;
		std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
		return ;
	}
	hit_points -= amount;
	std::cout << "FR4G-TP <" + name + "> takes <" << amount << "> of damage" << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "\n+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
	if (amount > (max_hit_p - hit_points))
	{
		amount = max_hit_p - hit_points;
		hit_points = max_hit_p;
	}
	if (hit_points == 0)
	{
		std::cout << second_life[rand() % 2] << std::endl;
	}
	std::cout << "FR4G-TP <" + name + "> has been repaired by <" << amount << "> of hit points" << std::endl;
	std::cout << "+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
}
