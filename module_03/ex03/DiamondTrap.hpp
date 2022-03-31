/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:35:45 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 22:42:37 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
class DiamondTrap : public ClapTrap, public ScavTrap
{
    public:
        DiamondTrap();
        DiamondTrap( std::string Name );
        DiamondTrap( const DiamondTrap &obj);
		DiamondTrap & operator = ( const DiamondTrap &obj );
		void	attack( std::string const & target );
        void highFivesGuys();
        ~DiamondTrap();
    private:
        std::string _Name;
};
#endif