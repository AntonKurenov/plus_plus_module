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
	Character* you = new Character("you");
	Character qwert("qwewt");
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
	me->use(0, *you);
	me->use(1, *you);
	me->use(2, *you);
	me->use(3, *you);
	ICharacter* last = new Character(*me);
	std::cout << last->getName() << std::endl;
	delete me;
	delete src;
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
	next_test();
	delete bob;
	delete me;
	delete src;
	return 0;
}
