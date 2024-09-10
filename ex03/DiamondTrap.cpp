/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:28:13 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:28:17 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : Claptrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap " << _name << " has been created!" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : Claptrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
	std::cout << "DiamondTrap " << _name << " has been created!" << RESET << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(const DiamondTrap& rhs)
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

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " has been destroyed!" << RESET << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << CYAN << "My name is " << _name << " and my Claptrap name is " << Claptrap::getName() << RESET << std::endl;
}
