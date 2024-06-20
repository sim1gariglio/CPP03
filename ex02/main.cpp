/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 11:12:36 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	Claptrap claptrap("sgarigli");
	Scavtrap scavtrap("gduranti");
	Fragtrap fragtrap("mruggier");

	claptrap.attack(scavtrap);
	scavtrap.attack(claptrap);
	scavtrap.guardGate();
	fragtrap.highFivesGuys();
	
	return 0;
}