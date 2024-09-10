/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <sgarigli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 09:15:33 by sgarigli          #+#    #+#             */
/*   Updated: 2024/09/10 10:12:34 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	Claptrap claptrap("Simone");
	Claptrap claptrap2("sgarigli");
	
	claptrap2.attack("Simone");
	claptrap2.takeDamage(0);
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