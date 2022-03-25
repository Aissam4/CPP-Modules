#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon WeaponType)
{
	_name = name;
	_weapon = WeaponType;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::cout << this->_name << "attacks with their " << this->_weapon.getType() << std::endl;
}
