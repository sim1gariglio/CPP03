/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 12:18:37 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	Claptrap sgarigli("sgarigli");
	ScavTrap gduranti("gduranti");
	FragTrap mruggier("mruggier");

	sgarigli.attack("gduranti");
	gduranti.attack("mruggier");
	gduranti.guardGate();
	mruggier.highFivesGuys();
	
	return 0;
}