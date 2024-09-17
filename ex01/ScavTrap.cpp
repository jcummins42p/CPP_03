/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:19:54 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 14:15:29 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
	_hp = 100;
	_ep = 50;
	_attack = 20;
	std::cout << "Created a Scavtrap called " << _name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack = other._attack;
	}
	return (*this);
}

ScavTrap::~ScavTrap() { std::cout << "Destroyed scavtrap " << _name << std::endl; }

void	ScavTrap::attack(const std::string& target) {
	if (_hp <= 0)
	{
		std::cout	<< _name << " is dead and cannot attack." << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout	<< _name << " doesn't have the energy to attack " << target << std::endl;
		return;
	}
	_ep--;
	std::cout	<< _name << " attacks (scavilly) " << target << " for "
				<< _attack << " hp of damage." << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout	<< _name << " is now in Gate Keeper mode" << std::endl;
}
