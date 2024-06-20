/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:05:24 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 12:01:13 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

Fragtrap::Fragtrap(std::string name) : Claptrap(name)
{
	this->_hitPoints = F_HP;
	this->_energyPoints = F_EP;
	this->_attackDamage = F_AD;
	std::cout << "Fragtrap " << name << " has been created!" << std::endl;
}

Fragtrap::Fragtrap(const Fragtrap& src) : Claptrap(src)
{
	*this = src;
	std::cout << "Fragtrap " << getName() << " has been created!" << std::endl;
}

Fragtrap &	Fragtrap::operator=(const Fragtrap& rhs)
{
	std::cout << "Fragtrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		_hitPoints = rhs._hitPoints;
		_energyPoints = rhs._energyPoints;
		_attackDamage = rhs._attackDamage;
	}
	return *this;
}

Fragtrap::~Fragtrap(void)
{
	std::cout << "Fragtrap " << getName() << " has been destroyed!" << std::endl;
}

void		Fragtrap::highFivesGuys(void)
{
	std::cout << PINK << getName() << " is asking for a high five!🙌" << RESET << std::endl;
}