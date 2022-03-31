/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:44:26 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 13:46:50 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define  __CLAPTRAP_HPP__

#include <iostream>
class ClapTrap
{
    private:
        std::string _Name;
        int         _HitPoint;
        int         _EnergyPoint;
        int         _AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap( const ClapTrap &obj);
        std::string getName(void) const ;
        int         getHealth(void) const ;
        int         getEnergy(void) const ;
        int         getDamage(void) const ;
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap &operator=(const ClapTrap &obj);
        ~ClapTrap();
};

#endif