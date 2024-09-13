/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/13 10:46:29 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	Claptrap lmicheli("sgarigli");
	ScavTrap gduranti("gduranti");
	FragTrap mruggier("mruggier");
	DiamondTrap tfalchi("lmicheli");

	lmicheli.attack("gduranti");
	gduranti.attack("mruggier");
	gduranti.guardGate();
	mruggier.highFivesGuys();
	tfalchi.whoAmI();

	return 0;
}