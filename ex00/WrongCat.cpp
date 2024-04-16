/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:53:40 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void)
{
	;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
