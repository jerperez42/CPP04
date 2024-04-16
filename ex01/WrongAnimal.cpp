/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:57:09 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Animal.h"

#include <iostream> 

WrongAnimal::~WrongAnimal(void)
{
	;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	if (TYPE_DOG == this->getType())
		std::cout << CAT_SOUND << std::endl;
	else if (TYPE_CAT == this->getType())
		std::cout << DOG_SOUND << std::endl;
	else
		std::cout << ANIMAL_SOUND << std::endl;
}
