/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 17:03:01 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string> 
# include "Animal.h"

class	Animal
{
	public:
		Animal(void);
		Animal(const Animal &a) : _type(a._type) {};
		virtual ~Animal(void);
		Animal			&operator=(const Animal &);
		virtual void	makeSound(void) = 0;
		std::string		getType(void) const;
		void			setType(const std::string&);
	protected:
		Animal(const std::string&);
		std::string		_type;
};

#endif