/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 12:06:43 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

#include <iostream>

int _main42(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	return 0;
}

int main( void )
{
	std::cout << std::endl << "-------42-------" << std::endl << std::endl;
	{
		_main42();
	}

	std::cout << std::endl << "-------ANIMAL-------" << std::endl << std::endl;
	{
		Animal animal;
		std::cout << animal.getType() << ": ";
		animal.makeSound();
		animal.setType("Chicken");
		std::cout << animal.getType() << ": ";
		animal.makeSound();
		Animal clone;
		clone = animal;
		std::cout << clone.getType() << "(chicken clone): ";
		clone.makeSound();
	}

	std::cout << std::endl << "-------CAT-------" << std::endl << std::endl;
	{
		Cat cat;
		std::cout << cat.getType() << ": ";
		cat.makeSound();
		Cat clone(cat);
		std::cout << clone.getType() << ": ";
		clone.makeSound();
	}

	std::cout << std::endl << "-------DOG-------" << std::endl << std::endl;
	{
		Dog dog;
		std::cout << dog.getType() << ": ";
		dog.makeSound();
		Dog clone(dog);
		std::cout << clone.getType() << ": ";
		clone.makeSound();
	}

	std::cout << std::endl << "-------WRONG ANIMAL-------" << std::endl << std::endl;
	{
		WrongAnimal wanimal;
		std::cout << wanimal.getType() << ": ";
		wanimal.makeSound();
		wanimal.setType("Chicken");
		std::cout << wanimal.getType() << ": ";
		wanimal.makeSound();
		Animal wclone;
		wclone = wanimal;
		std::cout << wclone.getType() << "(chicken clone): ";
		wclone.makeSound();
	}

	std::cout << std::endl << "-------WRONG CAT-------" << std::endl << std::endl;
	{
		WrongCat wcat;
		std::cout << wcat.getType() << ": ";
		wcat.makeSound();
		WrongCat clone(wcat);
		std::cout << clone.getType() << ": ";
		clone.makeSound();
	}

	std::cout << std::endl << "-------WRONG DOG-------" << std::endl << std::endl;
	{
		WrongDog wdog;
		std::cout << wdog.getType() << ": ";
		wdog.makeSound();
		WrongDog clone(wdog);
		std::cout << clone.getType() << ": ";
		clone.makeSound();
	}


	std::cout << std::endl;
	
	return (0);
}