
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__
#include  "Weapon.hpp"

class HumanA
{
	private:
		Weapon _weapon;
		std::string _name;
	public:
		HumanA(std::string name, Weapon WeaponType);
		~HumanA();
		void	attack( void );
};
#endif
