/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:26:05 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:29:38 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include 	"ScavTrap.hpp"
# include 	"FragTrap.hpp"
# define 	CYAN "\033[36m"

class DiamondTrap : public Scavtrap, public Fragtrap
{
	public:
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		DiamondTrap &	operator=(const DiamondTrap& rhs);
		~DiamondTrap(void);
		void	whoAmI(void);
	private:
		std::string	_name;
};

#endif