/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:28:10 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/17 16:23:11 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
class Amateria;
# include <string>
# define SOURCE_N 4

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_slot[SOURCE_N];
		void	_slotclear(void);
	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(const MateriaSource&);
		MateriaSource	&operator=(const MateriaSource&);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
