/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:23:01 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/10 16:23:50 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap ( void ) : ClapTrap()
{
	_hp = 100;
	_ep = 100;
	_attack = 30;
	std::cout << "Created a new FragTrap called " << _name << std::endl;
}

FragTrap::FragTrap ( std::string name ) : ClapTrap( name )
{
	_hp = 100;
	_ep = 100;
	_attack = 30;
	std::cout << "Created a new FragTrap called " << _name << std::endl;
}

FragTrap::FragTrap ( const FragTrap &other ) : ClapTrap(other)
{
	_name = other._name;
	_hp = other._hp;
	_ep = other._ep;
	_attack = other._attack;
	std::cout << "Created a copied FragTrap called " << _name << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap &other )
{
	if (this != &other )
	{
		ClapTrap::operator=(other);
	}
	std::cout << "Created a copy assigned FragTrap called " << _name << std::endl;
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destroyed FragTrap called " << _name << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "FragTrap " << _name << " high fives some guys I guess?" << std::endl;
}
