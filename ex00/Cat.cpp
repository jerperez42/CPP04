/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:12:52 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void)
{
	;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
