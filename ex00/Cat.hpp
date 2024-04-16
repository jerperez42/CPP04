/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 11:51:16 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(void) : Animal(TYPE_CAT) {};
		Cat(const Cat &a) : Animal(a._type) {};
		~Cat(void);
		Cat	&operator=(const Cat &);
};

#endif