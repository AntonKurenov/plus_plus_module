#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void next_test()
{
	std::cout << "======================================================================" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	Character* jack = new Character("jack");
	AMateria* tmp;
	AMateria* tmp2;
	tmp = src->createMateria("ice");
	tmp->use(*me);
	tmp->use(*me);
	tmp->use(*me);
	std::cout << "XP = " << tmp->getXP() << std::endl;
	tmp2 = tmp->clone();
	std::cout << "XP_2 = " << tmp->getXP() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *jack);
	me->use(1, *jack);
	me->use(2, *jack);
	me->use(3, *jack);
	ICharacter* last = new Character(*me);
	std::cout << "Test copy constructor : " + last->getName() << std::endl;
	last->use(0, *jack);
	last->use(1, *jack);
	last->use(2, *jack);
	last->use(3, *jack);
	delete me;
	delete src;
	delete last;
	delete jack;
	delete tmp;
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	// next_test();
	delete bob;
	delete me;
	delete src;
	return 0;
}
