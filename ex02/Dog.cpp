/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 16:41:28 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream> 

Dog::Dog(void)
{
	std::cout << ANSI_COLOR << "Dog: " << this << ": " << INFO_DFLT_MSG << ANSI_END << std::endl;
	this->setType(TYPE_DOG);
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << ANSI_COLOR << "Dog: " << this << ": " << INFO_CPY_MSG << ANSI_END << std::endl;
	*this = other;
}

Dog::~Dog(void)
{
	std::cout << ANSI_COLOR << "Dog: " << this << ": " << INFO_DESTR_MSG << ANSI_END << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain();
		this->_brain->setIdeas(other._brain->getIdeas());
	}
	return (*this);
}

Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}
