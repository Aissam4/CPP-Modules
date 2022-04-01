/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:35:46 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/01 17:31:00 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
    this->_Name = std::string();
	this->_HitPoint = FragTrap::_HitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
{
    std::cout << "DiamondTrap parametrize Constructor Called" << std::endl;
    ClapTrap::_Name = name + "_clap_name";
    this->_Name = name;
    this->_HitPoint = FragTrap::_HitPoint;
	this->_EnergyPoint = ScavTrap::_EnergyPoint;
	this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap( const DiamondTrap &obj)
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
    *this = obj;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor Called" << std::endl;
}

DiamondTrap & DiamondTrap::operator = ( const DiamondTrap &obj )
{
    if (this == &obj)
        return *this;
    else
        this->_Name = obj._Name;
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name " << this->_Name << "ClapTrap Name " << ClapTrap::_Name << std::endl;
}

void	DiamondTrap::attack( std::string const & target )
{
    if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " Point  of damage !" << std::endl;
    else
    {
        std::cout << "clapTrap " << this->_Name << "died" << std::endl;
        return ;
    }
    this->_EnergyPoint--;
}