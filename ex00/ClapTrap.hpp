/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:14:36 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/10 14:35:40 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap	( std::string name );
		ClapTrap	( const ClapTrap &claptrap );
		ClapTrap 	&operator=( const ClapTrap &claptrap );
		~ClapTrap	( void );

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_attack;
} ;

#endif
