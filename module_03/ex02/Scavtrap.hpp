/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:04:24 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 21:37:15 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__
#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( std::string Name );
        ScavTrap( const ScavTrap &obj);
		ScavTrap & operator = ( const ScavTrap &obj );
		void	attack( std::string const & target );
        void guardGate( void );
        ~ScavTrap();
};
#endif