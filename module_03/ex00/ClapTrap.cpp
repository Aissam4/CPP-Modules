/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:58:41 by abarchil          #+#    #+#             */
/*   Updated: 2022/03/31 13:16:41 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(){ std::cout << "Destructor Called" << std::endl; }

ClapTrap::ClapTrap( void )
{
    _Name = std::string();
    _Health = 10;
    _Energy = 10;
    _Damage = 0;
}
std::string ClapTrap::getName(void) const {return (this->_Name);}
int         ClapTrap::getHealth(void) const { return (this->_Health);}
int         ClapTrap::getEnergy(void) const {return (this->_Energy);}
int         ClapTrap::getDamage(void) const { return (this->_Damage);}

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
{
    if (this == &obj)
        return *this;
    else{
        this->_Damage = obj.getDamage();
        this->_Name = obj.getName();
        this->_Health = obj.getHealth();
        this->_Energy = obj.getEnergy();
    }
    return (*this);
}

void attack(const std::string& target)
{
    
}
void takeDamage(unsigned int amount)
{
    
}
void beRepaired(unsigned int amount)
{
    
}
