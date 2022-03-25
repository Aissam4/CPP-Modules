#include "HumanB.hpp"

HumanB::HumanB(std::string WeaponType)
{
	_weapon.setType(WeaponType);
}

HumanB::~HumanB(){};

void	HumanB::attack()
{
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}
