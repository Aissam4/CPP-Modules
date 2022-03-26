#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB(){};

void	HumanB::setWeapon(Weapon &WeaponType)
{
	this->_weapon = &WeaponType;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
