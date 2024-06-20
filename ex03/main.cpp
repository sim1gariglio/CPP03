/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 12:20:02 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	Claptrap claptrap("sgarigli");
	Scavtrap scavtrap("gduranti");
	Fragtrap fragtrap("mruggier");
	DiamondTrap diamondtrap("lmicheli");

	claptrap.attack(scavtrap);
	scavtrap.attack(claptrap);
	scavtrap.guardGate();
	fragtrap.highFivesGuys();
	
	return 0;
}