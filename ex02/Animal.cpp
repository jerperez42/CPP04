/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 14:53:50 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream> 

Animal::~Animal(void)
{
	std::cout << ANSI_COLOR << "Animal: " << this << ": " << INFO_DESTR_MSG << ANSI_END << std::endl;
}

Animal::Animal(void)
{
	std::cout << ANSI_COLOR << "Animal: " << this << ": " << INFO_DFLT_MSG << ANSI_END << std::endl;
	this->_type = TYPE_ANIMAL;
}

Animal::Animal(const std::string& type)
{
	std::cout << ANSI_COLOR << "Animal: " << this << ": " << INFO_STR_MSG << ANSI_END << std::endl;
	this->_type = type;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	if (TYPE_DOG == this->getType())
		std::cout << DOG_SOUND << std::endl;
	else if (TYPE_CAT == this->getType())
		std::cout << CAT_SOUND << std::endl;
	else
		std::cout << ANIMAL_SOUND << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(const std::string& type) 
{
	this->_type = type;
}