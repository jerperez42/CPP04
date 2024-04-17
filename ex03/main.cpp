/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 16:26:30 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <iostream>

int _main42(void)
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

	delete bob;
	delete me;
	delete src;

	return (0);
}

int main(void)
{
	std::cout << "----------42----------"<< std::endl << std::endl;
	_main42();

	std::cout << "----------Character----------"<< std::endl << std::endl;
	{
		std::string name = "carl";
		Character c(name);
		AMateria* m = new Cure();
		AMateria* m2 = new Cure();
		AMateria* m3 = new Cure();
		AMateria* m4 = new Cure();
		AMateria* m5 = new Ice();

		std::cout << name << ": my name is " << c.getName() << std::endl;
		std::cout << name << ":I have nothing" << std::endl;
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << name << ":I have cure" << std::endl;
		c.equip(m);
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << name << ":I equiped the same cure twice" << std::endl;
		c.equip(m);
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << name << ":I equiped another cure" << std::endl;
		c.equip(m2);
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << name << ":I filled my slots with Cures an Ice" << std::endl;
		c.equip(m2);
		c.equip(m3);
		c.equip(m4);
		c.equip(m5);
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << name << "'clone :I cloned myself!" << std::endl;
		Character clone(c);
		for (int i = -10; i < 10; i++)
			clone.use(i, clone);
		std::cout << name << ": I unequiped (1)!" << std::endl;
		c.unequip(1);
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << name << ": I equiped Ice!" << std::endl;
		c.equip(m5);
		for (int i = -10; i < 10; i++)
			c.use(i, c);
		std::cout << "main: deleted (1)" << std::endl;
		delete m2;
	}
}

