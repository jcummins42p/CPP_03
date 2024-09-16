/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:51:49 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 15:45:19 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

//	the diamond problem occurs when two superclasses of a class have a common
//	base class. The constructor of the base clas is called once for each super-
//	class, giving the diamond class two sopies of all members of the base class.
//	The solution to this to use the virtual keyword with the two base super-
//	classes.
class	DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &other );
		DiamondTrap &operator=( const DiamondTrap &other );
		~DiamondTrap ( void );

		void	whoAmI( void ) const;
		void	attack( const std::string &target );
	private:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_attack;
} ;

#endif
