/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerperez <jerperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:54:29 by jerperez          #+#    #+#             */
/*   Updated: 2024/04/16 13:51:28 by jerperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string> 
# include "Brain.h"

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain &);
		~Brain(void);
		Brain				&operator=(const Brain &);
		std::string	const	*getIdeas(void) const;
		void				setIdeas(const std::string*);
	private:
		std::string		_ideas[BRAIN_IDEA_NUM];
};

#endif