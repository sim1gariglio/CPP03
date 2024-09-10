/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:37 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:11:10 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(void)
{
	this->_name = "Claptrap";
	this->_hitPoints = HP;
	this->_energyPoints = EP;
	this->_attackDamage = AD;
	std::cout << "Claptrap default constructor has been called!" << std::endl;
}

Claptrap::Claptrap(std::string name) : _name(name)
{
	this->_hitPoints = HP;
	this->_energyPoints = EP;
	this->_attackDamage = AD;
	std::cout << "Claptrap " << _name << " has been created!" << std::endl;
	std::cout << name << " has " << getHitPoints() << " hit points, " << getEnergyPoints() << " energy points and " << getAttackDamage() << " attack damage." << std::endl;
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
	std::cout << RED << getName() << " took " << amount << " damage!" << std::endl;
	if (_hitPoints <= 0)
		std::cout << getName() << " has no HP left!" << RESET << std::endl;
	else 
		std::cout << getName() << " has " << getHitPoints() << " HP left!" << RESET << std::endl;
}

void	Claptrap::beRepaired(const unsigned int amount)
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
	int old = getHitPoints();
	_hitPoints += amount;
	if (getHitPoints() > HP)
		_hitPoints = HP;
	std::cout << GREEN << getName() << " has been repaired by " << _hitPoints - old << " HP!" << std::endl;
	std::cout << getName() << " has " << getHitPoints() << " HP!" << RESET <<std::endl;
	if (getHitPoints() == HP)
		std::cout << GREEN << getName() << " has full HP!" << RESET << std::endl;
}

void Claptrap::attack(std::string const & target)
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
	std::cout << YELLOW << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!" <<  RESET <<std::endl;
}
