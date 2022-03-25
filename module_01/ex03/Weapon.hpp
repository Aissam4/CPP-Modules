
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
class Weapon
{
	private:
		std::string _type;
	public:
		Weapon();
		~Weapon();
		const std::string	&getType( void );
		void				setType(std::string type);
}
#endif