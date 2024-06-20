/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 10:22:28 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:59:59 by sgarigli         ###   ########.fr       */
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
	std::cout << BLUE << _name << " has entered in Gate keeper mode." << RESET << std::endl;
}

void		Scavtrap::attack(std::string const & target)
{
	std::cout << YELLOW << _name << " attacks like a Scavtrap " << target << ", causing " << _attackDamage << " points of damage!" << RESET << std::endl;
}

void	Scavtrap::attack(Claptrap& target)
{
	if (getHitPoints() <= 0)
	{
		std::cout << getName() << " has no HP left!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << getName() << " has no energy left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << YELLOW << getName() << " attacks like a Scavtrap " << target.getName() << " causing " << getAttackDamage() << " points of damage!" <<  RESET <<std::endl;
	target.takeDamage(getAttackDamage());
}