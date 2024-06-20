/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/06/20 10:15:38 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	Claptrap claptrap("Simone");
	Claptrap claptrap2("sgarigli");
	
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