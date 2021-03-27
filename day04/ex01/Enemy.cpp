#include "Enemy.hpp"

Enemy::Enemy() : m_hp(30), m_type("Blind Minecrawler")
{
}

Enemy::Enemy(int hp, std::string const & type) : m_hp(hp), m_type(type)
{
}

Enemy::Enemy(const Enemy & t_inst): m_hp(t_inst.m_hp), m_type(t_inst.m_type)
{
}

Enemy::~Enemy()
{
}

void Enemy::operator = (const Enemy & t_inst)
{
	m_hp = t_inst.m_hp;
	m_type = t_inst.m_type;
}

std::string const & Enemy::getType() const
{
	return m_type;
}

int Enemy::getHP() const
{
	return m_hp;
}

void Enemy::takeDamage(int damage)
{
	if (m_hp - damage > 0)
	{
		m_hp -= damage;
		return ;
	}
	m_hp = 0;
}
