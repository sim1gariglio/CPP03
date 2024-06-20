/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:37 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 10:10:20 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(std::string name) : _name(name)
{
	this->_hitPoints = HP;
	this->_energyPoints = EP;
	this->_attackDamage = AD;
	std::cout << "Claptrap " << _name << " has been created!" << std::endl;
}

Claptrap::Claptrap(const Claptrap& src)
{
	*this = src;
	std::cout << "Claptrap " << _name << " has been created!" << std::endl;
}

Claptrap &	Claptrap::operator=(const Claptrap& rhs)
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

Claptrap::~Claptrap(void)
{
	std::cout << "Claptrap " << _name << " has been destroyed!" << std::endl;
}

int 	Claptrap::getHitPoints(void) const
{
	return this->_hitPoints;
}

unsigned int 	Claptrap::getEnergyPoints(void) const
{
	return this->_energyPoints;
}

unsigned int 	Claptrap::getAttackDamage(void) const
{
	return this->_attackDamage;
}

std::string	Claptrap::getName(void) const
{
	return this->_name;
}

void	Claptrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << RED << "Claptrap " << getName() << " took " << amount << " damage!" << std::endl;
	if (_hitPoints <= 0)
		std::cout << "Claptrap " << getName() << " has no HP left!" << RESET << std::endl;
	else 
		std::cout << "Claptrap " << getName() << " has " << getHitPoints() << " HP left!" << RESET << std::endl;
}

void	Claptrap::beRepaired(const unsigned int amount)
{
	if (getHitPoints() <= 0)
	{
		std::cout << "Claptrap " << getName() << " has no HP left!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << "Claptrap " << getName() << " has no energy left!" << std::endl;
		return;
	}
	_energyPoints--;
	int old = getHitPoints();
	_hitPoints += amount;
	if (getHitPoints() > HP)
		_hitPoints = HP;
	std::cout << GREEN << "Claptrap " << getName() << " has been repaired by " << _hitPoints - old << " HP!" << std::endl;
	std::cout << "Claptrap " << getName() << " has " << getHitPoints() << " HP!" << RESET <<std::endl;
	if (getHitPoints() == HP)
		std::cout << GREEN << "Claptrap " << getName() << " has full HP!" << RESET << std::endl;
}

void	Claptrap::attack(Claptrap& target)
{
	if (getHitPoints() <= 0)
	{
		std::cout << "Claptrap " << getName() << " has no HP left!" << std::endl;
		return;
	}
	if (getEnergyPoints() == 0)
	{
		std::cout << "Claptrap " << getName() << " has no energy left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << YELLOW << "Claptrap " << getName() << " attacks " << target.getName() << " causing " << getAttackDamage() << " points of damage!" <<  RESET <<std::endl;
	target.takeDamage(getAttackDamage());
}
