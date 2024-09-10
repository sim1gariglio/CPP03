/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:05:24 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:30:15 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : Claptrap()
{
	this->_name = "FragTrap";
	this->_hitPoints = Claptrap::getHitPoints();
	this->_energyPoints = F_EP;
	this->_attackDamage = F_AD;
	std::cout << "FragTrap default constructor has been called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : Claptrap(name)
{
	this->_hitPoints = Claptrap::getHitPoints();
	this->_energyPoints = F_EP;
	this->_attackDamage = F_AD;
	std::cout << "FragTrap " << getName() << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : Claptrap(src)
{
	*this = src;
	std::cout << "FragTrap " << getName() << " has been created!" << std::endl;
}

FragTrap &	FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << getName() << " has been destroyed!" << std::endl;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << PINK << getName() << " high fives guys!" << RESET << std::endl;
}