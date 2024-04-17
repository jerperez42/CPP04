/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 10:53:33 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

~MateriaSource(void)
{
	;
}

MateriaSource(void)
{
	for (size_t i = 0; i < SOURCE_N; i++)
		this->_slot[i] = nullptr;
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (size_t i = 0; i < SOURCE_N; i++)
	{
		if (nullptr == this->_slot[i])
			this->_slot[i] = m;
	}
}

AMateria* createMateria(const std::string& type)
{
	for (size_t i = 0; i < SOURCE_N; i++)
	{
		if (nullptr != this->_slot[i] && type == this->_slot[i]->getType())
			return (this->_slot[i]->clone());
	}
}
