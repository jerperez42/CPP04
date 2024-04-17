/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 14:50:35 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "AMateria.h"
#include <iostream>

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	if (TYPE_ICE == this->_type)
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (TYPE_CURE == this->_type)
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	else
		; //error
}