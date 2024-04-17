/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 15:02:51 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria(std::string const &type) : _type(type) {};

		AMateria(void) {};
		virtual ~AMateria(void) {};

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
