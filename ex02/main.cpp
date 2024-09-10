/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:37:37 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/10 16:30:11 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	a("Simon");
	FragTrap	b("Fimon");
	ClapTrap	c(a);
	FragTrap	d;
	
	d = b;

	a.takeDamage(80);
	b.takeDamage(80);
	c.takeDamage(80);
	d.takeDamage(80);

	a.beRepaired(1);
	b.beRepaired(1);
	c.beRepaired(1);
	d.beRepaired(1);

	return (0);
}
