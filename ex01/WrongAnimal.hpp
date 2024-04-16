/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:51:35 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string> 
# include "Animal.hpp"

class	WrongAnimal : public Animal
{
	public:
		WrongAnimal(void) : Animal(TYPE_ANIMAL) {};
		WrongAnimal(const WrongAnimal& a) : Animal(a._type) {};
		~WrongAnimal(void);
		WrongAnimal		&operator=(const WrongAnimal &);
		void			makeSound(void) const;
	protected:
		WrongAnimal(const std::string& type) : Animal(type) {};
};

#endif