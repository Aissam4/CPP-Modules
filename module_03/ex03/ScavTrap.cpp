/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 21:17:28 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/01 17:35:04 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
    this->_Name = std::string();
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parametrize Constructor Called" << std::endl;
    this->_Name = name;
    this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap &obj)
{
    *this = obj;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap & ScavTrap::operator = ( const ScavTrap &obj )
{
    if (this == &obj)
        return *this;
    else{
        this->_AttackDamage = obj.getDamage();
        this->_Name = obj.getName();
        this->_HitPoint = obj.getHealth();
        this->_EnergyPoint = obj.getEnergy();
    }
    return (*this);
}

void ScavTrap::guardGate()
{
  if (this->_HitPoint > 0 && this->_EnergyPoint > 0) {
		std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper" << std::endl;
	} 
}
void	ScavTrap::attack( std::string const & target )
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