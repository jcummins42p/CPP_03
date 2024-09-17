/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:37:37 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 15:01:11 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("Simon");
	ScavTrap	b(a);
	b.attack("Alastair");
	b.takeDamage(2);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.takeDamage(6);
	b.takeDamage(6);
	b.takeDamage(6);
	b.attack("Alastair");
	b.takeDamage(2);
	b.beRepaired(1);
	b.beRepaired(1);
	b.guardGate();
	return (0);
}
