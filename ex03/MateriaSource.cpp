/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 14:46:10 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::~MateriaSource(void)
{
	this->_slotclear();
}

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < SOURCE_N; i++)
		this->_slot[i] = 0;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < SOURCE_N; i++)
	{
		if (0 == this->_slot[i])
		{
			this->_slot[i] = m;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (size_t i = 0; i < SOURCE_N; i++)
	{
		if (0 != this->_slot[i] && type == this->_slot[i]->getType())
			return (this->_slot[i]->clone());
	}
	return (0);
}

void MateriaSource::_slotclear(void)
{
	AMateria	*m;

	for (size_t idx = 0; idx < SOURCE_N; idx++)
	{
		if (0 != this->_slot[idx])
		{
			m = this->_slot[idx];
			for (size_t i = idx; i < SOURCE_N; i++)
			{
				if (m == this->_slot[i])
					this->_slot[i] = 0;
			}
			delete m;
			_slot[idx] = 0;
		}
	}
}
