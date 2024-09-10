/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:05:21 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:20:32 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include	 "ClapTrap.hpp"
# define 	F_EP 100
# define 	F_AD 30
# define 	PINK "\033[35m"

class FragTrap : virtual public Claptrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);
		FragTrap &	operator=(const FragTrap& rhs);
		~FragTrap(void);
		void		highFivesGuys(void);
};

#endif