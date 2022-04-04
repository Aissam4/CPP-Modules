/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:31:55 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 01:38:10 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->_Name = "NoName";
    this->i = -1;
}

Character::Character( std::string name)
{
    this->_Name = name;
    this->i = -1;
}

Character::Character(const Character &obj)
{
    *this = obj;
}

Character   & Character::operator=(const Character &obj)
{
    if (this != &obj)
    {
        this->_Name = obj.getName();
        this->i = obj.i;
        for (int j = 0; j < i; j++)
            this->slot[j] = obj.slot[j];
    }
    return *this;
}

std::string const & Character::getName() const { return this->_Name; }

void Character::equip(AMateria* m) {
	if (i < 3)
		this->slot[++this->i] = m;
}

void Character::unequip(int idx) {
	(void) idx;
}

void Character::use(int idx, ICharacter& target) {
	if (i > -1 && idx > - 1 && idx < 4)
		this->slot[idx]->use(target);
}
