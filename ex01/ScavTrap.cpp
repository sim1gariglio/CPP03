/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:22:28 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:30:19 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : Claptrap()
{
	this->_name = "ScavTrap";
	this->_hitPoints = Claptrap::getHitPoints();
	this->_energyPoints = S_EP;
	this->_attackDamage = S_AD;
	std::cout << "ScavTrap default constructor has been called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : Claptrap(name)
{
	this->_hitPoints = Claptrap::getHitPoints();
	this->_energyPoints = S_EP;
	this->_attackDamage = S_AD;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : Claptrap(src)
{
	*this = src;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap &	ScavTrap::operator=(const ScavTrap& rhs)
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

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

void		ScavTrap::guardGate(void)
{
	std::cout << BLUE << _name << " has entered in Gate keeper mode." << RESET << std::endl;
}

void		ScavTrap::attack(std::string const & target)
{
	std::cout << YELLOW << _name << " attacks like a ScavTrap " << target << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
}
