/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarchil <abarchil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 01:28:23 by abarchil          #+#    #+#             */
/*   Updated: 2022/04/04 02:05:07 by abarchil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _Name;
        AMateria *slot[4];
		int      i;
    public:
        Character();
        Character(std::string name);
        Character(const Character &obj);
        std::string const & getName() const;
		void        equip(AMateria* m);
        void        unequip(int idx);
        void        use(int idx, ICharacter& target);
		Character & operator=( Character const & rhs );
        ~Character(){};
};
#endif