/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 14:50:17 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.h"
#include <iostream> 

Brain::Brain(void)
{
	std::cout << ANSI_COLOR << "Brain: " << this << ": " << INFO_DFLT_MSG << ANSI_END << std::endl;
	for (int i = 0; i < BRAIN_IDEA_NUM; i++)
		this->_ideas[i] = std::string("");
}

Brain::~Brain(void)
{
	std::cout << ANSI_COLOR << "Brain: " << this << ": " << INFO_DESTR_MSG << ANSI_END << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << ANSI_COLOR << "Brain: " << this << ": " << INFO_CPY_MSG << ANSI_END << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
		this->setIdeas(other.getIdeas());
	return (*this);
}

std::string	const *Brain::getIdeas(void) const
{
	const std::string *ideas = this->_ideas;

	return (ideas);
}

void	Brain::setIdeas(const std::string *ideas) 
{
	for (int i = 0; i < BRAIN_IDEA_NUM; i++)
		this->_ideas[i] = ideas[i];
}