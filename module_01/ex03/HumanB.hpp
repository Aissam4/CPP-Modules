
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__
#include  "Weapon.hpp"

class HumanB{
	private:
		Weapon _weapon;
		std::string _name;
	public:
		HumanB(std::string WeaponType);
		~HumanB();
		void	attack( void );
};
#endif
