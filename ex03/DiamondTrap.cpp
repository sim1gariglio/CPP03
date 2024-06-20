/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:28:13 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:41:26 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : Claptrap(name + "_clap_name"), Scavtrap(name), Fragtrap(name)
{
	this->_name = name;
	this->_hitPoints = F_HP;
	this->_energyPoints = S_EP;
	this->_attackDamage = F_AD;
	std::cout << CYAN << "DiamondTrap constructor called" << std::endl;
}