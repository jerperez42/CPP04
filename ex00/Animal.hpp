/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:47:48 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string> 
# include "Animal.h"

class	Animal
{
	public:
		Animal(void) : _type(TYPE_ANIMAL) {};
		Animal(const Animal &a) : _type(a._type) {};
		~Animal(void);
		Animal			&operator=(const Animal &);
		void			makeSound(void) const;
		std::string		getType(void) const;
		void			setType(const std::string&);
	protected:
		Animal(const std::string& type) : _type(type) {};
		std::string		_type;
};

#endif