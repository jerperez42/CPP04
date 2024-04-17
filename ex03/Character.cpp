/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 10:33:20 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	Character::Character(const std::string& name)
{
	this->_name = name;
	for (int idx = 0; idx < SLOT_N; idx++)
		this->_slot[idx] = nullptr;
}

void	Character::~Character(void)
{
	;
}

std::string const	&Character::getName(void)
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int idx = 0; idx < SLOT_N; idx++)
	{
		if (nullptr == this->_slot[idx])
			this->_slot[idx] = m;
	}
}


void	Character::unequip(int idx)
{
	this->_slot[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	if (-1 < idx && SLOT_N > idx && nullptr != this->_slot[idx])
		this->_slot[idx]->use(*this);
}
