/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:52:36 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class	WrongDog: public WrongAnimal
{
	public:
		WrongDog(void) : WrongAnimal(TYPE_DOG) {};
		WrongDog(const WrongDog &a) : WrongAnimal(a._type) {};
		~WrongDog(void);
		WrongDog	&operator=(const WrongDog &);
};

#endif