/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:22:28 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:15:27 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

Scavtrap::Scavtrap(std::string name) : Claptrap(name)
{
	this->_hitPoints = S_HP;
	this->_energyPoints = S_EP;
	this->_attackDamage = S_AD;
	std::cout << "Scavtrap " << name << " has been created!" << std::endl;
}

Scavtrap::Scavtrap(const Scavtrap& src) : Claptrap(src)
{
	*this = src;
	std::cout << "Scavtrap " << _name << " has been created!" << std::endl;
}

Scavtrap &	Scavtrap::operator=(const Scavtrap& rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

Scavtrap::~Scavtrap(void)
{
	std::cout << "Scavtrap " << _name << " has been destroyed!" << std::endl;
}

void		Scavtrap::guardGate(void)
{
	std::cout << BLUE << "Scavtrap " << _name << " has entered in Gate keeper mode." << RESET << std::endl;
}
