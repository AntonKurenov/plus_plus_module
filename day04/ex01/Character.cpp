#include "Character.hpp"

Character::Character(): m_ap(40), m_name("Character"),
						m_max_ap(m_ap), m_weapon(NULL)
{
}

Character::Character(std::string const & t_name): m_ap(40), m_name(t_name)
{
}

Character::~Character()
{
	std::cout << "Character just died (" << std::endl;
}

void Character::operator = (const Character & t_inst)
{
	m_name = t_inst.m_name;
	m_ap = t_inst.m_ap;
	m_weapon = t_inst.m_weapon;
}

Character::Character(const Character & t_inst): m_ap(t_inst.m_ap),
	m_name(t_inst.m_name), m_max_ap(t_inst.m_max_ap),
	m_weapon(t_inst.m_weapon)
{
}

void Character::attack(Enemy *enemy)
{
	if (m_ap >= m_weapon->getAPCost())
	{
		m_ap -= m_weapon->getAPCost();
		std::cout << m_name << " attacks " << enemy->getType() << \
		" with a " << m_weapon->getName() << std::endl; 
		m_weapon->attack();
		enemy->takeDamage(m_weapon->getDamage());
		if (enemy->getHP() == 0)
			delete enemy;
		return ;
	}
	std::cout << "Not enough AP for that action" << std::endl;
}

std::string const & Character::getName() const
{
	return m_name;
}

int Character::getAP() const
{
	return m_ap;
}

const AWeapon * Character::getWeapon() const
{
	return m_weapon;
}

void Character::recoverAP()
{
	if (m_ap + 10 > m_max_ap)
	{
		m_ap = m_max_ap;
		return ;
	}
	m_ap += 10;
}

void Character::equip(AWeapon * weapon)
{
	m_weapon = weapon;
}

std::ostream & operator << (std::ostream & output, const Character & t_inst)
{
	if (t_inst.getWeapon() != NULL)
	{
		output << t_inst.getName() + " has " << t_inst.getAP() << \
		" AP and wields a " + t_inst.getWeapon()->getName() << std::endl;
	}
	else
	{
		output << t_inst.getName() + " has " << t_inst.getAP() << \
		"AP and is unarmed " << std::endl;
	}
	return output;
}
