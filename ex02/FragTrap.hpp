/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcummins <jcummins@student.42prague.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:15:55 by jcummins          #+#    #+#             */
/*   Updated: 2024/09/17 15:07:06 by jcummins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap ( void );
		FragTrap ( std::string name );
		FragTrap ( const FragTrap &other );
		FragTrap &operator=( const FragTrap &other );
		~FragTrap ( void );

		void	highFivesGuys( void );
	private:
} ;

#endif
