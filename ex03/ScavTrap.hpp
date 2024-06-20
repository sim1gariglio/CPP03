/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:22:26 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:47:14 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# define S_HP 100
# define S_EP 50
# define S_AD 20
# define BLUE "\033[34m"

class Scavtrap : public Claptrap
{
	public:
		Scavtrap(std::string name);
		Scavtrap(const Scavtrap& src);
		Scavtrap &	operator=(const Scavtrap& rhs);
		~Scavtrap(void);
		void		guardGate(void);
		void		attack(std::string const & target);
		void		attack(Claptrap& target);
};

#endif