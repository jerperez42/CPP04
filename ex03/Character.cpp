/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 14:41:45 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"


Character::Character(const std::string& name)
{
	this->_name = name;
	for (int idx = 0; idx < SLOT_N; idx++)
		this->_slot[idx] = 0;
}

Character::~Character(void)
{
	this->_slotclear();
}

Character::Character(const Character& other)
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_slotclear();
		for (int idx = 0; idx < SLOT_N; idx++)
		{
			if (0 != other._slot[idx])
				this->_slot[idx] = other._slot[idx]->clone();
		}
	}
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int idx = 0; idx < SLOT_N; idx++)
	{
		if (0 == this->_slot[idx])
		{
			this->_slot[idx] = m;
			return ;
		}
	}
}


void	Character::unequip(int idx)
{
	this->_slot[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if (-1 < idx && SLOT_N > idx && 0 != this->_slot[idx])
		this->_slot[idx]->use(target);
}

void	Character::_slotclear(void)
{
	AMateria *m;
	for (int idx = 0; idx < SLOT_N; idx++)
	{
		if (0 != this->_slot[idx])
		{
			m = this->_slot[idx];
			for (int i = idx; i < SLOT_N; i++)
			{
				if (m == this->_slot[i])
					this->_slot[i] = 0;
			}
			delete m;
			this->_slot[idx] = 0;
		}
	}
}
