/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:18:35 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/10 16:26:06 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) : 
	_name("Defaulto")
{
	std::cout << "Created a new ClapTrap called " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hp(10),
	_ep(10),
	_attack(0)
{
	std::cout << "Created a new ClapTrap called " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) :
	_name(claptrap._name),
	_hp(claptrap._hp),
	_ep(claptrap._ep),
	_attack(claptrap._attack) {
	std::cout << "Created a copied ClapTrap called " << _name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_attack = other._attack;
	}
	std::cout << "Created a copy assigned ClapTrap called " << _name << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() { std::cout << "Destroyed ClapTrap " << _name << std::endl; }

void	ClapTrap::attack(const std::string& target) {
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
				<< _attack << " hp of damage." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hp <= 0)
	{
		std::cout	<< _name << " is alread dead!!!" << std::endl;
		return;
	}
	_hp -= amount;
	std::cout 	<< _name << " has taken " << amount << " damage. "
				<< _hp << " hp remain." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hp <= 0)
	{
		std::cout	<< _name << " is dead and cannot repair." << std::endl;
		return;
	}
	if (_ep <= 0)
	{
		std::cout	<< _name << " doesn't have the energy to repair itself" << std::endl;
		return;
	}
	_hp += amount;
	_ep--;
	std::cout 	<< _name << " has repaired " << amount << " hp. "
				<< _hp << " hp remain." << std::endl;
}
