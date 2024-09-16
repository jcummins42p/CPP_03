/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:20:27 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/16 14:41:05 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap ( void );
		ScavTrap ( std::string name );
		ScavTrap ( const ScavTrap &scavtrap );
		ScavTrap &operator=(const ScavTrap &scavtrap );
		~ScavTrap ( void );

		//void	attack( const std::string &target );
		void	guardGate( void );
	private:
} ;

#endif
