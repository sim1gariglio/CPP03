/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:35 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 11:57:50 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define HP 100
# define EP 10
# define AD 0
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RESET "\033[0m"

class Claptrap
{
	public:
		Claptrap();
		Claptrap(std::string name);
		Claptrap(const Claptrap& src);
		Claptrap &	operator=(const Claptrap& rhs);
		~Claptrap(void);
		int 		getHitPoints(void) const;
		unsigned int 		getEnergyPoints(void) const;
		unsigned int 		getAttackDamage(void) const;
		std::string			getName(void) const;
		void				attack(std::string const & target);
		void				takeDamage(const unsigned int amount);
		void				beRepaired(const unsigned int amount);

	protected:
		std::string				_name;
		int						_hitPoints;
		unsigned int			_energyPoints;
		unsigned int			_attackDamage;
};

#endif