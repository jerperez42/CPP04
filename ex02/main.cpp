/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 17:19:39 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

int _main42(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	return 0;
}

int main( void )
{
	std::cout << std::endl << "-------42-------" << std::endl << std::endl;
	{
		_main42();
	}

	std::cout << std::endl << "-------Sound-------" << std::endl << std::endl;
	{
		Cat cat;
		std::cout << cat.getType() << ": ";
		cat.makeSound();
		Dog dog;
		std::cout << dog.getType() << ": ";
		dog.makeSound();
	}

	//This should be a compilation error (abstract class):
	//Animal chicken;

	std::cout << std::endl;
	
	return (0);
}