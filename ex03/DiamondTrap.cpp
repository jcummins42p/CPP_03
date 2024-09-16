/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:03:41 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 16:31:23 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iomanip>

DiamondTrap::DiamondTrap( std::string name ) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	_name(name),
	_hp(100),
	_ep(50),
	_attack(30)
{
	std::cout << "Created a new DiamondTrap called " << _name << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &other ) :
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other),
	_name(other._name),
	_hp(other._hp),
	_ep(other._ep),
	_attack(other._attack)
{
	//_name = other._name;
	//_hp = other._hp;
	//_ep = other._ep;
	//_attack = other._attack;
	std::cout << "Created a copy DiamondTrap called " << _name << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap &other )
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack = other._attack;
	}
	std::cout << "Created a copy assigned DiamondTrap called " << _name << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destroyed Diamondtrap " << _name << std::endl;
}

void	DiamondTrap::attack ( const std::string &target )
{
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
	std::cout	<< _name << " attacks " << target << " for "
				<< _attack << " hp of damage. ("
				<< _ep << " ep remain)" << std::endl;
}

void	DiamondTrap::whoAmI ( void ) const
{
	std::cout 	<< std::left
				<< std::setw(20) << "Name: " << _name << std::endl
				<< std::setw(20) << "ClapTrap Name:" << ClapTrap::_name << std::endl
				<< std::setw(20) << "hp: " << _hp << std::endl
				<< std::setw(20) << "ep: " << _ep << std::endl
				<< std::setw(20) << "attack: " << _attack
				<< std::endl;
}
