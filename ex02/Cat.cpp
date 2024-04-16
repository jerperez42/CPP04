/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 16:41:24 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream> 

Cat::Cat(void)
{
	std::cout << ANSI_COLOR << "Cat: " << this << ": " << INFO_DFLT_MSG << ANSI_END << std::endl;
	this->setType(TYPE_CAT);
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << ANSI_COLOR << "Cat: " << this << ": " << INFO_CPY_MSG << ANSI_END << std::endl;
	*this = other;
}

Cat::~Cat(void)
{
	std::cout << ANSI_COLOR << "Cat: " << this << ": " << INFO_DESTR_MSG << ANSI_END << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		this->_brain = new Brain();
		this->_brain->setIdeas(other._brain->getIdeas());
	}
	return (*this);
}

Brain	*Cat::getBrain(void) const
{
	return (this->_brain);
}
