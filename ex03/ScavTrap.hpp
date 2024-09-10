/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:22:26 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:18:37 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# define S_EP 50
# define S_AD 20
# define BLUE "\033[34m"

class ScavTrap : virtual public Claptrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);
		ScavTrap &	operator=(const ScavTrap& rhs);
		~ScavTrap(void);
		void		guardGate(void);
		void		attack(std::string const & target);
};

#endif