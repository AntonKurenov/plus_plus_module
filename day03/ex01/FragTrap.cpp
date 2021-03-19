#include "FragTrap.hpp"

std::string melee_at[3] = {"Heyyah!", "Meet professor punch!", "Take that!"};
std::string ranged_at[3] = {"I'm on a roll!", "Unts unts unts unts!",\
			"Crack shot!"};
std::string take_dam[4] = {"Woah! Oh! Jeez!", "Ow hohoho, that hurts! Yipes!",\
	"Why do I even feel pain?!", "Why did they build me out of galvanized flesh?!"};

 std::string born_mes[5] = {"Let's get this party started!", "Recompiling my combat code!",\
		"This time it'll be awesome, I promise!", "Look out everybody! Things are about to get awesome!",
		"I'm a robot ninja..."};

std::string vault_mes[6] = {"It's about to get magical!", "You can't just program this level of excitement!",\
	"Push this button, flip this dongle, voila! Help me!", "Square the I, carry the 1... YES!"\
	"I have an IDEA!", "Loading combat packages!", "Defragmenting!"};

std::string second_wind[5] = {"Hahaha... I ascend!", "Ha ha ha! I LIVE! Hahaha!",\
		"Wow, that actually worked?", "I'm back! Woo!", "Here we go again!"};

std::string dead_mes[6] = {"I'm too pretty to die!", "Good thing I don't have a soul!",\
	"Aww! Come on!", "Robot down!", "No, nononono NO!", "Crap!"};

FragTrap::FragTrap(std::string const & t_name) : name(t_name)
{
	hit_points = max_hit_p;
	energy_live = max_energy;
	std::cout << "<" + name + "> : " + born_mes[rand() % 5] << std::endl;
};

FragTrap::FragTrap(const FragTrap& t_old) : hit_points(t_old.hit_points),\
				energy_live(t_old.energy_live)
{
}

FragTrap::~FragTrap()
{
	std::cout << "\n<" + name + ">: I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void FragTrap::operator=(const FragTrap& t_inst)
{
	hit_points = t_inst.hit_points;
	energy_live = t_inst.energy_live;
	name = t_inst.name;
}

void FragTrap::rangedAttack(std::string const & target)
{
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
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

void FragTrap::takeDamage(unsigned int amount)
{
	if (hit_points <= 0)
	{
		std::cout << "\nHey, I'm FR4G-TP whith a name <" + name + "> and I have already died. Stop bother me!" << std::endl;
		return ;
	}
	std::cout << "\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	std::cout << take_dam[rand() % 4] << std::endl;
	amount = amount - (int)(amount - (amount * armor / 10));
	if (amount >= hit_points)
	{
		amount = hit_points;
		hit_points = 0;
		std::cout << "FR4G-TP <" + name + "> takes <" << amount << "> of damage" << std::endl;
		std::cout << dead_mes[rand() % 6] << std::endl;
		std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
		return ;
	}
	hit_points -= amount;
	std::cout << "FR4G-TP <" + name + "> takes <" << amount << "> of damage" << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "\n+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
	if (amount > (max_hit_p - hit_points))
	{
		amount = max_hit_p - hit_points;
		hit_points = max_hit_p;
	}
	if (hit_points == 0)
	{
		std::cout << second_wind[rand() % 5] << std::endl;
	}
	std::cout << "FR4G-TP <" + name + "> has been repaired by <" << amount << "> of hit points" << std::endl;
	std::cout << "+ + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + + +" << std::endl;
}
