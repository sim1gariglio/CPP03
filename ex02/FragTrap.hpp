/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:05:21 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:28:04 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include	 "ClapTrap.hpp"
# define 	F_HP 100
# define 	F_EP 100
# define 	F_AD 30
# define 	PINK "\033[35m"

class Fragtrap : public Claptrap
{
	public:
		Fragtrap(std::string name);
		Fragtrap(const Fragtrap& src);
		Fragtrap &	operator=(const Fragtrap& rhs);
		~Fragtrap(void);
		void		highFivesGuys(void);
};

#endif