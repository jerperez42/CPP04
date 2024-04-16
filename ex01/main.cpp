/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:23:36 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 16:37:24 by jerperez         ###   ########.fr       */
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

	std::cout << std::endl << "-------BRAIN deep copy-------" << std::endl << std::endl;
	{
		Brain				brain;
		std::string 		ideas[100];
		const std::string	*ptr = brain.getIdeas();
		
		for (int i = 0; i < 100; i++)
		{
			if ("" != ptr[i])
				std::cout << "Brain: Error: Born with this idea[" << i << "]="<< ptr[i] << std::endl;
		}
		ideas[0] = "Eat";
		ideas[1] = "Sleep";
		brain.setIdeas(ideas);
		std::cout << ideas[0] << " = " << ptr[0] << std::endl;
		std::cout << ideas[1] << " = " << ptr[1] << std::endl;
		ideas[2] = "Procrastinate";
		std::cout << ideas[2] << " != " << ptr[2] << std::endl;
	}

	// std::cout << std::endl << "-------CAT deep copy-------" << std::endl << std::endl;
	// {
	// 	Cat 				animal;
	// 	Brain 				*brain = animal.getBrain();
	// 	std::string 		ideas[100];
	// 	ideas[0] = "Eat";
	// 	ideas[1] = "Sleep";
	// 	brain->setIdeas(ideas);
	// 	const Cat			clone(animal);
	// 	const Brain			*cloned_brain = clone.getBrain();
	// 	const std::string 	*cloned_ideas = cloned_brain->getIdeas();
	// 	std::cout << ideas[0] << " = " << cloned_ideas[0] << std::endl;
	// 	std::cout << ideas[1] << " = " << cloned_ideas[1] << std::endl;
	// }

	// std::cout << std::endl << "-------DOG deep copy-------" << std::endl << std::endl;
	// {
	// 	Cat 				animal;
	// 	Brain 				*brain = animal.getBrain();
	// 	std::string 		ideas[100];
	// 	ideas[0] = "Eat";
	// 	ideas[1] = "Sleep";
	// 	brain->setIdeas(ideas);
	// 	const Cat			clone(animal);
	// 	const Brain			*cloned_brain = clone.getBrain();
	// 	const std::string 	*cloned_ideas = cloned_brain->getIdeas();
	// 	std::cout << ideas[0] << " = " << cloned_ideas[0] << std::endl;
	// 	std::cout << ideas[1] << " = " << cloned_ideas[1] << std::endl;
	// }

	std::cout << std::endl;
	
	return (0);
}