#include "Squad.hpp"

Squad::Squad(): m_count(0), m_squad(NULL)
{
}

Squad::~Squad()
{
	if (m_count)
	{
		delete [] (m_squad);
	}
}

Squad::Squad(Squad const& src)
{
	m_count = 0;
	*this = src;
}

Squad& Squad::operator=(Squad const& src)
{
	if (m_count)
	{
		for (int i = 0; i < m_count; i++)
		{
			delete m_squad[i];
		}
		delete m_squad;
	}
	m_count = 0;
	for (int i = 0; i < src.getCount(); i++)
	{
		push(src.getUnit(i));
	}
	return *this;
}

ISpaceMarine * Squad::getUnit(int t_num) const
{
	if (!m_squad)
	{
		if (t_num >= 0 && t_num < m_count)
		{
			return m_squad[t_num];
		}
	}
	return NULL;
}

int Squad::push(ISpaceMarine * unit)
{
	if (unit)
	{
		if (m_count)
		{
			std::cout << "hsldh" << std::endl;
			ISpaceMarine **new_squad = new ISpaceMarine*[m_count + 1];
			for (int i = 0; i < m_count; i++)
			{
				new_squad[i] = m_squad[i];
			}
			new_squad[m_count + 1] = unit;
			m_count++;
			delete(m_squad);
			m_squad = new_squad;
		}
		else
		{
			m_squad = new ISpaceMarine*[1];
			m_squad[0] = unit;
			m_count++;
		}
	}
	return m_count;
}

int Squad::getCount() const 
{
	return m_count;
}
