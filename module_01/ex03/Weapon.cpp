#include "Weapon.hpp"

std::string	Weapon::getType()
{
	return this->_type;
}

Weapon::Weapon(std::string Weapon_type)
{
	this->_type = Weapon_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(){}
Weapon::~Weapon(){}