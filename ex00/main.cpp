/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 10:11:05 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	Claptrap claptrap("Simone");
	Claptrap claptrap2("sgarigli");
	
	std::cout << claptrap.getName() << " has " << claptrap.getHitPoints() << " hit points, " << claptrap.getEnergyPoints() << " energy points and " << claptrap.getAttackDamage() << " attack damage." << std::endl;
	std::cout << claptrap2.getName() << " has " << claptrap2.getHitPoints() << " hit points, " << claptrap2.getEnergyPoints() << " energy points and " << claptrap2.getAttackDamage() << " attack damage." << std::endl;
	claptrap.attack(claptrap2);
	claptrap2.takeDamage(3);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	claptrap2.beRepaired(5);
	return 0;
}