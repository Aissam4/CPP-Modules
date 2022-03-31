/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:58:41 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 13:58:02 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(){ std::cout << "Destructor Called" << std::endl; }

ClapTrap::ClapTrap( void )
{
    std::cout << "Default Constructor Called" << std::endl;
    _Name = std::string();
    _HitPoint = 10;
    _EnergyPoint = 10;
    _AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap &obj)
{
    std::cout << "copy constructor called" << std::endl;
    this->_AttackDamage = obj.getDamage();
    this->_Name = obj.getName();
    this->_HitPoint = obj.getHealth();
    this->_EnergyPoint = obj.getEnergy();
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "parameterized constructor called" << std::endl;
    _Name = name;
    _HitPoint = 10;
    _EnergyPoint = 10;
    _AttackDamage = 0;
}

std::string ClapTrap::getName(void) const {return (this->_Name);}
int         ClapTrap::getHealth(void) const { return (this->_HitPoint);}
int         ClapTrap::getEnergy(void) const {return (this->_EnergyPoint);}
int         ClapTrap::getDamage(void) const { return (this->_AttackDamage);}

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
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

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
    {
        std::cout << "ClapTrap Take " << amount << " of damage" << std::endl;
        this->_HitPoint -= amount;
        return;    
    }
     std::cout << "clapTrap " << this->_Name << " died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_EnergyPoint > 0 && this->_HitPoint > 0)
    {
        std::cout << "ClapTrap Take " << amount << "of Heal" << std::endl;
        this->_HitPoint += amount;   
        this->_EnergyPoint--;
    }
}
