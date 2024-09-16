/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:37:37 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 15:42:06 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	testClapTrap()
{
	ClapTrap	a("Callum");
	ClapTrap	b(a);

	b.takeDamage(3);
	b.beRepaired(1);
	for (int i = 0; i < 11; i++)
		b.attack("Keith");
	b.beRepaired(1);
}

void	testScavTrap()
{
	ScavTrap	a("Simon");
	ScavTrap	b(a);

	b.takeDamage(3);
	b.beRepaired(1);
	for (int i = 0; i < 11; i++)
		b.attack("Keith");
	b.beRepaired(1);
	//a.highFivesGuys();
	b.guardGate();
}

void	testFragTrap()
{
	FragTrap	a("Fred");
	FragTrap	b(a);

	b.takeDamage(3);
	b.beRepaired(1);
	for (int i = 0; i < 11; i++)
		b.attack("Keith");
	b.beRepaired(1);
	b.highFivesGuys();
	//a.guardGate();
}

void	testDiamondTrap(DiamondTrap *test)
{
	DiamondTrap	*diamond = new DiamondTrap(*test);

	diamond->takeDamage(80);
	diamond->beRepaired(1);
	for (int i = 0; i < 11; i++)
		diamond->attack("Keith");
	diamond->beRepaired(1);
	diamond->highFivesGuys();
	diamond->guardGate();
	diamond->whoAmI();

	delete diamond;
}

int	main(void)
{
	DiamondTrap *test = new DiamondTrap("Danny");

	testClapTrap();
	testScavTrap();
	testFragTrap();
	testDiamondTrap(test);

	delete test;
	return (0);
}
