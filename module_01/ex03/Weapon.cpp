#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon_type)
{
	this->_type = Weapon_type;
}
std::string	Weapon::getType()
{
	return this->_type;
}


void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(){}
Weapon::~Weapon(){}