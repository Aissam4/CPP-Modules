/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 22:28:23 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 22:33:30 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->_Name = std::string();
	this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap parametrize Constructor Called" << std::endl;
    this->_Name = name;
    this->_HitPoint = 100;
	this->_EnergyPoint = 50;
	this->_AttackDamage = 20;
}

FragTrap::FragTrap( const FragTrap &obj)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
    *this = obj;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap & FragTrap::operator = ( const FragTrap &obj )
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

void FragTrap::highFivesGuys()
{
	if (this->_HitPoint > 0 && this->_EnergyPoint > 0) {
		std::cout << "FragTrap: " << this->_Name << " offers a high fives" << std::endl;
	}
}

void	FragTrap::attack( std::string const & target )
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