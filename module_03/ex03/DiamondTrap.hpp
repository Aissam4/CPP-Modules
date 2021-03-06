/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:35:45 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/01 17:27:17 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap( std::string Name );
        DiamondTrap( const DiamondTrap &obj);
		DiamondTrap & operator = ( const DiamondTrap &obj );
		void	attack( std::string const & target );
        void whoAmI();
        ~DiamondTrap();
    private:
        std::string _Name;
};
#endif